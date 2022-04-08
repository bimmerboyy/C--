//implementacija redova preko kružne jednostruke liste

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct node {
    int data;
    struct node* link;
}NODE;

NODE *front, *rear;

void insert(int elem){
    NODE* temp = (NODE*) malloc(sizeof(NODE));
    if(temp==NULL){
        printf("out of memory");
        return;
    }
    else{
        temp -> data = elem;
        temp -> link = NULL;
        if(front == NULL){
            front = rear = temp;
        }
        else{
            rear-> link = temp;
            rear = temp;
            printf("Node has been inserted on the end successfully \n");
        }
    }
}

int brisanje(){
    int elem; 
    NODE *t;
    if(front == NULL){
        printf("Underflow");
        return -1;
    }
    else{
        t = front;
        elem = t -> data;
        if(front == rear){
            rear == NULL;
        }
        front = front -> link ;
        t->link = NULL;
        free(t);
        return(elem);
    }
}
//ispis 
void display(){
    NODE *t;
    t = front;
    if(front==NULL){
        printf("Empty");
        return;
    }
    while(t){
        printf("%d ", t->data);
        t = t->link;
    }
}



int main(){
    for(int i= 0; i<10; i++){
        insert(i);
    }
    for(int i= 0; i<5; i++){
        brisanje();
    }
    for(int i= 15; i<20; i++){
        insert(i);
    }
    display();
    return 0;
}