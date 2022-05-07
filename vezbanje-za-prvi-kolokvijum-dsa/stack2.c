#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct node{
    int data;
    struct node *next;
}NODE;

struct node *top = NULL, *temp = NULL;

bool is_empty(){
    return top == NULL;
}

void push(int elem){
    temp = (struct node*)(malloc(sizeof(struct node)));
    temp -> data = elem;
    temp -> next = top;
    top = temp ;
}

void display(){
    temp = top;
    while(temp != NULL){
        printf("%d", temp -> data);
        temp = temp -> next;
    }
}

int pop(){
    int elem;
    if(is_empty()){
        printf("Unerflow");
        return -1;
    }
    temp = top;
    elem  = top ->  data;
    top = top -> next;
    temp -> next = NULL;
    free(temp);
    return elem;
}

int  main(){
    push(1);
    push(2);
    push(3);
    push(4);
    pop();
    display();
    return 0;
}