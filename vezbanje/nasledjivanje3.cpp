// Realizovati klase proizvod,radnik i prodavnica.
// Klasa Proizvod ima barKod,cena,kolicina.
// Metode:Konstruktor sa i bez argumenata,ispis.
// Klasa Radnik ima ime,prezime.
// Metode:Konstruktor sa i bez argumenata,ispis.
// Klasa prodavnica nasledjuje klase radnik i proizvod
// i dodaje brRadnih sati i cenaPoSatu.
// Metode:Konstruktor sa i bez argumenata,ispis,plata,
// prodaj(int kolicina).
// U main funkciji napravite dva objekta klase prodavnica
// i testirati sve metode.

#include <iostream>
#include <string>

using namespace std;

class Proizvod{
    protected:
    int barkod;
    float cena;
    float kolicina;
    public:
    Proizvod(){
        this->barkod = 1234;
        this->cena = 100;
        this->kolicina =1;
    }
    Proizvod(int barkod, float cena, float kolicina){
        this->barkod = barkod;
        this->cena = cena;
        this->kolicina = kolicina;
    }
    virtual void ispis(){
        cout << "Barkod : " << barkod << "cena: "<<cena << "kolicina: "<<kolicina<< endl;
    }
};

class Radnik{
    protected:
    string ime;
    string prezime;
    public:
    Radnik(){
        this->ime = "Besko";
        this->prezime = "Mekic"; // samo zbog veštačke
    }
    Radnik(string ime, string prezime){
        this->ime = ime;
        this->prezime = prezime; 
    }
    virtual void ispis(){
        cout << "ime : " << ime << "prezime : " <<prezime << endl;
    }
};

class Prodavnica : public Radnik, public Proizvod{
    private: 
    int broj_radnih_sati;
    float cena_po_satu;
    public:
    Prodavnica(){
        Radnik();
        Proizvod();
        this->broj_radnih_sati = 8;
        this->cena_po_satu = 10;
    }
    Prodavnica(int barkod, float cena, float kolicina, string ime, string prezime, int broj_radnih_sati, float cena_po_satu) : Proizvod(barkod, cena, kolicina), Radnik(ime, prezime){
        this->broj_radnih_sati = broj_radnih_sati;
        this->cena_po_satu = cena_po_satu;
    }
    void ispis(){
        Proizvod::ispis();
        Radnik::ispis();
        cout << "Broj radnih sati:"<< broj_radnih_sati <<", cena po satu: " <<cena_po_satu << endl;
    }
    void prodaj(int kolicina){
        this->kolicina -= kolicina;
    }
    float plata(){
        return this->broj_radnih_sati * this->cena_po_satu;
    }
};

int main(){
    Radnik r1("Tarik", "Kučević");
    Radnik r2("Nikola", "Matković");
    Radnik r3;
    Proizvod p1(4444, 200, 1);
    Proizvod p2;
    Prodavnica s1;
    s1.ispis();
    Prodavnica s2(555, 333, 2, "Marko", "petroivć", 6, 20);
    s2.ispis();
    return 0;
}