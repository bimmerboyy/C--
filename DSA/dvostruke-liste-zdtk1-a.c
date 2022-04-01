/*Zadatak 1. Brisanje elementa u dvostruko ulančanoj listi:
(a) S početka liste
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
void DeleteFirts(){
    struct Node* temp;
    temp = (struct Node*)malloc(sizeof(struct Node));
    temp = head;
    if(temp != NULL){
        head = temp->next;
        head->prev = NULL;
        free(temp);
    }
}
int main(){
 
    GetNode(1);
    GetNode(2);
    GetNode(3);
    printf("Lista je:\n");
    print();
    printf("Sada brisemo sa pocetka");
   DeleteFirts();
   return 0;
}