#include<stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct node {
    int data;
    struct node *next;
}NODE;

struct node *first = NULL, *last = NULL, *temp = NULL;

bool isEmpty(){
    return first == NULL;
}

void ubaci(int elem){
    temp = (struct node*)malloc(sizeof(NODE));
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
        printf("%d \n", temp-> data);
        temp = temp-> next;
    }
}

struct node* invert(struct node* first){
    NODE *p, *q, *r;
    q = first;
    p = first;
    r = first;
    while(q != NULL){
        r = q;
        q = q -> next;
    }
    printf("%d      \n", r->data);
    return first;
}

int main(){
    ubaci(1);
    ubaci(2);
    ubaci(3);
    ubaci(4);
    invert(first);
}