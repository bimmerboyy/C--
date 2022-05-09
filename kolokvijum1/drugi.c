#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 100

char niz[SIZE];
int top = -1;

bool is_empty(){
    return top == -1;
}

bool is_full(){
    return top == SIZE - 1;
}

void push(char elem){
    if(!is_full()){
        top++;
        niz[top] = elem;
        return;
    }
    printf("Greška pri upisivanju, stek je pun");
}

int pop(){
    if(!is_empty()){
        int elem = niz[top];
        top --;
        return elem;
    }
    printf("Underflow");
    return -1;
} 

void display(){
    for(int i = 0; i <= top; i++){
        printf("%c \n", niz[i]);
    }
}

int main(){
    char rec[100];
    printf("Unesite string :");
    fgets(rec, 100, stdin);
    int l = 0;
    char c = rec[l];
    while(c != '\0'){
        l++;
        c = rec[l]; 
    }
    push(c);
    for(int i = l-2; i>=-1; i--){
        push(rec[i]);
    }    
    for(int i = 0; i<=4; i++){
        printf("%c", niz[i]);
    }
    
    return 0;
}