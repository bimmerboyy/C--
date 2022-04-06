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
    }else{
        temp -> data = elem;
        temp -> link = NULL;
        if(front == NULL){
            front = rear = temp;
        }
        else{
            rear-> link = temp;
            rear = temp;
            printf("Node has been inserted on the end successfully")
        }
    }
}

int delete(){
    int elem; 
    NODE *t;
    if(front == NULL){
        printf("Underflow");
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


int main(){
    return 0;
}