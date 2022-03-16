
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
        cout<<"Ime"<<" "<<"Prezime"<<" ima "<<starost<<" godina i visok je "<<visina<<" i ima "
        <<tezina<<"kg\n";
    }
    void starenje(int godine){
        starost += godine;
    }
};
int main(){
    covek c;
    c.inic("Bartislav", "Miric",'M', 62,180,80);
    c.starenje(3);
    c.predstaviSe();

    return 0;
}