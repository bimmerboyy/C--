
//(d) zamenjuje svako pojavljivanje elementa el1 elementom el2
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef struct node {
    int data;
    struct node *next;
}NODE;

NODE *first=NULL, *last=NULL, *temp=NULL;

bool isEmpty(){
    return first == NULL;
}

void ubaci(int elem){
    temp = (struct node*)malloc(sizeof(NODE));
    temp -> data = elem;
    temp -> next = NULL;
    if(isEmpty()){
        first = temp;
        last = temp;
        return;
    }
    last -> next = temp;
    last = temp;
}

void display(){
    if(isEmpty()){
        printf("Prazan \n");
        return;
    }
    temp = first;
    while(temp != NULL){
        printf("%d \n", temp-> data);
        temp = temp-> next;
    }
}

void zamena(struct node* temp,int el1,int el2){
    if(temp->next == NULL){
        return;
    }
    if(temp->data == el1){
        temp->data = el2;
    }
    return zamena(temp->next,el1,el2);
}

int main(){
    
    ubaci(1);
    ubaci(2);
    ubaci(3);
    ubaci(4);
    ubaci(5);
    printf("Pre zamene:\n");
    display();
    printf("Posle zamene:\n");
    zamena(first,2,7);
    display();
    
    return 0;
}
