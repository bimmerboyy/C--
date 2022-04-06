//stack preko lančane liste:

#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int data;
    struct node* link;
}NODE;

struct node* top = NULL;

void push(int elem){
    struct node* temp = (struct node*) malloc(sizeof(struct node));
    if(temp == NULL){
        printf("Out of memory");
        return;
    }
    temp -> data = elem ;
    temp -> link = top;
    top = temp;
}

int pop(){
    struct node* temp = top;
    int elem =  temp -> data;
    top = top -> link;
    temp->link = NULL;
    free(temp);
    return elem;
}

void display(){
    struct node* temp = top;
    while(temp){
        printf("%d \n",temp->data);
        temp = temp -> link;
    }
}

int main(){
    int i;
    for(i=0; i<10; i++){
        push(i);
    }
    display();
    return 0;
}