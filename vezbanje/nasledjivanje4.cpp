// Realizovati klase Dosije,Predmet i Ispit.
// Klasa dosije ima sledece zasticene atribute:
// ime,prezime,index
// Metode:Konstruktor sa i bez argumenata,predstaviSe()
// Klasa Predmet ima sledece zasticene atribute:
// imeProfesora,prezimeProfesora,nazivPredmeta
// Metode:Konstruktor sa i bez argumenata,opisPredmeta()
// Klasa Ispit nasledjuje zasticeno Dosije i Predmet.
// Dodaje atribute ocena i datum.
// Metode:Konstruktor sa i bez argumenata,ispis(),
// JeLiPolozio() - vraca 1 afako je student polozio,
// 0 u suprotnom.
// U main funkciji napraviti 2 studenta i testirati sve metode.
#include <iostream>

using namespace std;

class Dosije{
    protected:
    string ime;
    string prezime;
    string index; 
    public:
    Dosije (string ime = "Tarik", string prezime = "kučević", string index = "nempojma" ) : ime(ime), prezime(prezime), index(index) {};
    void predstaviSe(){
        cout<< "Ja sam " <<ime << " " <<prezime <<", moj broj indeksa je : " << index <<endl;
    }
    friend ostream&  operator<<(ostream& COUT, Dosije const& d1){
        cout<< "Ja sam " <<d1.ime << " " <<d1.prezime <<", moj broj indeksa je : " << d1.index <<endl;
        return COUT;
    }
};

class Predmet {
    protected:
    string ime_profesora;
    string prezime_profesora;
    string naziv_predmeta;
    public:
    Predmet(string ime_profesora = "Safet", string prezime_profesora = "Purković", string naziv_predmeta = "OOP") 
    : ime_profesora(ime_profesora), prezime_profesora(prezime_profesora), naziv_predmeta(naziv_predmeta) {};
    void opis_predmeta(){
        cout<< naziv_predmeta << "Predaje profesor" <<ime_profesora << " " << prezime_profesora <<endl;
    }
    friend ostream&  operator<<(ostream& COUT, Predmet const& p1){
       COUT<< p1.naziv_predmeta << "Predaje profesor" <<p1.ime_profesora << " " << p1.prezime_profesora <<endl;
        return COUT;
    }
};

class Ispit : protected Dosije, protected Predmet {
    protected:
    int ocena;
    string datum;
    public:
    Ispit(string ime, string prezime, string index, string ime_profesora, string prezime_profesora, string naziv_predmeta, int ocena,  string datum) :
    Dosije(ime, prezime, index), Predmet(ime_profesora, prezime_profesora, naziv_predmeta), ocena(ocena), datum(datum){

    }
    bool je_li_polozio(){
        return ocena > 5;
    }
    
};

// Dodaje atribute ocena i datum.
// Metode:Konstruktor sa i bez argumenata,ispis(),
// JeLiPolozio() - vraca 1 afako je student polozio,
// 0 u suprotnom.
// U main funkciji napraviti 2 studenta i testirati sve metode.

int main(){
    Dosije d1("nikola", "matković", "0360162021");
    Dosije d2;
    Ispit i1("Tarik", "kučević", "0360142021", "Edin", "Dolićanin", "Ort", 10, "25.4.2045");
    (i1.je_li_polozio()) ? cout << "idemo u Art" : cout << "idem kući d'učimo";
    return 0;
}