/*Zadatak 2. Pretvaranje jednostruko ulančane liste u kružno ulančanu i obrnuto.
*/

#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node *next;
}NODE;

NODE *first,*last,*temp;

void create(int elem){
    temp = (struct node*)malloc(sizeof(struct node));
    temp->data = elem;
    temp->next = NULL;
       if(first == NULL){
        first = last = temp;
    }
    else{
        last->next = temp;
        temp = last;
    }
}
void PretvaranjeuKruznu(){
    temp = (struct node*)malloc(sizeof(struct node));
    temp = first;
    while(temp->next != NULL){
        temp = temp->next;
        temp->next = first;
        
    }
}

