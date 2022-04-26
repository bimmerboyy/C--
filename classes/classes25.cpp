/*Kreirati klasu Izvođač koja ima privatno zadato ime i zadat muzički žanr.
Žanr može biti POP, REP ili ROK (odraditi pomoću enumeracije)
i može se dohvatiti, ali se ne može menjati.
Metode konstruktor sa argumentima (naziv, zanr),
metoda ispis() koja ispisuje podatke o izvođaču u obliku ime (žanr).
Klasa Pesma ima privatne atribute naziv,
trajanje izraženo brojem minuta i brojem sekundi i maksimalni broj izvođača.
Svi podaci se zadaju prilikom stvaranja kroz konstruktor sa argumentina(naziv, minuta, sekundi, brIzvodjaca).
Može da se dohvati broj minuta i broj sekundi trajanja pesme ali ne mogu da se menjaju.
Pomoću prijateljske funkcije može da se proveri koja od dve zadate pesme traje duže. 
Metoda za dodavanje pojedinačnog izvođača (dodavanje ne uspeva u slučaju prekoračenja kapaciteta).
Metoda ispis koja na glavnom izlazu ispisuje u obliku: P(naziv – minuti : sekundi),
a zatim se pojedinačni izvođači ispisuju u zasebnim redovima.*/

#include<iostream>
#include<string>
using namespace std;

enum Zanr {POP,REP,ROK};


class Izvodjac{
private:
    string imeIzvodjaca;
    Zanr zanr;
public:
    Izvodjac(string imeIzvodjaca,Zanr zanr){
        this->imeIzvodjaca = imeIzvodjaca;
        this->zanr = zanr;

    }
   string getIme(){
       return imeIzvodjaca;
   }
   Zanr getZanr(){
       return zanr;
   }
   void ispis(){
       cout<<imeIzvodjaca<<"("<<zanr<<")"<<endl;
   }

    
};
/*
Klasa Pesma ima privatne atribute naziv,
trajanje izraženo brojem minuta i brojem sekundi i maksimalni broj izvođača.
Svi podaci se zadaju prilikom stvaranja kroz konstruktor sa argumentina(naziv, minuta, sekundi, brIzvodjaca).
Može da se dohvati broj minuta i broj sekundi trajanja pesme ali ne mogu da se menjaju.
Pomoću prijateljske funkcije može da se proveri koja od dve zadate pesme traje duže. 
Metoda za dodavanje pojedinačnog izvođača (dodavanje ne uspeva u slučaju prekoračenja kapaciteta).
Metoda ispis koja na glavnom izlazu ispisuje u obliku: P(naziv – minuti : sekundi),
a zatim se pojedinačni izvođači ispisuju u zasebnim redovima.*/

class Pesma{
private:
    string nazivPesme;
    int min,sek,brIzvodjaca;
    int maksimalniBrIzvodjaca;
    Izvodjac *izv;
public:
    Pesma(string nazivPesme,int min,int sek,int maksmalniBrIzvodjaca){
        this->nazivPesme = nazivPesme;
        this->min = min;
        this->sek = sek;
        this->maksimalniBrIzvodjaca = maksmalniBrIzvodjaca;
    }
    
    int getMin(){
        return min;
    }
    int getSek(){
        return sek;
    }
    friend bool duza(Pesma &p1,Pesma &p2){
        if(p1.min > p2.min){
            return true;
        }
        else if(p1.min == p2.min && p1.sek > p2.sek){
            return true;
        }
        else{
            return false;
        }
    }
    void dodajIzvodjaca(Izvodjac i){
        if(brIzvodjaca < maksimalniBrIzvodjaca){
            izv[brIzvodjaca] = i;
            brIzvodjaca++;
        }
    }
     /*P(naziv – minuti : sekundi),
a zatim se pojedinačni izvođači ispisuju u zasebnim redovima.*/
    void ispis(){
        cout<<"P"<<"("<<nazivPesme<<" - "<<min<<" : "<<sek<<endl;
        for(int i = 0;i < brIzvodjaca;i++){
            izv[i].ispis();
        }
        
    }
};