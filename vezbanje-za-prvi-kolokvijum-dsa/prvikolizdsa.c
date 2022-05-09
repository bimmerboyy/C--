//1 Lengh
// Obrsisi n ele
//3 palindrom

// inverzija stringa korsicenjem steka preko niza


#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef struct node{
    int data;
    struct node *next;
    struct node *prev;

}NODE;

NODE *first = NULL,*last = NULL,*temp;

bool isEmpty(){
    return first == NULL;
}


void unesi(int elem){
    temp = (struct node*)malloc(sizeof(struct node));
    temp->data = elem;
    temp->next = NULL;
    if(isEmpty()){
        first = temp;
        last = temp;
    }
    last->next = temp;
    temp->prev = last;
    last = temp;

}

void dipslay(){
    temp = first;
    while(temp != NULL){
        printf("%d\n",temp->data);
        temp = temp->next;
    }
}

int DuzinaListe(){
    temp = first;
    int pozicija = 0;
    while(temp != NULL){
        pozicija++;
        temp = temp->next;

    }
    return pozicija;
}

void obrisiTrenutni(struct node *pom){
    if(first == last && pom == first){
        first = NULL;
        last = NULL;
        free(pom);
        return;
    }
    if(pom == first){
        first = pom->next;
        pom->next = NULL;
        first->prev = NULL;
        free(pom);
        return;
    }
    if(pom == last){
        temp = pom->prev;
        temp->next = NULL;
        pom->prev = NULL;
        free(pom);
        return;
    }
    temp = pom->prev;
    temp->next = pom->next;
    pom->next = NULL;
    pom->prev = NULL;
    free(pom);


}

void obrisiN(int n){
    temp = first;
    while(temp != NULL){
        if(temp->data == n){
            obrisiTrenutni(temp);
        }
        temp = temp->next;
    }
}

void palindrom(){
    temp = first;
    struct node *q = first->next;
    while(temp != NULL){
        if(temp->data > q->data){
            
        }
    }
}

int main(){
    unesi(1);
    unesi(2);
    unesi(3);
    unesi(4);
    unesi(5);
    //obrisiTrenutni(last);
    obrisiN(2);
    dipslay();
    printf("Duzina liste je:%d",DuzinaListe());


    return 0;
}