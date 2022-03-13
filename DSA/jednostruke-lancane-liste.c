#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct node {
    int vrednost;
    struct node *next;
}NODE;

NODE *first = NULL, *last=NULL, *temp=NULL;

int isEmpty(){
    if(first == NULL){
        return 1;
    }
    return 0;
}

void ubaci(int a){
    temp = (struct node*)malloc(sizeof(struct node));
    temp -> vrednost = a;
    temp -> next = NULL;
    if(isEmpty()){
        last = temp;
        first = temp;
    }
    else{
        last -> next = temp;
        last = temp;
    }
}

void ubaciNakon(NODE *pom, int elem){
    temp = (struct node*)malloc(sizeof(struct node));
    temp -> vrednost = elem;
    temp -> next = pom ->next;
    pom -> next = temp;
    if(pom == last){
        last = temp;
    }
}

void deleteAfter(NODE *pom){
    temp = pom -> next;
    pom -> next = temp -> next;
    temp -> next = NULL;
    free(temp);
}

void ispis(){
    temp = first;
    while(temp != NULL){
        printf("%d \n",  temp->vrednost);
        temp = temp->next;
    }
}

int  main(){
    ubaci(1);
    ubaci(2);
    ubaci(3);
    ubaci(4);
    ubaci(5);
    ubaciNakon(first->next, 7);
    printf("Ispis pre brisanja:  \n");
    ispis();
    deleteAfter(first->next->next);
    printf("Ispis posle brisanja:  \n");
    ispis();
    return 0;
}