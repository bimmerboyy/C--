#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<string>
#include<iostream>
using namespace std;


// inverzija stringa korsicenjem steka preko niza

#define SIZE 10

int top = -1;
int s[SIZE];

bool isEmpty(){
    return top == -1;
}
bool isFull(){
    return top == SIZE-1;
}

string unesi(){
    string rec;
    printf("Unesi string:");
    scanf("%c",&rec);
    return rec;

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
        top --;
        return elem;
    }
    printf("Underflow");
    return -1;
} 

void display(){
    for(int i = top;i >= 0;i--){
        printf("%d \n", s[i]);
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