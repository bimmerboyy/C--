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

int pop(){
    if(isEmpty()){
        printf("Stek je prazan");
        return -1;
    }
    int elem = top->data;
    temp = top;
    top = top->next;
    temp->next = NULL;
    free(temp);
    return elem;
}

void display(){
    temp = top;
    while(temp != NULL){
        printf("%d\n",temp->data);
        temp = temp->next;
    }
}

int main(){
    push(1);
    push(2);
    push(3);
    push(4);
    push(5);
    pop();
    display();
    return 0;
}