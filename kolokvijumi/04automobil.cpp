
/*
	Realizovati klasu Automobil sa javnim atributima rezervoar i potrosnja
	Metode: inicijalizacija(gorivo,potrosnja),predji(km) koja pokrece automobil i prelazi km kilometara, 
    pri cemu se smanjuje nivo gorivo u zavinosti od potrosnje i predjenih km
	ispis() ispisuje podatke o Automobilu;adresa() ispisuje adresu objekta koji je pozvao ovu metodu
 * unutar metode adresa objekta koji je pozvao  je dostupna preko  kljucne reci this
 * this- adresa ojekta koji je pozvao metodu
 * *this-sam objekat
 **/
#include<iostream>
#include<string>

using namespace std;

class Automobil{
    public: 
    float rezervoar;
    float potrosnja;
    Automobil(float gorivo, float potrosnja){
        rezervoar = gorivo;
        this->potrosnja = potrosnja;
    }
    void predji(int km){
        float po_kilometru = potrosnja / 100;
        rezervoar -= po_kilometru*km;
    }
    void ispis(){
        cout<<"rezervoar: "<<rezervoar<< " Potrošnja: "<<potrosnja <<endl;
    }
    void adresa(){
        cout <<this <<endl;
    }
};

int main(){
    Automobil bmw(55, 6);
    bmw.predji(200);
    bmw.ispis();
    bmw.adresa();
    return 0;
}