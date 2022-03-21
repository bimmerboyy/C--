/*Napisati potprogram koji na osnovu zadate vrednosti elementa:
(b) vraća element ako je nađen u listi
*/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


typedef struct node{
    int value;
    struct node* next;
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
    temp -> value = a;
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

void ispis(){
    temp = first;
    while(temp != NULL){
        printf("%d \n",  temp->value);
        temp = temp->next;
    }
}

int pretraga(int a){
    temp = first;
    while(temp != NULL){
        if(temp->value == a){
            return a;
        }
        temp = temp->next;
    }
}

int main() {
    ubaci(5);
    ubaci(6);
    ubaci(8);
    ubaci(11);
    ubaci(4);
    int brojZaPretragu; 
    printf("Unesite broj koji želite da pretražite: ");
    scanf("%d", &brojZaPretragu);
    if(pretraga(brojZaPretragu) == brojZaPretragu){
        printf("Broj %d je pronađen", brojZaPretragu);
    }
    return 0;
}