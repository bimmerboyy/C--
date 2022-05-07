#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef struct node{
    int data;
    struct node *next;
    struct node *prev;
}NODE;

NODE *first,*temp;

struct node* ubaci(int elem){
    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = elem;
    newNode->next = NULL;
    newNode->prev = NULL;
    return newNode;
}

void ubaciSaPocetka(int elem){
    temp = ubaci(elem);
    if(first == NULL){
        first = temp;
    }
    else{
        temp->next = first;
        first->prev = temp;
        temp->prev = NULL;
        first = temp;
    }
}

void ubaciSaKraja(int elem){
    temp = first;
    struct node *newNode = ubaci(elem);
    if(first == NULL){
        first = newNode;
    }
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->prev = temp;
}

void display(){
    temp = first;
    while(temp != NULL){
        printf("%d\n",temp->data);
        temp = temp->next;
    }
}

void displayReverse(){
    temp = first;
    while(temp->next != NULL){
        temp = temp->next;
    }
    while(temp != NULL){
        printf("%d\n",temp->data);
        temp = temp->prev;
    }
}

void deleteActual(struct node *pom){
  
    if(first == NULL){
        printf("Underflow\n");
    }
    if(first == pom && pom->next == NULL){
        pom = NULL;
        first = NULL;
        free(pom);
        return;
    }
    if(first == pom){
       first = pom->next;
       first->prev = NULL;
       pom->next = NULL;
       free(pom);
       return;
    }
    if(pom->next == NULL){
        temp = pom->prev;
        temp->next = NULL;
        pom->prev = NULL;
        free(pom);
        return;
    }
   
    temp = pom->prev;
    temp->next = pom->next;
    pom->next->prev = temp;
    pom->next = NULL;
    pom->prev = NULL;
    free(pom);
}

void deleteAfter(struct node *pom){
    deleteActual(pom->next);
}
void deleteBefore(struct node *pom){
    deleteActual(pom->prev);
}




int main(){
    ubaciSaPocetka(1);
    ubaciSaKraja(2);
    ubaciSaKraja(3);
    ubaciSaKraja(4);
    ubaciSaKraja(5);
    //deleteAfter(first);
    deleteBefore(first->next->next);
    //deleteActual(first);
    display();
    // displayReverse();
    return 0;
}