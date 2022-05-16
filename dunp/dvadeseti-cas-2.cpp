#include <iostream>
#include <string>

using namespace std;

class Dosije{
    protected:
    string ime;
    string prezime;
    string index;
    public:
    Dosije(){
        ime  = "nikola";
        prezime = "Makković";
        index = "036016";
    }
    Dosije(string ime, string prezime, string index){
        this -> ime  = ime;
        this -> prezime  = prezime;
        this -> index  = index;
    }
    void predstavi_se(){
        cout << "Ime: " << ime << " prezime: " << prezime <<  " indeks" << index << endl;
    }
};
class Predmet{
    protected:
    string ime_profesora;
    string prezime_profesora;
    string naziv_predmeta;
    public:
    Predmet(){
        ime_profesora = "Edis";
        prezime_profesora = "mekić";
        naziv_predmeta = "Elektrotehnika";
    }
    Predmet(string ime_profesora, string prezime_profesora, string naziv_predmeta){
        this -> ime_profesora = ime_profesora;
        this -> prezime_profesora =  prezime_profesora;
        this -> naziv_predmeta = naziv_predmeta;
    }
    void opis_predmeta(){
        cout << "Ime profesora: " << ime_profesora << " prezime profesora " << prezime_profesora << " naziv predmeta" << naziv_predmeta << endl;
    }
};
class Ispit : protected Dosije,  Predmet{
    int ocena;
    string datum;
    public:
    Ispit(){
        ocena = 6;
    }
    Ispit(string i, string p, int ind,  string i_p, string p_p, int n_p, int ocena, string datum): Dosije(i, p, ind) , Predmet(i_p, p_p, n_p){
        this -> ocena = ocena; 
        this -> datum = datum;
    }
    void ispis(){
        predstavi_se();
        opis_predmeta();
        cout "Ocena : " << ocena << " datum: " datum  << endl;
    }
};

int main(){
    Ispit i1("Nikola", "Matkovic", "036016",  "Edin", "Dolićanin", "ort", 10, "januar");
    i1.ispis();
}