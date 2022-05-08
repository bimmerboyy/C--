#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

#define SIZE 5

int s[SIZE];
int top = -1;

bool isEmpty(){
    return top == -1;
}

bool isFull(){
    return top == SIZE-1;
}

void push(int elem){
    if(!isFull()){
    top++;
    s[top] = elem;
    return;
    }
   
}
int pop(){
    if(!isEmpty()){
        int elem = s[top];
        top--;
        return elem;
    }
    return -1;
    
}

void display(){
    int i;
    for(i = 0;i <= top;i++){
        printf("%d,",s[i]);
    }   
}

int main(){
    push(1);
    push(2);
    push(3);
    push(4);
    display();

    return 0;
}