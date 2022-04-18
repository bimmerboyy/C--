#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef struct node{
    int data;
    struct node* next;
}NODE;

NODE *first = NULL,*last = NULL,*temp;

bool isEmpty(){
    if(first == NULL){
        return true;
    }
    return false;
}

void unos(int elem){
    temp = (struct node*)malloc(sizeof(struct node));
    temp->data = elem;
    temp->next = NULL;
    if(isEmpty()){
        first = temp;
        last = temp;
    }
    else{
        last->next = temp;
        last = temp;
    }
}
void display(){
    if(isEmpty()){
        printf("Lista je prazna");
        return;
    }
    temp = first;
    while(temp != NULL){
        printf("%d",temp->data);
        temp = temp->next;
    }
}
void posleZadatog(struct node *pom,int elem){
    temp = (struct node*)malloc(sizeof(struct node));
    temp->data = elem;
    temp->next = pom->next;
    pom->next = temp;
    if(pom == last){
        last = temp;
    }
    
}
void preZadatog(struct node *pom,int elem){
    temp = (struct node*)malloc(sizeof(struct node));
    temp->data = pom->data;
    pom->data = elem;
    temp->next = temp->next;
    pom->next = temp;
    if(isEmpty()){
        last = temp;
    }
}
void brisanjeNakon(struct node *pom){
    if(isEmpty()){
        printf("Prazna");
    }
    if(first == last){
        first = temp;
        last = temp;
        temp = NULL;
    }
    pom->next = temp;
    pom->next = temp->next;
    temp->next = NULL;
    free(temp);
}
void brisanjeZadatog(struct node *pom){
    if(isEmpty()){
        printf("Prazan");
        return;
    }
    if(pom == first && pom == last){
        first = last = pom;
        free(pom);
    }
    pom->next = temp;
    temp->next = pom->next;
    free(temp);

}
void brisanjeNaZadatojPoziciji(int pos){
    NODE* p,*q;
   

}
int main(){
    unos(1);
    unos(2);
    unos(3);
   
    preZadatog(first->next->next,4);
    
    display();

    return 0;
}

