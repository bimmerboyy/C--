//Implementacija preko lancane liste

#include<stdio.h>
#include<stdlib.h>

typedef  struct node{
    int data;
    struct node *link;
}NODE;
NODE *top = NULL;
void push(int elem){
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    if(temp == NULL){
        printf("Stek je prazan");
    }
    else{
        temp->data = elem;
        temp->link = top;
        top = temp;
    }

}
