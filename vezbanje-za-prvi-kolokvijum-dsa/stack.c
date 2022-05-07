#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>


#define SIZE 10

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
    printf("Greška pri upisivanju, stek je pun");
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

void display(){
    for(int i = 0; i <= top; i++){
        printf("%d \n", s1[i]);
    }
}

int main(){
    push(1);
    push(2);
    push(3);
    push(4);
    pop();
    pop();
    display();
    return 0;
}