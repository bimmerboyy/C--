//naći max jendostruke liste

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct node{
    int data;
    struct node* next;
}NODE;

NODE *first = NULL, *last = NULL, *temp = NULL;

bool isEmpty(){
    return first == NULL;
}

void create(int elem){
    temp = (struct node*)malloc(sizeof(struct node));
    temp -> data = elem;
    temp -> next = NULL;
    if(isEmpty()){
        first = temp;
        last = temp;
        return;
    }
    last -> next = temp;
    last = temp;
}

void display(){
    if(isEmpty()){
        printf("Prazan \n");
        return;
    }
    temp = first;
    while(temp != NULL){
        printf("%d \n", temp -> data);
        temp = temp -> next;
    }
}

bool pretraga(int elem){
    if(isEmpty()){
        printf("Prazan \n");
        return false;
    }
    temp = first;
    while(temp != NULL){    
        if(temp -> data == elem){
            return true;
        }
        if(temp -> data > elem){
            return false;
        }
        temp = temp -> next;
    }
    return false;
}

int  main(){
    create(1);
    create(2);
    create(4);
    create(5);
    create(6);
    (pretraga(3)) ? printf("Nađen") : printf("nije nađen");
    return 0;
}