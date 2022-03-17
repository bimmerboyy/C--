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

}
int main(){

}