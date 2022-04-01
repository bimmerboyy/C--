/*
Zadatak 1. Brisanje elementa u dvostruko ulančanoj listi:

(d) Nakon zadatog elementa itd. (kao za jednostruko povezanu).
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
void DeleteAfter(struct Node *pom){
    struct Node *temp;
    temp = pom->next;
    pom->next = temp->next;
    temp->next->prev = pom;
    free(temp);

}