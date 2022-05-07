//Zadatak 5. Napisati potprogram kojim se proverava da li su dve lančane liste L1 i L2 jednake.
/*Napisati potprogram koji na osnovu zadate vrednosti elementa:
(c) vraća presek dve lančane liste
*/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


typedef struct node{
    int value;
     struct node* next;
}NODE;



NODE *first1 = NULL, *last1=NULL, *temp;
NODE *first2 = NULL, *last2=NULL;


int isEmpty(struct node* first){
    if(first == NULL){
        return 1;
    }
    return 0;
}

void ubaci(int a, struct node** first, struct node**last){
    temp = (struct node*)malloc(sizeof(struct node));
    temp -> value = a;
    temp -> next = NULL;
    if(isEmpty((*first))){
        (*last) = temp;
        (*first) = temp;
    }
    else{
        (*last) -> next = temp;
        (*last) = temp;
    }
}

void ispis(struct node* first){
    temp = first;
    while(temp != NULL){
        printf("%d \n",  temp->value);
        temp = temp->next;
    }
}

bool isEaqule(struct node* first, struct node* second){
    bool zastava =  true;
    struct node* temp1 = first;
    struct node* temp2 = second;
    while(temp1 != NULL){
        if( temp1->value != temp2->value || temp2->next ==  NULL  && temp1->next != NULL || temp1->next ==  NULL  && temp2->next != NULL ) {
            return false;
        }
        temp1 = temp1->next;
        temp2 = temp2->next;
    }
    return zastava;
}

int main() {
    ubaci(1, &first1, &last1);
    ubaci(2, &first1, &last1);
    ubaci(3, &first1, &last1);
    ubaci(1, &first2, &last2);
    ubaci(2, &first2, &last2);
    ubaci(3, &first2, &last2);
    ubaci(4, &first2, &last2);
    if(isEaqule(first1, first2)){
        printf("Iste su");
    }
    else{
        printf("nisu iste");
    }
    return 0;
}