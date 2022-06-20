#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<string.h>

#define MAX_NAME 256
#define TABLE_SIZE 10  

//Kreiramo prvo strukturu gde ubacujemo podatke koje zelimo

typedef struct person{
    char name[MAX_NAME];
    int age;

}PERSON;

//Pocinjemo od 5
unsigned int hash(char *name) {
    return 5;
}


int main(){
    printf("Tarik => %u\n",hash("Tarik"));
    printf("Nikola => %u\n",hash("Nikola"));
    printf("Ermin => %u\n",hash("Ermin"));
    return 0;
}