//(b) sumu svih elemenata lančane liste

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

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


//Bez rekurzije
// int suma(){
//     temp = first;
//     int s = 0;
//     while(temp != NULL){
//         s = s + temp->data;
//         temp = temp->next;
//     }
//     return s;
// }


int suma(struct node* temp){
    int s = temp->data;
    if(temp->next != NULL){
        s += suma(temp->next);
    }
    return s;
}

int main(){
    ubaci(1);
    ubaci(2);
    ubaci(3);
    ubaci(4);
    ubaci(5);
    display();
    printf("Suma svih el u listi je:");
    
    int s = suma(first);
    printf("%d",s);
   // suma();
}