//Zadatak 4. Napisati program kojim se briše  element s početka lančane liste.
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


typedef struct node{
    int value;
    struct node* next;
}NODE;



NODE *first = NULL, *last=NULL, *temp=NULL;

int isEmpty(){
    if(first == NULL){
        return 1;
    }
    return 0;
}

void ubaci(int a){
    temp = (struct node*)malloc(sizeof(struct node));
    temp -> value = a;
    temp -> next = NULL;
    if(isEmpty()){
        last = temp;
        first = temp;
    }
    else{
        last -> next = temp;
        last = temp;
    }
}

void ispis(){
    temp = first;
    while(temp != NULL){
        printf("%d \n",  temp->value);
        temp = temp->next;
    }
}

void izbrisiSaPocetka(){
    if(isEmpty()){
        return;
    }
    temp = first -> next;
    if(temp == NULL){
        free(first);
        first =  NULL;
        return ;
    }
    first -> next = NULL;
    free(first);
    first = temp;
}


int main() {
    ubaci(2);
    ubaci(1);
    izbrisiSaPocetka();
    ispis();
    return 0;
}