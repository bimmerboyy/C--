#include <iostream>
#include<stdlib.h>
using namespace std;
typedef struct node{
    int data;
    struct node *next;
}NODE;

NODE *first = NULL,*temp = NULL, *last = NULL;

int isEmpty(){
    if(first == NULL && last == NULL){
        return 1;
    }
    return 0;
}

void create(int elem){
    temp = (struct node*)malloc(sizeof(struct node));
    temp->data = 10;
    temp -> next = NULL;
    if(first == NULL){
        first = temp;
        last = temp;
    }
    else{
        last -> next = temp;
        last = temp;
    }
}
void insertAfter(NODE *pom,int elem){
    temp = (struct node*)malloc(sizeof(struct node));
    elem = 3;
    temp->data = elem;
    temp -> next = pom -> next;
    pom -> next = temp;
    if(pom == last){
        last = temp;
    }
}
void insert_before(NODE *pom,int elem){
    temp = (struct node*)malloc(sizeof(struct node));
    elem = 7;
    temp->data = elem;
    temp -> data = pom -> data;
    temp -> next = pom -> next;
    pom = pom ->next;
    if(pom == last){
        temp = last;
    }
}
void deleteAfter(NODE *pom){
    temp = pom -> next;
    pom -> next = temp -> next;
    temp -> next = NULL;
    delete temp;
}
void deleteActual(NODE *pom){
    if(pom == first && first == last){
        first = last = NULL;
        delete pom;
    }
    temp = pom->next;
    pom -> next = temp -> next;
    pom -> data = temp -> data;
    delete temp;
}
int deleteonPosition(int position){
    int brojac = 1;
    NODE *p,*q;
    p = first;
    q = NULL;
    if(position == 1){
        first = p -> next;
        delete p;
         return 1;
    }
    while(position != brojac){
        q = p;
        p = p -> next;
        deleteAfter(q);
    }
    

}
int main(){

}