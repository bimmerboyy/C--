#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node *link;
}NODE;

NODE *front = NULL,*rear = NULL,*temp;

void insert(int elem){
    NODE* temp = (NODE*)malloc(sizeof(NODE));
    if(temp = NULL){
        printf("Out of memory");
    }
    temp ->data = elem;
    temp->link = NULL;
    if(front == NULL){
        front = rear = temp;
    }
    else{
        rear->link = temp;
        rear = temp;
    }
}
int brisanje(){
    int info;
    NODE *t;
    if(front == NULL){
        printf("Prazan");
        return -1;
    }
        t = front;
        info = front->data;
        
        


}