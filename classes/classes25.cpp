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
#include<stdlib.h>
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
    string nadjiZanr(Zanr zanr){
        switch(zanr){
            case POP:
            return "POP";
            break;
            case REP:
            return "REP";
            break;
            case ROK:
            return "ROK";
            break;
            default: 
            return "GRESKA";
        }
    }
    
   string getIme(){
       return imeIzvodjaca;
   }
   Zanr getZanr(){
       return zanr;
   }
   void ispis(){
       cout<<imeIzvodjaca<<"("<<nadjiZanr(zanr)<<")"<<endl;
   }

    
};

class Pesma{
private:
    string nazivPesme;
    int min,sek,brIzvodjaca;
    int maksimalniBrIzvodjaca;
    Izvodjac *izv;
public:
    Pesma(int min,int sek,string nazivPesme,int maksmalniBrIzvodjaca){
        this->min = min;
        this->sek = sek;
        this->nazivPesme = nazivPesme;
        this->maksimalniBrIzvodjaca = maksmalniBrIzvodjaca;
        this->brIzvodjaca = 0;
        izv = new Izvodjac[maksmalniBrIzvodjaca];
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
     
    void ispis(){
        cout<<"P"<<"("<<nazivPesme<<" - "<<min<<" : "<<sek<<endl;
        for(int i = 0;i < brIzvodjaca;i++){
            izv[i].ispis();
        }
        
    }
};
int main(){
    Izvodjac i1("Sukro Sukrovic",POP);
    Izvodjac i2("Roki Role",REP);
    Izvodjac i3("Zeki Zeko",ROK);

    Pesma p1(3,45,"OK ti",2);
    Pesma p2(2,25,"Brko",2);
    Pesma p3(1,50,"Cigan sam",3);

    p1.dodajIzvodjaca(i1);
    p1.dodajIzvodjaca(i2);
    p2.dodajIzvodjaca(i1);
    p2.dodajIzvodjaca(i2);
    p2.dodajIzvodjaca(i3);
    p3.dodajIzvodjaca(i3);
    p3.dodajIzvodjaca(i3);

    p1.ispis();
    p2.ispis();
    p3.ispis();
    return 0;

}