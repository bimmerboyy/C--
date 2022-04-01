#include <stdio.h>
#include<stdlib.h>

typedef struct node{
    int info;
    struct node *next;
}NODE;

NODE* rear = NULL,*front = NULL,*temp;

void Create(){
    struct node* newNode = (struct node*)malloc(sizeof(struct  node));
    printf("Unesite element");
    scanf("%lld",&newNode->info);
    newNode->next = NULL;
    if(rear == NULL){
        front = rear = newNode;
    
    }
    else{
        rear->next = newNode;
        rear = newNode;
        rear->next = front;
    }
   
}