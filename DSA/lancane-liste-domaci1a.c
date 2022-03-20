/*Napisati potprogram koji na osnovu zadate vrednosti elementa:
(a)vraća 1 ako se elementa nalazi u lančanoj listi, u suprotnom vraća 0
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

bool pretraga(int a){
    temp = first;
    while(temp != NULL){
        if(temp->value == a){
            return true;
        }
        temp = temp->next;
    }
    return false;
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
    if(pretraga(brojZaPretragu)){
        printf("Broj %d se nalazi u lisiti", brojZaPretragu);
    }
    else{
        printf("Broj %d se NE nalazi u lisiti", brojZaPretragu);
    }
    return 0;
}   