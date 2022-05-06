//Zadatak 2. Napisati program kojim se svako pojavljivanje elementa el1 u listi zamenjuje elementom el2.

#include<stdio.h>
#include <stdlib.h>
#include<stdbool.h>

typedef struct node{
    int data;
    struct node *next;
}NODE;

NODE *first = NULL,*last = NULL,*temp;

bool isEmpty(){
    return first == NULL;
}

void unesi(int elem){
    temp = (struct node*)malloc(sizeof(struct node));
    temp->data = elem;
    temp->next = NULL;
    if(isEmpty()){
        first = temp;
        last = temp;
    }
    last->next = temp;
    last = temp;
}
void zamena(int elem,int zamena){
    temp = first;
    while(temp != NULL){
        if(temp->data = elem){
            temp->data = zamena;

        }
        temp = temp->next;
    }
}

void display(){
    temp = first;
    while(temp != NULL){
        printf("%d",temp->data);
        temp = temp->next;        
    }
}





int main(){


    return 0;
}