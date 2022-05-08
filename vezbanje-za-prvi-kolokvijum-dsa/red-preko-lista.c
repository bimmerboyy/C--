#include <stdio.h> 
#include <stdlib.h>
#include <stdbool.h>

typedef struct node{
    int data;
    struct node *next;
}NODE;

struct node *front = NULL, *rear = NULL, *temp = NULL;

bool is_empty(){
    return front == NULL;
}

void insert(int elem){
    temp = (struct node*)malloc(sizeof(struct node));
    temp -> data = elem;
    temp -> next = NULL;
    if(is_empty()){
        front = rear = temp;
        return;
    }
    rear ->  next = temp;
    rear = temp;
}

int delete_sq(){
    if(is_empty()){
        printf("underflow \n");
        return -1;
    }  
    temp = front;
    int elem = front -> data;
    if(front == rear){
        rear == NULL;
    }
    front = front -> next;
    temp -> next  = NULL;
    free(temp);
    return elem;
}

void display(){
    if(is_empty()){
        printf("underflow \n");
        return ;
    }
    temp = front;
    while(temp != NULL){
        printf("%d \n", temp -> data);
        temp = temp -> next;
    }

}


int main(){
    insert(1);
    insert(2);
    insert(3);
    insert(4);
    delete_sq();
    display();
    return 0;
}