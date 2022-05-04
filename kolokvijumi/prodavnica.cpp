/*
Napraviti klasu artikal koja ce imati atribute:
proizvod,cena,kolicinu od savkog proizvoda, rok trajanja. 
enum od artikala(smoki,sladoled,cips,pepsi):

Metode:
Konstruktor sa argumentima i bez,
cena sa popustom, sadrzaj artikla(smoki->kikiriki,maslac,soja),
(sladoled->jagoda,led,zasladjivaci,mleko),
(cips->krompir,so,ulje),
(pepsi->secer,zasladjivaci,kofein).
Ispitati da li su prozivodi veganski na osnovu ovih podataka, i ispisati.

Napraviti klasu Prodavnica koja ce da sadrzi tri rafa od artikala.
Ispitati u kojem rafu ima najvise proizvoda kod kojih
je istekao rok trajanja,
ispitati koji raf ima najvise proizvoda,staviti u korpu i napraviti racun... 
ispis...
*/
#include <iostream>
#include <string>

using namespace std;

enum Proizvodi {SMOKI, SLADOLED, CIPS, PEPSI};

class Artikal{
    private:
    string proizvod;
    float cena;
    int kolicina;
    string rok_trajanja;
    Proizvodi p;
    public:
    Artikal(float cena, float kolicina, string rok, Proizvodi p){
        this->cena = cena;
        this->kolicina = kolicina;
        this->rok_trajanja = rok;
        this->proizvod = nadji_proizvod(p);
    }
    Artikal(){
        this->cena = 1000;
        this->kolicina = 5;
        this->rok_trajanja = "01.01.2023";
        this->proizvod = nadji_proizvod(SMOKI);
    }
    string nadji_proizvod(Proizvodi p){
        switch (p){
            case SMOKI:
                return "smoki";
            case SLADOLED:
                return "sladoled";
            case CIPS:
                return "cips";
            case PEPSI:
                return "pepsi";
            default:
                return "unknown";
        }
    }
    float cena_sa_popustom(float popust){
        return cena  - ( cena * (popust / 100));
    }
    string sadrzaj_artikla(){
        string *sadrzaj;
        if(this->proizvod == "smoki")
            sadrzaj = new string[3];
            
        else if(this->proizvod == "sladoled")
            //sadrzaj = {"Jagoda", "led", "zasladjvaci", "mleko"};
        else if(this->proizvod == "cips") 
            //sadrzaj = {"krompir", "so", "ulje"};
        else if(this->proizvod == "pepsi"){
            //sadrzaj = {"secer", "zasladjvaci", "kofein"};
        }
        else{
            //sadrzaj = {"nepoznato"};
        }  
        return sadrzaj;
    }
    bool veganski(){
        string neveganski[] = {"maslac", "mleko"};
        cout <<  size(neveganski);
        return true;
    }
};

int main(){
    Artikal a1(100, 2, "01.11.2022", SLADOLED);
    a1.veganski();
    return 0;    
}