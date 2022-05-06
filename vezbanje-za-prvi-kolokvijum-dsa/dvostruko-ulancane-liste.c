#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct node{
    int data;
    struct node* prev;
    struct node* next;
}NODE;

NODE *first, *temp;

struct node* create_new_node(int x){
    temp = (struct node*)malloc(sizeof(struct node));
    new_node -> data = x;
    new_node -> next = NULL;
    new_node -> prew = NULL;
    return new_node;
}

void insert_at_head(int x){
    temp = create_new_node(x);
    if(head == NULL){
        head = temp;
        return; 
    }
    head -> prew = temp;
    temp -> next = head;
    head = temp;
}

void insert_at_tail(int x){
    temp = head;
    struct node* new_node = create_new_node(x);
    if(head == NULL){
        head = new_node;
        return;
    }
    while(temp != NULL){
        temp = temp-> next;
    }
    new_node -> prew = temp;
    temp -> next = new_node;
}

int main(){

    return 0;
}