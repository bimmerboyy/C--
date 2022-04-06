//stack preko niza:

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX 10

int top = -1;
int s[MAX];

bool isEmpty(){
    return top == -1;
}

bool isFull(){
    return (top ==  MAX - 1);
}

void push(int elem){
    if(isFull()){
        printf("Overflow");
    }
    else{
        top++;
        s[top] = elem;
    }
}
int pop(){
    if(isEmpty()){
        printf("underflow");
        return -1;
    }
    int temp = s[top--];
    return temp;
}
void display(){
    if(isEmpty()){
        printf("empty");
        return;
    }
    int i=0;
    for(i; i<=top; i++){
        printf("%d", s[i]);
    }
}

int  main(){
    for(int i = 0; i<10; i++){
        push(i);
    }
    display();
    return 0;
}