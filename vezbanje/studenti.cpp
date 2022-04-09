/*
Napraviti klasu za ocenu koja ce da ima datum polaganja ime predmeta i ocenu.Napraviti jedan konstruktor bez argumenata 
i jedan za inicijalizaciju.Imamo metodu za proveru da li je ucenik polozio.Koristiti setere i getere.
Zatim  napraviti kalsu Student koja ima argumente ime i prezime i broj indeksa.Klasa student ce da poziva 
klasu ocene i formirace ocene za 3 predmeta.Imace moetde:ukuono polozenih,prosek i ispis.*/

#include<iostream>
#include<string.h>
using namespace std;

class Ocena{
    private:
    char ime_predmeta[15],datum[10];
    int ocena;
    public:
    Ocena(){
        strcpy(ime_predmeta,"Osnovi Racunarstva");
        strcpy(datum,"17.04.2021");
        ocena = 7;
    }
    Ocena(char *ip,char *d,int o){
        strcpy(ime_predmeta,ip);
        strcpy(datum,d);
        ocena = o;
    }
    bool jeLiPolozio(){
        if(ocena > 5){
            return true;
        }
        else{
            return false;
        }
    }
    void setIP(char *ip){
        strcpy(ime_predmeta,ip);        
    }
    void setD(char *d){
        strcpy(datum,d);
    }
    void setO(int o){
        ocena = o;
    }
    char *getIP(){
        return ime_predmeta;
    }
    char *getD(){
        return datum;
    }
    int getO(){
        return ocena;
    }
};

class Student{
    private:
    char ime_prezime[30];
    int broj_indeksa;
    Ocena ocena1,ocena2,ocena3;
    public:
    Student(){
        strcpy(ime_prezime,"Tarik Kucevic");
        broj_indeksa = 0360/17/2021;
        ocena1.setO(8);
        ocena1.setIP("OOP");
        ocena1.setD("29.03.2022");
        ocena2.setO(7);
        ocena2.setIP("Elektrotehnika");
        ocena2.setD("13.07.2022");
        ocena3.setO(9);
        ocena3.setIP("Linearna");
        ocena3.setD("04.09.2022");
    }
};