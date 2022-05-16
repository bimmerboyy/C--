#include<iostream>

using namespace std;


/*
Realizovati klase Datum i Rodjendan.
Klasa Datum ima javne atribute dan,mesec i godina.
Metode: konstruktor sa i bez argumenata, ispis koja ispisuje u formatu Danas je d.m.g,
Datum uporedi(Datum d) metoda koja upoređuje trenutni datum i datum koji dolazi kao argument (d)
i vraća koliko dana, meseci  i godina ima između ova dva datuma.
Klasa Rodjendan nasledjuje javno klasu Datum i dodaje ime i prezime osobe. 
Metode: konstruktor sa i bez argumenata,bool daLiJe(Datum d)
koja vraća true ako jeste rodjendan datuma d, odnosno false ako nije. 
void ispisSlavljenika(Datum dat) koja ispisuje poruku ako je danas rodjendan osobi,
a ako nije onda ispisuje jos koliko dana i meseci ima do rodjendana
(koristeći metodu klase Datum za nalaženje razlike – to je moguće
jer je klasa Rodjendan nasledila sve atribute i metode klase Datum),
int godine(Datum dat) koja vraća koliko godina ima osoba do datuma
 dat koji dolazi kao argument
*/

class Datum{
    public:
    int dan;
    int mesec;
    int godina;
};

int main(){

    return 0;

}

