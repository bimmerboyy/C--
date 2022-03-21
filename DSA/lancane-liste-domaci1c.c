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

int isEmpty(node* first){
    if(first == NULL){
        return 1;
    }
    return 0;
}

void ubaci(int a, node** first, node**last){
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

void ispis(node* first){
    temp = first;
    while(temp != NULL){
        printf("%d \n",  temp->value);
        temp = temp->next;
    }
}

void presek(node* first, node* second){
    node* temp1 = first;
    node* temp2 = second;
    while(temp1 != NULL){
        temp2 = second;
        while(temp2 != NULL){
            if(temp1->value == temp2->value){
                printf("%d", temp1->value);
            }
            temp2 = temp2->next;
        }
        temp1 = temp1->next;
    }
}

int main() {
    ubaci(1, &first1, &last1);
    ubaci(2, &first1, &last1);
    ubaci(3, &first1, &last1);
    ubaci(4, &first1, &last1);
    ubaci(5, &first1, &last1);
    ubaci(6, &first1, &last1);
    ubaci(7, &first2, &last2);
    ubaci(8, &first2, &last2);
    ubaci(9, &first2, &last2);
    ubaci(3, &first2, &last2);
    ubaci(1, &first2, &last2);
    ubaci(4, &first2, &last2);
    printf("prva : \n");
    ispis(first1);
    printf("druga: \n");
    ispis(first2);
    printf("presek \n");
    presek(first1, first2);
    return 0;
}