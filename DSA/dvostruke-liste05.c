#include<stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node* prev;
    struct Node* next;
};

struct Node GetNode(int x){
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode -> data = x;
    newNode -> next = NULL;
    newNode -> prev = NULL;
}

void Invertovanje(){
    struct Node* temp = head;
    if(temp == NULL){
        return;
    }
    while(temp -> next != NULL){
        temp = temp-> next;
    }
    printf("zameni");
    while(temp != NULL){
        printf("%d",temp->data);
        temp = temp->prev;
    }
}