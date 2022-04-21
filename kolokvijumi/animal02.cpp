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
    int day;
    char *name;
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
    void promeniIme(char *i){
        name = new char[20];
        strcpy(name,i);
    }
    char* getIme(){
        return name;
    }

    int promeniTezinu(int t){
        tezina = 0;
        tezina = t;
        return tezina;
    }
    int danOdPoslednjegMerenja(int dan){
        day = dan;
        return day;
    }
    void ispis(){
        cout<<"Zivotinja se zove "<<ime<<",ima "<<tezina<<" i proslo je "<<day<<" dana"<<endl;
    }
    void ispisPromenaImena(){
       
        cout<<"Novo ime je: ";
        cout << getIme();
    }
};

int main(){
    ZooAnimal a1((char*)"Pundja",70,3);
    a1.promeniTezinu(40);
    a1.danOdPoslednjegMerenja(4);
    a1.ispis();
    a1.promeniIme((char*)"Zoi");
    a1.ispisPromenaImena();


    return 0;
}