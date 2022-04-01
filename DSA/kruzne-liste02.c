#include<stdlib.h>
#include<stdio.h>

typedef struct node{
    int info;
    struct node *next;
}NODE;

NODE *rear = NULL,*front = NULL,*temp;

void Create(){
    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    printf("Unesite element");
    scanf("%lld",&newNode->info);
    newNode->next = NULL;
    if(rear == NULL){
        rear = front = NULL;
    }
    else{
        rear->next = newNode;
        rear = newNode;
        rear->next = front;
    }
}
void Delete(){
    if(front == NULL){
        printf("Prazna");
    }
    else{
        if(front == rear){
           printf("%d",front->info);
            rear = front = NULL;

        }
    }
    
    {
        front = front->next;
        rear->next = front;
    }
    temp -> next = NULL;
    free(temp);
}