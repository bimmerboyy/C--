#include <stdlib.h>
#include <stdio.h>

typedef struct node{
    int data;
    struct node *next;
}NODE;

struct node *first = NULL, *rear = NULL, *temp = NULL;

void create(int elem){ 
    struct node* new_node = (struct node*)malloc(sizeof(struct node));
    // printf("Unesite vrednost za unos:");
    // scanf("%d", &new_node -> data);
    new_node -> data = elem;
    if(first == NULL){
        first = rear = new_node;
    }
    else{
        rear -> next = new_node;
        rear = new_node;
    }
    rear -> next = first;
}

void delete_front(){
    temp = first;
    if(first == NULL){
        printf("Underflow");
    }
    else if(first == rear){
        first = rear = NULL;
        return;
    }
    else{
        first = first -> next;
        rear -> next = first;
    }
    temp -> next = NULL;
    free(temp);
}

void display(){
    if(first==NULL){
        printf("\nEmpty");
    }
    temp = first;
    printf("%d \n", temp-> data);
    while(temp != rear){
        temp = temp -> next;
        printf("%d \n", temp-> data);
    }
    
}

int main(){
    create(1);
    create(2);
    create(3);
    create(4);
    create(5);
    create(6);
    delete_front();
    display();
    return 0;
}

