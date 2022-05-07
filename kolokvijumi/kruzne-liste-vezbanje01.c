#include<stdio.h>
#include<stdlib.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node *next;
}NODE;

NODE *first = NULL,*last = NULL,*temp;

void unesi(int elem){
    temp = (struct node*)malloc(sizeof(struct node));
    temp->data = elem;
    temp->next = NULL;
    if(first == NULL){
        first = temp;
        last = temp;
    }
    else{
        last->next = temp;
        last = temp;
    }
    last->next = first;
}

void deleteFromFirst(){
    if(first == NULL){
        printf("Underflow");
        return;
    }
    if(first == last && temp == first){
        first = last = NULL;
        free(temp);
        return;
    }
    temp = first;
    first = temp->next;
    last->next = first;
    temp->next = NULL;
    free(temp);
}

void deleteActual(struct node *pom){
    if(first == NULL){
        printf("Underflow");
        return;
    }
    if(first == last && pom == first){
        first = last = NULL;
        free(pom);
        return;
    }
    if(pom == first){
        deleteFromFirst();
        return;
    }
    if(pom == last){
       struct node *p = first;
       struct node *q = first->next;
       while(q != pom){
           p = q;
           q = q->next;
       }
        p->next = first;
        pom->next = NULL;
        free(pom);
        return;
    }
    temp = pom->next;
    pom->data = temp->data;
    pom->next = temp->next;
    temp->next = NULL;
    free(temp);
}

void display(){
    temp = first;
    while(temp != last){
    printf("%d\n",temp->data);
    temp = temp->next;
    }
    printf("%d",temp->data);
}



int main(){
    unesi(1);
    unesi(2);
    unesi(3);
    unesi(4);
    unesi(5);
    //deleteFromFirst();
    deleteActual(last);
    display();
    return 0;
}