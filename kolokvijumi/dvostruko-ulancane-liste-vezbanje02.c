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

void deleteActual(){
    
}

int main(){
    ubaciSaPocetka(1);
    ubaciSaKraja(2);
    ubaciSaKraja(3);
    ubaciSaKraja(4);
    ubaciSaKraja(5);
    //display();
    displayReverse();
    return 0;
}