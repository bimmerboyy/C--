#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef struct node{
    int data;
    struct node *next;
    struct node *prev;
}NODE;

NODE *first,*temp;

struct node ubaci(int elem){
    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = elem;
    newNode->next = NULL;
    newNode->prev = NULL;
    return *newNode;
}

void ubaciSaPocetka(int elem){
  struct node newNode = ubaci(elem);
  
}


int main(){

    return 0;
}