#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct node {
    int data;
    struct node* next;
}NODE;

struct node *first = NULL, *last=NULL, *temp=NULL;

bool isempty(){
    return first == NULL;
}

void unos(int elem){
    temp = (struct node*)malloc(sizeof(struct node)); 
    temp -> data = elem;
    temp ->  next = NULL;
    if(isempty()){       
        first = temp;   
        last = temp;
    }
    else{
        last -> next = temp;
        last = temp;
    }
}

void insertAfter(struct node* pom, elem){
    temp = (struct node*)malloc(sizeof(struc node));
    temp -> data = elme;
    temp -> next = pom -> next;
    pom -> next = temp;
    if(pom == last){
        last = temp;
    }
}

void insertBefore(struc node *pom, elem){
    temp = (struc node*)malloc(sizeof(struc node));
    temp -> data = pom-> data;
    temp -> next = pom -> next;
    pom -> data = elem;
    pom -> next = temp;
    if(pom==last){
        temp = last;
    }
}

void delete_after(node * pom){
    temp =  pom -> next;
    pom -> next = temp -> next;
    temp -> next = NULL;
    free(temp);
}

void display(){
    if(first == NULL){
        printf("Prazno \n");
        return;
    }
    temp = first;
    while(temp != NULL){
        printf("%d \n",temp->data);
        temp = temp -> next;
    }
}

int main(){
    unos(1);
    unos(2);
    unos(3);
    display();

    return 0;
}