#include<stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node *next;
    struct Node *prev;
};
struct Node* head = NULL;

struct Node GetNewNode(int x){
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode -> data = x;
    newNode -> next = NULL;
    newNode -> prev = NULL;
    return *newNode;

}

void InsertAtTail(int x){
    struct Node newNode = GetNewNode(x);
    struct Node* temp = head;
    if(head == NULL){
        *head = newNode;

    }
    while(temp->next != NULL){
        temp = temp->next;
        temp->next = newNode->prev;
        newNode->prev = temp;
    }   

}
