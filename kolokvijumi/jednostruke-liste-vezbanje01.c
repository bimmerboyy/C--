/*Zadatak 1. Napisati potprogram koji na osnovu zadate vrednosti elementa:
(a)vraća 1 ako se elementa nalazi u lančanoj listi, u suprotnom vraća 0
(b) vraća element ako je nađen u listi
(c) vraća presek dve lančane liste

*/

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef struct node{
    int data;
    struct node *next;
}NODE;

NODE *first = NULL,*last = NULL,*temp;

bool isEmpty(){
    return first = NULL;
}

void unos(int elem){
    temp = (struct node*)malloc(sizeof(struct node));
    temp->data = elem;
    temp->next = NULL;
    if(isEmpty()){
        first = temp;
        last = temp;
        return;
    }
    last->next = temp;
    last = temp;
}

void dipslay(){
    if(isEmpty()){
        printf("Lista je prazna");
        return;
    }
    temp = first;
    while(temp != NULL){
        printf("%d",temp->data);
        temp = temp->next;
    }
}


bool trazeniElement(int trazeniElem){
    temp = first;
    while(temp != NULL){
        if(temp->data == trazeniElem){
            printf("Trazeni elem je pronadjen\n");
            temp = temp->next;
            return true;
        }

    }
    printf("Trazeni elem nije pronadejn\n");
    return false;
}


int main(){
    unos(1);
    unos(2);
    unos(3);
    unos(4);
    unos(5);
    dipslay();
    return 0;
}