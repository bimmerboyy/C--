#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef struct node{
    int data;
    struct node *next;
    struct node *prev;
}NODE;

NODE *first = NULL,*last = NULL,*temp;

bool isEmpty(){
    return first == NULL;
}

void ubaci(int elem){
    struct node *newNode;
    newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = elem;
    if(isEmpty()){
        first = newNode;
        last = newNode;
    }
    else{
        last->next = newNode;
        newNode->prev = last;
        last = newNode;
    }
}

void display(){
    temp = first;
    while(temp != NULL){
        printf("%d\n",temp->data);
        temp = temp->next;
    }
}

void displayReverse(){
    temp = last;
    while(temp != NULL){
        printf("%d",temp->data);
        temp = temp->prev;
    }
}
int main(){

    return 0;
}