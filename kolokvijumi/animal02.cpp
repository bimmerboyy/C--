/*1. Креирајте функцију конструктора ЗооАнимал. Функција има 4
параметри -- низ знакова праћен три целобројна параметра.
У функцији конструктора динамички доделите поље имена (20
знакова), копирајте параметар низа знакова у поље за име,
а затим додијелите три параметра цагеНумбер,
веигхтДате, односно тежина

*/
#include<iostream>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
using namespace std;


class ZooAnimal{
    private:
    char ime[20];
    int tezina,brojKaveza;
    public:
    ZooAnimal(){
        strcpy(ime,"Roki");
        tezina = 50;
        brojKaveza = 7;
    }
    ZooAnimal(char *ime,int tezina,int brojKaveza){
        strcpy(this->ime,ime);
        this->tezina = tezina;
        this->brojKaveza = brojKaveza;
    }
    int promeniTezinu(int t){
        tezina = 0;
        tezina = t;
        return 0;
    }
};

int main(){
    ZooAnimal a1((char*)"Pundja",70,3);

    return 0;
}