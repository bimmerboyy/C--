//naći max jendostruke liste

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct node{
    int data;
    struct node* next;
}NODE;

NODE *first = NULL, *last = NULL, *temp = NULL;

bool isEmpty(){
    return first == NULL;
}

void create(int elem){
    temp = (struct node*)malloc(sizeof(struct node));
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
        printf("%d \n", temp -> data);
        temp = temp -> next;
    }
}

int max(){
    if(isEmpty()){
        printf("Prazan \n");
        return -1;
    }
    temp = first;
    int max = temp -> data;
    while(temp != NULL){
        if(temp -> data > max){
            max = temp -> data;
        }
        temp = temp -> next;
    }
    return max;
}

int  main(){
    create(13);
    create(2);
    create(1);
    display();
    printf("Najveći broj je %d", max());
    return 0;
}