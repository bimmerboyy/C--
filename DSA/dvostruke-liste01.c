#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int data;
    struct node* prev;
    struct node* next;
}NODE;

NODE *head = NULL;

int main(){

    head = (struct node*)malloc(sizeof(struct node));
    head-> prev = NULL;
    head -> data = 10;
    head -> next = NULL;
  
    return 0;
}