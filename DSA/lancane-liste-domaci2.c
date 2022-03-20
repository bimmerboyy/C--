/*Napisati potprogram koji na osnovu zadate vrednosti elementa:
(b) vraća element ako je nađen u listi
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

void zamena(int a, int b){
    temp = first;
    while(temp != NULL){
        if(temp->value == a){
            temp -> value = b;
        }
        temp = temp->next;
    }
}

int main() {
    ubaci(5);
    ubaci(5);
    ubaci(3);
    ubaci(5);
    ubaci(1);
    ubaci(5);
    ubaci(2);
    zamena(5, 9);
    ispis();
    
    return 0;
}