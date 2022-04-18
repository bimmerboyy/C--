#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct node {
    int data;
    struct node *next;
}NODE;

NODE *first=NULL, *last=NULL, *temp=NULL;

bool isEmpty(){
    return first == NULL;
}

void ubaci(int elem){
    temp = (struct node*)malloc(sizeof(NODE));
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

void insert_after(int elem, NODE *pom){
    temp = (NODE*)malloc(sizeof(NODE));
    temp -> data = elem;
    temp -> next = pom -> next;
    pom -> next = temp;
    if(pom == last){
        last = temp;
    }
}

void insert_before(int elem, NODE *pom){
    temp = (NODE*)malloc(sizeof(NODE));
    temp -> data = pom -> data;
    temp -> next = pom -> next;
    pom -> data = elem;
    pom -> next = temp;
    if(pom == last){
        last = temp;
    }
}

void delete_after(struct node* pom){
    if(pom == last){
        printf("Nemoguće obrisati element");
        return;
    }
    if(isEmpty()){
        printf("prazna lista");
        return;
    }
    if(pom->next == last){
        last = pom;
    }
    temp = pom-> next; 
    pom -> next = temp -> next;
    temp -> next = NULL;
    free(temp);
}

void delete_actual(struct node *pom){
    if(first == last & first == pom){
        first = NULL;
        last = NULL;
        free(pom); // realno ne mora
        return;
    }
    temp = pom -> next; 
    pom -> next =  temp ->  next;
    pom -> data = temp -> data;
    free(temp);
}

void delete_before(struct node *pom){
    if(isEmpty()){
        printf("nemoguće obrisati praznu listu");
        return;
    }
    if(first == last & first == pom){
        printf("nemoguće obrisati pre  prvog elementa");
        return;
    }
    struct node *p = first;
    struct node *q = first -> next;
    while(q != pom){
        p = q;
        q = q -> next;
    }
    delete_actual(p);
}

void delete_on_position(int position){
    int count = 1;
    temp = first;
    if(position == 1){
        first = temp -> next;
        free (temp);
        return;
    }
    while(temp != NULL){
        if(position == count){
            delete_actual(temp);
            return;
        }
        count ++;
        temp = temp -> next;
    }
}

void delete_by_value(int vrednost){
    temp = first;
    while(temp != NULL){
        if(temp->data  == vrednost){
            delete_actual(temp);
        }
        temp = temp -> next;
    }
}

void display(){
    if(isEmpty()){
        printf("Prazan \n");
        return;
    }
    temp = first;
    while(temp != NULL){
        printf("%d \n", temp-> data);
        temp = temp-> next;
    }
}

int main(){
    ubaci(1);
    ubaci(2);
    ubaci(3);
    ubaci(4);
    delete_actual(first->next->next);
    display();
}