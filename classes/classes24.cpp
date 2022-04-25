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
    char imePredmeta[20];
    int ocena;
    char datum[15];
public:
    Ocena(){
        strcpy(imePredmeta,"OOP");
        ocena = 10;
        strcpy(datum,"20.03.2021");    
    }
    Ocena(char *i,int o,char *d){
        strcpy(imePredmeta,i);
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
    void setP(char *i){
        strcpy(imePredmeta,i);
    }
    void setO(int o){
        ocena = o;
    }
    void setD(char *d){
        strcpy(datum,d);
    }
    char* getP(){
        return imePredmeta;
    }
    int getO(){
        return ocena;
    }
    char* getD(){
        return datum;
    }

    void ispis(){
        cout<<"Predmet:"<<imePredmeta<<endl<<"Ocena:"<<ocena<<endl<<"Datum:"<<datum;
    }

};
/*Klasa Student ima privatne atribute: imeIprezime, brIndeksa, ocena1, ocena2 i ocena3
( objekti klase ocena). set i get metode. int ukupnoPolozenih()
 - vraca broj polozenih ispita. float prosek() - vraca prosek studenta.
ispis() - ispuje podatke o studentu i njegovim ocenama.
*/

class Student{
private:
    char imeiPrezime[20];
    char brIndeksa[15];
    Ocena ocena1,ocena2,ocena3;
public:
    Student(char *i,char *br,Ocena o1,Ocena o2,Ocena o3){
    strcpy(imeiPrezime,i);
    strcpy(brIndeksa,br);
    ocena1.setP(o1.getP());
    ocena1.setO(o1.getO());
    ocena1.setD(o1.getD());

    ocena2.setP(o2.getP());
    ocena2.setO(o2.getO());
    ocena2.setD(o2.getD());

    ocena3.setP(o3.getP());
    ocena3.setO(o3.getO());
    ocena3.setD(o3.getD());
    }
   void setO1(Ocena o1){
    ocena1.setP(o1.getP());
    ocena1.setO(o1.getO());
    ocena1.setD(o1.getD());
}
   void setO2(Ocena o2){
    ocena2.setP(o2.getP());
    ocena2.setO(o2.getO());
    ocena2.setD(o2.getD());
}
   void seto3(Ocena o3){
    ocena3.setP(o3.getP());
    ocena3.setO(o3.getO());
    ocena3.setD(o3.getD());
}
int UkupnoPolozenih(){
    int s = 0;
    if(ocena1.getO() > 5){
        s++;
    }
    if(ocena2.getO() > 5){
        s++;
    }
    if(ocena3.getO() > 5){
        s++;
    }
    return s;
}
float prosek(){
    float s = 0;
    if(ocena1.jeLiPolozio()){
        s++;
    }
    if(ocena2.jeLiPolozio()){
        s++;
    }
    if(ocena3.jeLiPolozio()){
        s++;
    }
    s = s/3;
    return s;
}
void ispis(){
    cout<<"Ime i prezime"<<imeiPrezime<<endl<<"Broj indeksa:"<<brIndeksa<<endl;
    ocena1.ispis();
    ocena2.ispis();
    ocena3.ispis();
}

};
int main(){
   Ocena o1((char*)"OOP",10,(char*)"15.05.2022");
   Ocena o2((char*)"DSA",7,(char*)"17.03.2022");
   Ocena o3((char*)"C",6,(char*)"04.06.2022");
   Student s1((char*)"Tarik Kucevic",(char*)"036089",o1,o2,o3);
   s1.ispis();
}