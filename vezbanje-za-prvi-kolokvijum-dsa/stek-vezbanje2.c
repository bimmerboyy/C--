//napraviti stek kod kojeg se istovremeno upisuju 2 elementta i istovremeno brišu 3 elementa

#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>


#define SIZE 7

int s1[SIZE];
int top = -1;

bool is_empty(){
    return top == -1;
}

bool is_full(){
    return top == SIZE - 1;
}

void push(int elem){
    if(!is_full()){
        top++;
        s1[top] = elem;
        return;
    }
    printf("Greška pri upisivanju, stek je pun \n");
}

int pop(){
    if(!is_empty()){
        int elem = s1[top];
        top --;
        return elem;
    }
    printf("Underflow");
    return -1;
} 

void push2(int elem1, int elem2){
    if(top < SIZE - 2){
        top++;
        s1[top] = elem1;
        top++;
        s1[top] = elem2;
        return;
    }
    printf("Greska pri upisivanju, stek je pun \n");
}

int  *pop3(){
    static int niz[3];
    if(top > 1){
        niz[0] = s1[top];
        top --;
        niz[1] = s1[top];
        top --;
        niz[2] = s1[top];
        top --;
        return niz;
    }
    printf("Underflow");
    return NULL;
} 
void display(){
    for(int i = 0; i <= top; i++){
        printf("%d \n", s1[i]);
    }
}

int main(){
    push2(1,2);
    push2(3,4);
    push2(5,6);
    push2(7,8);
    display();
    int* niz =  pop3();
    printf("nakon pop \n");
    display();
    printf("Izačeno sa pop funkcijom : \n");
    for(int i = 0; i<3; i++){
        printf("%d\n", niz[i]);
    }
    return 0;
}