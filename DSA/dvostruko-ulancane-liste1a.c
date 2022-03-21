#include<stdio.h>
#include<stdlib.h>

struct Node  {
	int data;
	struct Node* next;
	struct Node* prev;
};

struct Node* head;

struct Node* GetNewNode(int x) {
	struct Node* newNode
		= (struct Node*)malloc(sizeof(struct Node));
	newNode->data = x;
	newNode->prev = NULL;
	newNode->next = NULL;
	return newNode;
}

void InsertAtHead(int x) {
	struct Node* newNode = GetNewNode(x);
	if(head == NULL) {
		head = newNode;
		return;
	}
	head->prev = newNode;
	newNode->next = head; 
	head = newNode;
}

void InsertAtTail(int x) {
	struct Node* temp = head;
	struct Node* newNode = GetNewNode(x);
	if(head == NULL) {
		head = newNode;
		return;
	}
	while(temp->next != NULL) temp = temp->next; // Go To last Node
	temp->next = newNode;
	newNode->prev = temp;
}

void Print() {
	struct Node* temp = head;
	printf("Forward: ");
	while(temp != NULL) {
		printf("%d ",temp->data);
		temp = temp->next;}
	printf("\n");
}

void ReversePrint() {
	struct Node* temp = head;
	if(temp == NULL) return; 	while(temp->next != NULL) {
		temp = temp->next; }
		printf("Reverse: ");
	while(temp != NULL) {
		printf("%d ",temp->data);
		temp = temp->prev; }
	printf("\n");}

void brisanjeSaPocetka(){
    struct Node* temp = head;
    if(temp == NULL){
        return;
    }
    head = temp -> next;
    head -> prev = NULL;
    free(temp);
}
void brisanjeSaKraja(){
    struct Node* temp = head;
    if(temp == NULL){
        return;
    }
    while(temp -> next != NULL){
        temp = temp -> next;
    }
    temp -> prev -> next = NULL;
    temp -> prev = NULL;
    free(temp);
}
void deleteBefore(node* pom){
    struct Node* temp =  pom -> prev;
    pom -> prev = temp -> prev;
    temp-> prev = pom;
    printf("Obirisali ste  uspešno, %d", temp-> data);
    free(temp);
    if(pom == NULL).....
    if(pom == head)....
}
void deleteAfter(node* pom){
    struct Node* temp =  pom -> next;
    pom -> next = temp -> next;
    temp-> next = pom;
    printf("Obirisali ste  uspešno, %d", temp-> data);
    free(temp);
    
}