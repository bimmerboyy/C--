/*Zadatak 6. Napisati rekurzivni potprogram koji nalazi:
(a) (b) sumu svih elemenata lančane liste 
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

int suma(node* f){
    int s = f->value;
    if(f->next != NULL){
        s += suma(f->next);
    }
    return s;
}
int main() {
    ubaci(1);
    ubaci(2);
    ubaci(3);
    ubaci(4);
    int s = suma(first);
    printf("%d", s);
    return 0;
}