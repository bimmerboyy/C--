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
    struct node *new_node = (struct node*)malloc(sizeof(struct node));
    new_node -> data = x;
    new_node -> next = NULL;
    new_node -> prev = NULL;
    return new_node;
}

void insert_at_head(int x){
    temp = create_new_node(x);
    if(first == NULL){
        first = temp;
        return; 
    }
    first -> prev = temp;
    temp -> next = first;
    first = temp;
}

void insert_at_tail(int x){
    temp = first;
    struct node* new_node = create_new_node(x);
    if(first == NULL){
        first = new_node;
        return;
    }
    while(temp -> next != NULL){
        temp = temp -> next;
    } 
    temp -> next = new_node;
    new_node -> prev = temp;
}

//ispisivanje

void display(){
    temp = first;
    while(temp != NULL){
        printf("%d \n", temp->data);
        temp = temp->next;
    }
}

void display_reverse(){
    temp = first;
    while(temp -> next != NULL){
        temp = temp -> next;
    }
    while(temp != NULL){
        printf("%d \n", temp->data);
        temp = temp -> prev ;
    }
}

void delete_actual(struct node *pom){
    if(first == pom){
        first = pom -> next;
        first -> prev = NULL;
        free(pom);
        return;
    }
    struct node *prev = pom -> prev;
    if(pom -> next == NULL){
        prev -> next = NULL;
        pom -> prev = NULL;
        free(pom);
        return;
    }
    struct node *next = pom -> next;
    pom -> prev = NULL;
    pom -> next = NULL;
    free(pom);
    prev -> next = next;
    next -> prev = prev;
}

void delete_before(struct node *pom){
    delete_actual(pom -> prev);
}

void delete_after(struct node *pom){
    delete_actual(pom -> next);
}

int main(){
    insert_at_head(3);
    insert_at_head(4);
    insert_at_head(5);
    insert_at_tail(6);
    insert_at_tail(7);
    insert_at_tail(8);
    delete_actual(first -> next);
    delete_before(first -> next);
    delete_after(first);
    display();
    return 0;
}