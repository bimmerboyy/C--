/*Zadatak 6. Napisati rekurzivni potprogram koji nalazi:
(a) maksimalni element lančane liste
*/
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

/*
Bez rekurzije
void maksimalniEluListi(){
    temp = first;
    int max = temp->data;
    while(temp != NULL){
        if(temp->data > max){
            max = temp->data;
        }
        temp = temp->next;
    }
    printf("%d",max);

}
*/

int najveci(struct node* temp){
 // temp = first;
  int t;
  int maks = temp->data;
  if(temp->next != NULL){
      t = najveci(temp->next);
  }
  if(t > maks){
      maks = t;
  }
  return maks;
}




int main(){
    ubaci(1);
    ubaci(2);
    ubaci(7);
    ubaci(4);
   
    display();
    printf("Maksimalni el u listi je:");
   int max =  najveci(first);
   printf("%d",max);
     //maksimalniEluListi();
    return 0;
}