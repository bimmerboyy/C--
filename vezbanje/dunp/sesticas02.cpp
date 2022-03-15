
// Klasa covek (ime,prezim,starrost,visina,tezina,pol)
// metode(inacijalizacija,predstavi se,starnje)
#include<iostream>
#include<string.h>
using namespace std;

class covek{
    //atributi
    public:
    char ime[15],prezime[20],pol;
    float visina,tezina;
    int starost;
    //metode
    public:
   void inic(char *i, char *pr, char p, char s, float v, float t){
       strcpy(ime, i);
       strcpy(prezime, pr);
        pol = p;
        starost = s;
        visina = v;
        tezina = t;
    }
    void predstaviSe(){
        if(pol == 'm' || pol == 'M')
        cout<<"Ime"<<" "<<"Prezime"<<" ime "<<starost<<" godina i visok je "<<visina<<" i ima "<<tezina<<"kg\n";
        else if(pol == 'z' || pol == 'Z')
        cout<<"Ime"<<" "<<"Prezime"<<" ime "<<starost<<" godina i visok je "<<visina<<" i ima "<<tezina<<"kg\n";
        else
        cout<<"Neispravna verdonst za atribut pol \n";
        }
    void starenje(int godine){
        starost += godine;
    }
};
int main(){
    covek c;
    covek w;
    w.inic("Aldina", "Avdic",'z', 33, 175 ,65);
    c.inic("Bartislav", "Miric",'M', 62, 180, 80);
    c.starenje(3);
    w.starenje(3);
    c.predstaviSe();
    w.predstaviSe();
    c.predstaviSe();


    return 0;
}