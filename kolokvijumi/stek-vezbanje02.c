#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef struct node{
    int data;
    struct node *next;
}NODE;

NODE *top = NULL,*temp;

void push(int elem){
    temp = (struct node*)malloc(sizeof(struct node));
    temp->data = elem;
    temp->next = top;
    top = temp;
}

bool isEmpty(){
    return top == NULL;
}

void pop(){
    if(isEmpty()){
        printf("Stek je prazan");
        return;
    }
    int elem = top->data;
    temp = top;
    top = top->next;
    temp->next = NULL;
    free(temp);
}

void display(){
    temp = top;
    while(temp != NULL){
        printf("%d\n",temp->data);
        temp = temp->next;
    }
}

int main(){

    return 0;
}