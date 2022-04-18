#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

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

void insert_after(int elem, NODE *pom){
    temp = (NODE*)malloc(sizeof(NODE));
    temp -> data = elem;
    temp -> next = pom -> next;
    pom -> next = temp;
    if(pom == last){
        last = temp;
    }
}

void insert_before(int elem, NODE *pom){
    // printf("trenutno je poslednji1 %d  treba da unesem %d   \n", last-> data, elem);
    temp = (NODE*)malloc(sizeof(NODE));
    // printf("trenutno je poslednji2 %d treba da unesem %d   \n", last-> data, elem);
    
    temp -> data = pom -> data;
    // printf("trenutno je poslednji3 %d treba da unesem %d  \n", last-> data, elem);


    temp -> next = pom -> next;
    //printf("trenutno je poslednji4 %d treba da unesem %d  \n", last-> data, elem);

    pom -> data = elem;
    //printf("trenutno je poslednji5 %d treba da unesem %d  \n", last-> data, elem);

    pom -> next = temp;
    //printf("trenutno je poslednji6 %d treba da unesem %d  \n", last-> data, elem);
    
    if(pom == last){
        //printf("ušao sam u if7 %d treba da unesem %d  \n", last-> data, elem);
        last = temp;
        //printf("trenutno je poslednji8 %d treba da unesem %d  \n", last-> data, elem);
    }
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

int main(){
    ubaci(1);
    ubaci(2);
    ubaci(3);
    printf("last data: %d", last->data);
    insert_before(4, first->next->next);
    printf("last data: %d", last->data);
    insert_before(5, first->next->next->next);
    printf("last data: %d", last->data);
    insert_before(6, first->next->next->next->next);
    printf("last data: %d \n", last->data);
    display();
}