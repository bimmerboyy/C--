#include<stdio.h>
#include<stdlib.h>
struct Node  {
	int data;
	struct Node* next;
	struct Node* prev;
};

struct Node* head; //pok. na 1. elem.

struct Node* GetNewNode(int x) {
	struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
	newNode->data = x;
	newNode->prev = NULL;
	newNode->next = NULL;
	return newNode;
}


void InsertAthead(int x){
   struct Node* newNode = GetNewNode(x);
    if(head == NULL){
        head = newNode;
        return;
    }
    head = head->prev;
    newNode ->next = head;
    head = newNode;
}