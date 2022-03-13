#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int value;
    struct node *next;
}NODE;

NODE *temp,*sledeci, *first;

void ispis(){
    temp = temp;
    while(temp != NULL){
        printf("%d \n",  temp->value);
        temp = temp->next;
    }
}

int main(){
    temp = (struct node*)malloc(sizeof(struct node));
    temp->value = 3;
    temp->next = NULL;
    sledeci = (struct node*)malloc(sizeof(struct node));
    sledeci->value = 4;
    sledeci->next = NULL;
    temp->next = sledeci;
    ispis();
    return 0;
}
