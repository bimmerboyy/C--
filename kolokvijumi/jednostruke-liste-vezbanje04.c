//Zadatak 5. Napisati potprogram kojim se proverava da li su dve lančane liste L1 i L2 jednake.

#include<stdio.h>
#include <stdlib.h>
#include<stdbool.h>

typedef struct node{
    int data;
    struct node *next;
}NODE;

NODE *first1,*last1,*temp;
NODE *first2,*last2;

bool isEmpty1(){
    return first1 == NULL;
}
bool isEmpty2(){
    return first2 == NULL;
}

void unesi1(int elem){
    temp = (struct node*)malloc(sizeof(struct node));
    temp->data = elem;
    if(isEmpty1()){
        first1 = temp;
        last1 = temp;
    }
    last1->next = temp;
    last1 = temp;
}
void unesi2(int elem){
    temp = (struct node*)malloc(sizeof(struct node));
    temp->data = elem;
    if(isEmpty1()){
        first2 = temp;
        last2 = temp;
    }
    last2->next = temp;
    last2 = temp;
}

void display1(){
    temp = first1;
    while(temp != NULL){
        printf("%d\n",temp->data);
    }
    temp = temp->next;
}
void display2(){
    temp = first2;
    while(temp != NULL){
        printf("%d\n",temp->data);
    }
    temp = temp->next;
}

/*
bool provera(struct node *first,struct node *second){
    struct node *temp1 = first;
    struct node *temp2 = second;
    if(first1 == last1 && temp1 == first1 && first2 == last2 && temp2 == first2 && temp1->data == temp2->data){
        return true;
    }
    else{
        return false;
    }
    while(temp1 != NULL){
        if(temp1->data != temp2->data || temp2->next == NULL && temp1->next != NULL || temp1->next == NULL && temp2->next != NULL){
           
            return false;
        }
        if(temp1->data == temp2->data && temp1->next != NULL && temp2->next != NULL){
            return true;
        }
    temp1 = temp1->next;
    temp2 = temp2->next;
    }
    
   
    return true;
}
*/


int main(){
    unesi1(1);
    unesi1(2);
    unesi1(3);
    unesi1(4);
    unesi2(1);
    unesi2(2);
    unesi2(3);
    unesi2(4);
    display1();
    /*
    if(provera(first1,first2)){
        printf("Iste su");
    }
    else{
        printf("Nisu iste");
    }
    */
    

    return 0;
}