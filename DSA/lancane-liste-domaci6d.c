/*Zadatak 6. Napisati rekurzivni potprogram koji nalazi:
(d) zamenjuje svako pojavljivanje elementa el1 elementom el2
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

void zamena(node* f, int elem1, int elem2){
    if(f->next == NULL){
        return;
    }
    if(f->value  == elem1){
        f->value = elem2;
    }
    zamena(f->next,  elem1, elem2);
}

int main() {
    ubaci(1);
    ubaci(2);
    ubaci(3);
    ubaci(4);
    ubaci(1);
    ubaci(2);
    ubaci(3);
    ubaci(4);
    ubaci(1);
    ubaci(2);
    ubaci(3);
    ubaci(4);
    zamena(first, 3, 9);
    ispis();
    return 0;
}