#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct node {
    int vrednost;
    struct node *next;
}NODE;

NODE *first = NULL, *last=NULL, *temp=NULL;
NODE *first2 = NULL, *last2=NULL, *temp2=NULL;


//provera da li je lista prazna
int isEmpty(){
    if(first == NULL){
        return 1;
    }
    return 0;
}
int isEmpty2(){
    if(first2 == NULL){
        return 1;
    }
    return 0;
}

//ubacivanje novog elementa u listu 
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

void ubaciDrugu(int a){
    temp2 = (struct node*)malloc(sizeof(struct node));
    temp2 -> vrednost = a;
    temp2 -> next = NULL;
    if(isEmpty2()){
        last2 = temp2;
        first2 = temp2;
    }
    else{
        last2 -> next = temp2;
        last2 = temp2;
    }
}


//ubacivanje nakon nekog elementa u listu
void ubaciNakon(NODE *pom, int elem){
    temp = (struct node*)malloc(sizeof(struct node));
    temp -> vrednost = elem;
    temp -> next = pom ->next;
    pom -> next = temp;
    if(pom == last){
        last = temp;
    }
}

//ubacivanje pre nekog elementa
void ubaciPre(NODE* pom, int elem){
    temp = (struct node*)malloc(sizeof(struct node));
    temp -> vrednost = pom ->vrednost;
    temp -> next = pom ->next;
    pom ->  vrednost = elem;
    pom -> next = temp;
    if(pom == last){
        temp = last;
    }
}

//brisanje elementea nakon nekog elementa
void deleteAfter(NODE *pom){
    temp = pom -> next;
    pom -> next = temp -> next;
    temp -> next = NULL;
    free(temp);
}

//brisanje zadatkog čvora (elementa)
void deleteActual(NODE* pom){
    if(pom == first &&  first == last ){
        first = last = NULL;
        free(pom);
    }
    temp = pom->next;
    pom -> next = temp -> next;
    pom -> vrednost = temp -> vrednost;
    free(temp);
}

void  deleteByPosition(int pozicija){
    int i = 1;
    NODE* p, *q = NULL;
    p = first;
    if(pozicija == 1){
        first = p->next;
        free(p);
        return;
    }
    while(i!=pozicija){
        //printf("%d", p->vrednost);
        q = p;
        p = p->next;
        i++;
    }
    deleteActual(q);
}

//ispis liste
void ispis(){
    temp = first;
    while(temp != NULL){
        printf("%d \n",  temp->vrednost);
        temp = temp->next;
    }
}

//konkatencija 2 liste

NODE* concat (NODE * list1, NODE* list2){
    NODE* p;
    if(list1 == NULL){
        return list2;
    }
    else if(list2 == NULL){
        return list1;
    }
    p = list1;
    while(p->next != NULL){
        p = p->next;
    }
    p -> next = list2;
    return list1;
}


int  main(){
    // ubaci(1);
    // ubaci(2);
    // ubaci(3);
    // ubaci(4);
    // ubaci(5);
    // ubaciNakon(first->next, 7);
    // printf("Ispis pre brisanja:  \n");
    // ispis();
    // deleteAfter(first->next->next);
    // printf("Ispis posle brisanja:  \n");
    // ispis();
    // ubaci(1);
    // ispis();
    // deleteActual(first);
    // ispis();
    // ubaci(1);
    // ubaci(2);
    // ubaci(3);
    // ubaci(4);
    // ubaci(5);
    // deleteByPosition(1);
    // ispis();
    // ubaci(1);
    // ubaci(2);
    // ubaci(3);
    // ubaci(4);
    // ubaci(5);
    // ubaciDrugu(6);
    // ubaciDrugu(7);
    // ubaciDrugu(8);
    // concat(first, first2);
    // ispis();
    
    return 0;

}