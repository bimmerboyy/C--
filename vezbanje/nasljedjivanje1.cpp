// Realizovati klase Datum i Rodjendan.
// Klasa Datum ima javne atribute dan,mesec i godina.
// Metode: konstruktor sa i bez argumenata, 
// ispis koja ispisuje u formatu Danas je d.m.g,
// Datum uporedi(Datum d)  metoda koja upoređuje trenutni datum i datum koji dolazi kao argument (d)
// i vraća koliko dana, meseci  i godina ima između ova dva datuma.

// Klasa Rodjendan nasledjuje javno klasu Datum i dodaje ime i prezime osobe. 
// Metode: konstruktor sa i bez argumenata, 
// bool daLiJe(Datum d) koja vraća true ako jeste rodjendan datuma d,
// odnosno false ako nije.
// void ispisSlavljenika(Datum dat) koja ispisuje poruku ako je danas rodjendan osobi, 
// a ako nije onda ispisuje jos koliko dana i meseci ima do rodjendana 
// (koristeći metodu klase Datum za nalaženje razlike –
// to je moguće jer je klasa Rodjendan nasledila sve atribute i metode klase Datum),
// int godine(Datum dat) koja vraća koliko godina ima osoba do datuma dat koji dolazi kao argument.
#include <iostream>

using namespace std;

class Datum {
    public:
    int dan;
    int mesec;
    int godina;
    Datum(int dan = 1, int mesec = 1, int godina = 2022){
        this->dan = dan;
        this->mesec = mesec;
        this->godina = godina;
    }
    void ispis(){
        cout<<dan <<"." <<mesec << "." <<godina<<endl;
    }
    // Datum uporedi(Datum d)  metoda koja upoređuje trenutni datum i datum koji dolazi kao argument (d)
    // i vraća koliko dana, meseci  i godina ima između ova dva datuma.
    Datum uporedi(const Datum d2){
        Datum d1 = *this;
        Datum veci = veci(d1, d2);
        if(veci == d1){
            
        }
    }
    friend Datum veci(Datum dat1, datum dat2){
        if(dat1.godina > dat2.godina || 
        dat1.godina == dat2.godina  && dat1.mesec > dat2.mesec || 
        dat1.godina == dat2.godina  && dat1.mesec == dat2.mesec  && dat1.dan > dat2.dan){
            return dat1;
        }
        return dat2;
    }
};
