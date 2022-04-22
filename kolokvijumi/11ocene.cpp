/*Realizovati klasu Ocena koja ima tri privatna atributa: 
ime_predmeta, ocenu i datum. 
Metode: Konstruktor sa i bez argumenata, metodu jeLiPolozio() koja vraca true ako je student polozio ispit i false ako nije. 
Ispis() koja ispisuje podatke o oceni, set i get metode. 
Klasa Student ima privatne atribute: imeIprezime, brIndeksa, ocena1, ocena2 i ocena3
( objekti klase ocena). set i get metode. int ukupnoPolozenih()
 - vraca broj polozenih ispita. float prosek() - vraca prosek studenta.
ispis() - ispuje podatke o studentu i njegovim ocenama.
*/
#include <iostream>
#include <string>

using namespace std;

class Ocena{
    private:
    string ime_predmeta;
    int ocena;
    string datum;
    public:
    Ocena(string ime_predmeta, int ocena, string datum){
        this->ime_predmeta = ime_predmeta;
        this->ocena = ocena;
        this->datum = datum;
    }
    Ocena(){
        ime_predmeta = "OOP";
        ocena = 10;
        datum = "03.03.2022";
    }
    bool jeLiPolozio(){
        return ocena>5;
    }
    void ispis(){
        cout << "učenik ima " <<ocena << " iz " << ime_predmeta << " koju je dobio " << datum << endl;
    }
    void setOcena(int ocena){
        this->ocena = ocena;
    }
    void setIme_predmeta(string ime_predmeta){
        this->ime_predmeta = ime_predmeta;
    }
    void setDatum(string datum){
        this->datum = datum;
    }
    string getDatum(){
        return this->datum;
    }
    int getOcena(){
        return ocena;
    }
    string getImePredmeta(){
        return ime_predmeta;
    }
};
class Student{
    private:
    string imeIprezime;
    string brojIndeksa;
    Ocena ocena1;
    Ocena ocena2;
    Ocena ocena3;
    public:
    void set_ime_i_prezime(string ime){
        this->imeIprezime = ime;
    }
    void set_brojIndeksa(string brojIndeksa){
        this->brojIndeksa = brojIndeksa;
    }
    void set_ocena1(Ocena o){
        ocena1.setOcena(o.getOcena());
        ocena1.setDatum(o.getDatum());
        ocena1.setIme_predmeta(o.getImePredmeta());
    }
    void set_ocena2(Ocena o){
        ocena2.setOcena(o.getOcena());
        ocena2.setDatum(o.getDatum());
        ocena2.setIme_predmeta(o.getImePredmeta());
    }
    void set_ocena3(Ocena o){
        ocena3.setOcena(o.getOcena());
        ocena3.setDatum(o.getDatum());
        ocena3.setIme_predmeta(o.getImePredmeta());
    }
    int ukupnoPolozenih(){
        int s = 0;
        if(ocena1.jeLiPolozio()){
            s++;
        }
        if(ocena2.jeLiPolozio()){
            s++;
        }
        if(ocena3.jeLiPolozio()){
            s++;
        }
        return s;
    }
    float prosek(){
        int s = 0;
        s+= ocena1.getOcena();
        s+= ocena2.getOcena();
        s+= ocena3.getOcena();
        return (float) s / 3;
    }
    void ispis(){
        cout << imeIprezime << "Sa brojem indeksa : " << brojIndeksa << "ima sledeće ocene: " <<endl;
        ocena1.ispis();
        ocena2.ispis();
        ocena3.ispis();
        cout << "on ima" << ukupnoPolozenih() << " prelazin ocena,  i njegov prosek je " << prosek() << endl;
    }    
};

int main(){
    Student nikola;
    nikola.set_ime_i_prezime("Nikola matković");
    nikola.set_brojIndeksa("0360162021");
    Ocena o1("Osnovi racunarstva", 10, "januar");
    Ocena o2("Osnovi programiranja", 10, "decembar");
    Ocena o3("Linearna algebra", 5, "februar");

    nikola.set_ocena1(o1);
    nikola.set_ocena2(o2);
    nikola.set_ocena3(o3);
    nikola.ispis();
    return 0;
}