/*
Napraviti klasu za ocenu koja ce da ima datum polaganja ime predmeta i ocenu.Napraviti jedan konstruktor bez argumenata 
i jedan za inicijalizaciju.Imamo metodu za proveru da li je ucenik polozio.Koristiti setere i getere.
Zatim  napraviti kalsu Student koja ima argumente ime i prezime i broj indeksa.Klasa student ce da poziva 
klasu ocene i formirace ocene za 3 predmeta.Imace moetde:ukuono polozenih,prosek i ispis.*/

#include<iostream>
#include<string.h>

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