#include<stdio.h>
#include<stdlib.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node *next;
}NODE;

NODE *first = NULL,*last = NULL,*temp;

void unsei(int elem){
    temp = (struct node*)malloc(sizeof(struct node));
    temp->data = elem;
    temp->next = NULL;
    if(first == NULL){
        first = temp;
        last = temp;
    }
    else{
        last->next = temp;
        last = temp;
    }
    last->next = first;
}


int main(){

    return 0;
}