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

#include <iostream>
#include <string>

using namespace std;

enum Zanr { POP, REP, ROK };

class Izvodjac {
    private:
    string ime;
    Zanr zanr;
    public:
    Izvodjac(string ime, Zanr zanr){
        this->ime = ime;
        this->zanr = zanr;
    }
    Izvodjac(){
        ime = "Frenkie";
        zanr = REP;
    }
    string get_ime(){
        return ime;
    }
    Zanr get_zanr(){
        return zanr;
    }
    void ispis(){
        cout << ime << " (" << nadjiZanr(zanr) << ") "<<endl; 
    }
    string nadjiZanr(Zanr zanr){
        switch (zanr){
            case POP: 
                return "POP";
            case ROK: 
                return "ROK";
            case REP: 
                return "REP";
            default:
                return "Greška";
        }
    }

};

class Pesma{
    private:
    string naziv;
    int minuta;
    int sekundi;
    int maksimalni_broj_izvodjaca;
    int trenutni_broj_izvodjaca;
    Izvodjac *izv;
    public:
    Pesma(int m, int s, string naziv, int max){
        this->minuta = m;
        this->sekundi = s;
        this->naziv = naziv;
        this->maksimalni_broj_izvodjaca = max;
        this->trenutni_broj_izvodjaca = 0;
        izv = new Izvodjac[maksimalni_broj_izvodjaca];
    }
    int get_minuta(){
        return minuta;
    }
    int get_sekundi(){
        return sekundi;
    }
    friend bool duza(Pesma &p1, Pesma &p2){
        if(p1.minuta > p2.minuta || p1.minuta == p2.minuta  &&  p1.sekundi > p2.sekundi){
            return true;
        }
        return false;
    }
    void dodaj(Izvodjac i){
        if(trenutni_broj_izvodjaca < maksimalni_broj_izvodjaca){
            izv[trenutni_broj_izvodjaca] = i;
            trenutni_broj_izvodjaca++;
        }
    }
    void ispis(){
        cout << "P(" << naziv << " - " << minuta << " : " <<  sekundi << ")" << endl;
        for(int i=0; i<trenutni_broj_izvodjaca; i++ ){
            izv[i].ispis();
        }
    }
};

int main() {
    Izvodjac i1("Frenkie", REP);
    Izvodjac i2("Smoke", REP);
    Izvodjac i3("KOntra", REP);
    Pesma p1(3, 25, "Reci ko", 2);
    Pesma p2(4, 23, "Bio sam tu",2);
    p1.dodaj(i1);
    p1.dodaj(i2);
    p1.dodaj(i3);
    
    p2.dodaj(i1);
    p2.dodaj(i3);

    p1.ispis();
    p2.ispis();
    return 0;
}
