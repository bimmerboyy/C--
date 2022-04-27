/*
Napraviti klasu artikal koja ce imati atribute proizvod,cena,
enum od artikala(smoki,sladoled,cips,pepsi),kolicinu od savkog proizvoda,rok trajanja.Metode:Konstruktor sa argumentima i bez
cena sa popustom,sadrzaj artikla(smoki->kikiriki,maslac,soja),(sladoled->jagoda,led,zasladjivaci,mleko),(cips->krompir,so,ulje),
(pepsi->secer,zasladjivaci,kofein).Ispitati da li su prozivodi veganski na osnovu ovih podataka, i ispisati.
Napraviti klasu Prodavnica koja ce da sadrzi tri rafa od artikala.Ispitati u kojem rafu ima najvise proizvoda kod kojih
je istekao rok trajanja,ispitati koji raf ima najvise proizvoda,staviti u korpu i napraviti racun... ispis...


*/

#include<iostream>
#include<string>
using namespace std;

enum Proizvod {smoki,sladoled,cips,pepsi};

class Artikal{
private:
    Proizvod proizvod;
    int cena;
    int kolicinaProizvoda;
    string rokTrajanja;
public:
    Artikal(){
        proizvod = smoki;
        cena = 750;
        kolicinaProizvoda = 30;
        rokTrajanja = "02.03.2023";
    }
    Artikal(Proizvod proizvod,int cena,int kolicinaProizvoda,string rokTrajanja){
        this->proizvod = proizvod;
        this->cena = cena;
        this->kolicinaProizvoda = kolicinaProizvoda;
        this->rokTrajanja = rokTrajanja;
    }
    int cenaSaPopustom(int popust){
        popust = popust / 100;
        cena = cena * popust;
        return cena;
    }
    string nalazenjeProizvoda(Proizvod proizvod){
        switch(proizvod){
            case smoki:
            return "smoki";
            break;
             case sladoled:
            return "sladoled";
            break;
             case cips:
            return "cips";
            break;
             case pepsi:
            return "pepsi";
            break;
            default: 
            return "GRESKA";
        }
    }
    /*
  
 // Ne moze jer bi trebalo da se koristi preklapanje operatora

    void sadrzajartikla(Proizvod proizvod){
        int kolicinaSastojaka = 0;
        string *sastojci = new string[kolicinaSastojaka];
        string *smokic = new string[kolicinaSastojaka];
        sastojci[kolicinaSastojaka] = {"kikiriki","maslac","soja"};
        if(proizvod == smoki){
            for(int i = 0;i < kolicinaSastojaka;i++){
                smokic[i] = sastojci[i];
                kolicinaSastojaka++;
            }
            
        }

    }
    */
    //void setCena(i){

    //
    

};
