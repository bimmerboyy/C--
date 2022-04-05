//ponovo da skontam
#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node *link; 
}NODE;

NODE *top = NULL;

void push(int elem){
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    temp -> data  = elem;
    temp -> link = top;
    top = temp;
}

int main(){
    
}