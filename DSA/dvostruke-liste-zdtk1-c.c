/*
Zadatak 1. Brisanje elementa u dvostruko ulančanoj listi:

(c) Pre zadatog elementa
*/

#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *prev;
    struct Node *next;
};
struct Node *head;

struct Node GetNode(int x){
    struct Node* newNode;
    newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = x;
    newNode->next = NULL;
    newNode->prev = NULL;
    return *newNode;
}
void print(){
    struct Node *temp = head;
    while(temp != NULL){
        printf("%d",temp->data);
        temp = temp->next;
    }
    printf("\n");
}
void DeleteBefore(struct Node *pom){
    struct Node* temp;
   if(pom == NULL){
       printf("Nema elementa");
   }
   if(pom == head){
       head = NULL;
       free(head);
   }
   temp = pom -> prev;
   temp->prev->next = pom;
   pom->prev = temp->prev;
   free(temp);
}