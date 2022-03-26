#include<iostream>
#include<stdlib.h>
using namespace std;

// Brisanje elemenata kruzne liste

typedef struct  node{
    int info;
    struct node*next;

}NODE;

NODE* front= NULL,*rear = NULL,*temp;

void create(){
    struct node* newNode;
    newNode = (struct node*)malloc(sizeof(struct node));
    printf("Unsite element:");
    scanf("%d",&newNode->info);
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
void display(){
    if(front == NULL){
        printf("Nema liste");
    }
    else {
        for(;temp != rear;temp = temp->next){
            printf("Broj :%d,Adresa: %u,Next: %u",temp->info,temp,temp->next);
        }
    }
}