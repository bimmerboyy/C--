#include <iostream>
#include <string>

using namespace std;


class Proizvod{
    public:
    int bar_kod;
    float cena;
    float kolicina;
    poblic:
    Proizvod(){
        cout << "pozvao se konstrukotr bez arguenata klase proizvod" << endl;
        bar_kod = 123456;
        cena = 120;
        kolicina = 10;
    }
    Proizvod(int barkod, float cena, float kolicina){
        cout << "pozvao se konstrukotr sa argumnetima klase proizvod" << endl;
        this -> bar_kod = barkod;
        this -> cena = cena;
        this -> kolicina = kolicina;
    }
    void ispis_proizvoda(){
        cout << "Podaci o proizvodi : " << endl;
        cout << "bar kod : " << bar_kod << endl;
        cout << "cena: " << cena << endl;
        cout << "kolicina : " << kolicina << endl;

    }
};

class Radnik{
    public: 
    string ime;
    string prezime;
    Radnik(){
        cout << "pozvao se konstruktor bez argumenata klase Radnik"<<endl;
        ime = "aldin";
        prezime = "mekic";
    }
    Radnik(string ime, string prezime){
        cout << "Pozvao se konstrukror sa argumentima klase Radnik" << endl;
        this -> ime = ime;
        this -> prezime = prezime;
    }
    void ispis_radnika(){
        cout << "Podaci o radniku :: " << endl;
        cout << "Ime : " << Ime << endl;
        cout << "prezime : " << prezime << endl;        
    }
}

class Prodavnica : Radnik, Proizvod{
    public:
    int broj_radnih_sati;
    float cen_po_satu;
    public:
    Prodavnica(){
        cout << "Pozvao se konstruktor bez argumenata klase proizvod";
        broj_radnih_sati = 160;
        cena = 2000;
    }
    Prodavnica(int bk, float c, float k, string i, string p, string brrs, float cps) : Proizvod(bk, c, k), Radnik(i,p){
        cout << "Pozvao se konstruktor sa argumentima klase proizvod";
        broj_radnih_sati = brrs;
        cena = cps;
    }
    void ispis(){
        ispis_proizvoda();
        ispis_radnika();
        cout << "Broj radnih sati " << broj_radnih_sati << endl;
        cout << "cena po satu" << cen_po_satu << endl;
    }
    float plata(){
        return broj_radnih_sati / cen_po_satu;
    }
    void Prodaj(float kol){
        kolicina  -= (kol <= kolicina ) ? kol : 0;
    }
}; 

int main(){
    Prodavnica p(111111, 1000, 50, "predrag", "lončarević", 200, 1500);
    p.ispis();
    return 0;
}