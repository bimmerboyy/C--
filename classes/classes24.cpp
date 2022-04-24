/*Realizovati klasu Ocena koja ima tri privatna atributa: 
ime_predmeta, ocenu i datum. 
Metode: Konstruktor sa i bez argumenata, metodu jeLiPolozio() koja vraca true ako je student polozio ispit i false ako nije. 
Ispis() koja ispisuje podatke o oceni, set i get metode. 
Klasa Student ima privatne atribute: imeIprezime, brIndeksa, ocena1, ocena2 i ocena3
( objekti klase ocena). set i get metode. int ukupnoPolozenih()
 - vraca broj polozenih ispita. float prosek() - vraca prosek studenta.
ispis() - ispuje podatke o studentu i njegovim ocenama.
*/

#include<iostream>
#include<string.h>

using namespace std;

class Ocena{
private:
    char imeiPrezime[20];
    int ocena;
    char datum[15];
public:
    Ocena(){
        strcpy(imeiPrezime,"Tarik Kucevic");
        ocena = 10;
        strcpy(datum,"20.03.2021");    
    }
    Ocena(char *i,int o,char *d){
        strcpy(imeiPrezime,i);
        ocena = o;
        strcpy(datum,d);
    }
    bool jeLiPolozio(){
        if(ocena > 5){
            return true;
        }
        else{
            return false;
        }
    }
    void setI(char *i){
        strcpy(imeiPrezime,i);
    }
    void setO(int o){
        ocena = o;
    }
    void setD(char *d){
        strcpy(datum,d);
    }
    void ispsi(){
        cout<<"Ime i prezime:"<<imeiPrezime<<endl<<"Ocena:"<<ocena<<endl<<"Datum:"<<datum;
    }

};
int main(){
   
}