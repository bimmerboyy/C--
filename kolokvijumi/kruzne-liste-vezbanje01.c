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

void deleteFromFirst(){
    if(first == NULL){
        printf("Underflow");
        return;
    }
    if(first == last && temp == first){
        first = last = NULL;
        return;
    }
    temp = first;
    first = temp->next;
    last->next = first;
    temp->next = NULL;
    free(temp);
}

void display(){
    temp = first;
    while(temp != last){
    printf("%d\n",temp->data);
    temp = temp->next;
    }
    printf("%d",temp->data);
}



int main(){

    return 0;
}