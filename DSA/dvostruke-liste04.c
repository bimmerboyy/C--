#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct node *prev;
    struct node *next;
};

struct Node* head;

struct Node GetNode(int x){
    struct Node* newNode;
    newNode ->data = x;
    newNode ->prev = NULL;
    newNode->next = NULL;
    return *newNode;
}
void Print(){
    struct Node* temp;
    temp = head;
    while (temp != NULL)
    {
        printf("%d",temp->data);
        temp = temp -> next;
    }
    printf("\n");
    
}