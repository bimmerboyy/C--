#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct node {
    int data;
    struct node *next;
}NODE;

NODE *first1=NULL, *last1=NULL, *temp=NULL;
NODE *first2=NULL, *last2=NULL;

bool isEmpty1(){
    return first1 == NULL;
}
bool isEmpty2(){
    return first2 == NULL;
}

void ubaci1(int elem){
    temp = (struct node*)malloc(sizeof(NODE));
    temp -> data = elem;
    temp -> next = NULL;
    if(isEmpty1()){
        first1 = temp;
        last1 = temp;
        return;
    }
    last1 -> next = temp;
    last1 = temp;
}
void ubaci2(int elem){
    temp = (struct node*)malloc(sizeof(NODE));
    temp -> data = elem;
    temp -> next = NULL;
    if(isEmpty2()){
        first2 = temp;
        last2 = temp;
        return;
    }
    last2 -> next = temp;
    last2 = temp;
}


void display1(){
    if(isEmpty1()){
        printf("Prazan \n");
        return;
    }
    temp = first1;
    while(temp != NULL){
        printf("%d \n", temp-> data);
        temp = temp-> next;
    }
}
void display2(){
    if(isEmpty2()){
        printf("Prazan \n");
        return;
    }
    temp = first2;
    while(temp != NULL){
        printf("%d \n", temp-> data);
        temp = temp-> next;
    }
}

struct node* concat(){
    if(isEmpty1()){
        return first2;
    }
    if(isEmpty2()){
        return first1;
    }
    last1->next = first2;
    return first1;
}


int main(){
    ubaci1(1);
    ubaci1(2);
    ubaci1(3);
    ubaci2(9);
    ubaci2(9);
    ubaci2(9);
    first1 =  concat();
    display2();
    display1();
}