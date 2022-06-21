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

//Definisemo hash tabelu sa pointerom iz razloga da mi mogli da je postavimo na null

PERSON *hashTable[TABLE_SIZE];

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
        //Ubacuje neku nsumicnu vrednost i kada nadje ostatak doda ga npr ako je niz imena 120 a ostatak cuva hash recimo 7
        //Tada ce hash vrednost biti 127 i ponovo ce se mnozit i tako 5 puta
        //Peti put kada nadje taj ostatak on ce ga uabciti na tu verdnost ostatka
        hashValue += name[i];
        //Zatim pomnozi tu vrednist sa vrednscu imena i nadje ostatak
        hashValue = (hashValue * name[i]) % TABLE_SIZE;
        
        
    }
    return hashValue;
    //return 5; Da ne bi ponavljao stalno 5 uzmemo duzinu niza  u koju ubacujemo imena
}

//Postavljamo tabelu na NULL
void initHashTable(){
    for(int i = 0; i < TABLE_SIZE; i++){
        hashTable[i] = NULL;
    }
}
//Ispis tabele ukoliko je prazna ispisace samo prazna polja a ukoliko nije ispisace imena 
void printTable(){
    for(int i = 0; i < TABLE_SIZE; i++){
        if(hashTable[i] == NULL){
            printf("\t%i\t---",i);
        }
        else{
            printf("\t%i\t %s \n",i,hashTable[i]->name);
        }
    }
}

bool hashTableInsert(PERSON *p){
    if(p == NULL) return false;
}


int main(){
    initHashTable();
    printTable();
    // printf("Tarik => %u\n",hash("Tarik"));
    // printf("Nikola => %u\n",hash("Nikola"));
    // printf("Ermin => %u\n",hash("Ermin"));
    return 0;
}