/*Zadatak 1. Brisanje elementa u dvostruko ulančanoj listi:
(b) S kraja liste
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
void DeleteLast(){
    struct Node *temp;
    temp = head;
    /* Sa pom
    struct Node *pom;
    while(temp->next != NULL){
         sa pom
        temp = temp->next;
        pom = temp->prev;
        temp->prev = NULL;
        pom->next = NULL;
        free(temp);
    }
    */
    //Bez pom
    while(temp->next != NULL){
        temp->prev->next = NULL;
        temp->prev = NULL;
        free(temp);
    }

}