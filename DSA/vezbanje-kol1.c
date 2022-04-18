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