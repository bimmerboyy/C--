/*Zadatak 6. Napisati rekurzivni potprogram koji nalazi:
(a) maksimalni element lančane liste,
*/
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

int najveci(node* f){
    int max  = f -> value;
    int t;
    if(f->next != NULL){
        t = najveci(f -> next);
    }
    if(t > max ){
        max = t;
    }
    return max;
}


int main() {
    ubaci(5);
    ubaci(6);
    ubaci(8);
    ubaci(11);
    ubaci(4);
    int max = najveci(first);
    printf("%d", max);
    return 0;
}