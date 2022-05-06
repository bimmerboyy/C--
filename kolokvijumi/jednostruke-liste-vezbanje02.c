#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef struct node{
    int data;
    struct node *next;
}NODE;

NODE *first1 = NULL,*last1 = NULL,*temp;
NODE *first2 = NULL,*last2 = NULL;

bool isEmpty(struct node *first){
    if(first == NULL){
        return true;
    }
    return false;

}

void unos(int elem,struct node *first,struct node *last){
    temp = (struct node*)malloc(sizeof(struct node));
    temp->data = elem;
    temp->next = NULL;
    if(isEmpty(first)){
        first = temp;
        last = temp;
    }
    last ->next = temp;
    last = temp;
}

void display(struct node *first){
    if(isEmpty(first)){
        printf("Lista je prazna\n");
    }
    temp = first;
    while(temp != NULL){
        printf("%d",temp->data);
        temp = temp->next;
    }
    
}

void presek(struct node *first,struct node *second){
    struct node *temp1 = first;
    struct node *temp2 = second;
   while(temp1 != NULL){
       temp2 = second;
   
   while(temp2 != NULL){
       if(temp1->data == temp2->data){
           printf("%d",temp1->data);
       }
       temp2 = temp2->next;
   }
    temp1 = temp1->next;      
   
   }
}

int main(){
    
    unos(4,first1,last1);
    unos(5,first1,last1);
    unos(2,first1,last1);
    unos(7,first1,last1);
 
    unos(3,first2,last2);
    unos(6,first2,last2);
    unos(5,first2,last2);
    unos(2,first2,last2);
    unos(10,first2,last2);
    printf("Prva lista:\n");
    display(first1);
    printf("Druga lista:\n");
    display(first2);
    presek(first1,first2);
}

