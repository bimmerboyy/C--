#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<string.h>
#include <sys/types.h>
#include<stdint.h>

#define MAX_NAME 256
#define TABLE_SIZE 10  

//Kreiramo prvo strukturu gde ubacujemo podatke koje zelimo

typedef struct person{
    char name[MAX_NAME];
    int age;

}PERSON;

//Pocinjemo od 5
unsigned int hash(char *name) {
    //Uzima prosecnu duzinu imena to je kod nas 5 jer Tarik i Ermin imaju 5 slova a Nikola 6
    int lenght = strlen(name);
    printf("Duzina niza imena je:%d\n", lenght);
    //Kreira hash vrednost i stavlja je na 0
    unsigned int hashValue = 0;
    //For petljom prolazimo kroz niz imena koji je max 256 i on ce imati nasumicnu vrednost npr 86/256
    //Tu vrednost ubacuje u hash vrednost 
    for (int i = 0; i < lenght; i++){
        hashValue += name[i];
        printf("\nNiz imena je:%d\n",name[i]);
        printf("\nHash vrednost je:%d\n",hashValue);
        hashValue = (hashValue * name[i]) % TABLE_SIZE;
        
        printf("Kada se ubaci u tabelu hash vrednost je:%d\n",hashValue);
    }
    return hashValue;

    
    //return 5; Da ne bi ponavljao stalno 5 uzmemo duzinu niza  u koju ubacujemo imena
}


int main(){
    printf("Tarik => %u\n",hash("Tarik"));
    printf("Nikola => %u\n",hash("Nikola"));
    printf("Ermin => %u\n",hash("Ermin"));
    return 0;
}