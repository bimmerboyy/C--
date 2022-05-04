#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef struct node{
    int data;
    struct node *next;
}NODE;

NODE *first = NULL,*last = NULL,*temp;

bool isEmpty(){
    if(first == NULL){
        return true;
    }
    else return false;
}

void ubaci(int elem){
    temp = (struct node*)malloc(sizeof(struct node));
    temp->data = elem;
    temp->next = NULL;
    if(isEmpty()){
        first = temp;
        last = temp;
    }
    last->next = temp;
    last = temp;

   
}
void dipslay(){
    if(isEmpty()){
        printf("Lista je prazna");
        return;
    }
    if(first == last & temp == last){
        printf("Lista ima samo 1 elem i to je:",temp->data);

    }
    temp = first;
    
}