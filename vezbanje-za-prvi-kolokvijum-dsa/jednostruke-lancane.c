#include <stdio.h>
#include <stdlib.h>
#include <stdbool>

typedef struct node{
    int data;
    struct node* next;
}NODE;

NODE *first = NULL, *last = NULL, *temp = NULL;

bool isEmpty(){
    return first == NULL;
}

void create(int elem){
    temp = (struct node*)malloc(sizeof(struct node));
    temp -> data = elem;
    temp -> next = NULL;
    if(isEmpty()){
        first = temp;
        last = temp;
        return;
    }
    last -> next = temp;
    last = temp;
}

void insert_after(struct node* pom, int elem){
    temp = (struct node*)malloc(sizeof(struct node));
    temp -> data = elem;
    temp -> next = pom -> next;
    pom -> next = temp;
    if(pom==last){
        last = temp;
    }
}

void insert_before(struct node* pom, int elem){
    temp = (struct node*)malloc(sizeof(struct node));
    temp -> data = pom -> data;
    temp -> next = pom -> next;
    pom-> data = elem;
    pom -> next = temp;
    if(pom == last){
        last = temp;
    }
}

void delete_after(node *pom){
    if(pom == last){
        printf("nemoguće je obisati zadnji element");
        return;
    }
    if(isEmpty()){
        printf("prazna lista");
        return;
    }
    if(pom->next == last){
        last = pom;
    }
    temp = pom -> next;
    pom -> next = temp -> next;
    temp -> next = NULL;
    free(temp);
}

void delete_actual(){
    if(first == last && pom == first){
        first = NULL;
        last = NULL;
        free(pom);
        return;
    }
    temp = pom -> next;
    pom -> next  = temp -> next;
    pom -> data = temp -> data;
    free(temp);
}

int  main(){
    return 0;
}