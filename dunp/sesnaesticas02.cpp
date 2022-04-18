
#include <iostream>
#include <string>
using namespace std;
enum Zanr { POP, REP, ROK };
class Izvodjac {
string naziv;
Zanr zanr;
//static string str_zanr[];
string nadjiZanr(Zanr zanr)
        {
               switch(zanr)
               {
                 case 0: return "POP"; break;
                 case 1: return "REP"; break;
                 case 2: return "ROK"; break;
                 default: return "GRESKA"; break;          
               }
        }
public:
Izvodjac(string naz, Zanr z) :
naziv(naz), zanr(z) {}
Izvodjac(){naziv="Micko"; zanr=POP;}
Zanr getZanr() const { return zanr; }
void pisi() ;
};
void Izvodjac::pisi() {
cout << naziv << "(" << nadjiZanr(zanr) << ")" << endl;
}
//string Izvodjac::str_zanr[]
// = { "pop", "rep", "rok" };
 class Pesma {
int min, sek;
string naziv;
Izvodjac* izv;
int br, kap;
public:
Pesma(){
    br = 0;
    kap = 5;
    izv = new Izvodjac[kap];
}
Pesma(int m, int s, string naz, int k) :
min(m), sek(s), naziv(naz) {
kap = k;
izv = new Izvodjac[kap];
br=0;
}
~Pesma() { delete [] izv; }
void dodaj(Izvodjac *i) {
if (br < kap) 
izv[br++] = *i;
}
int dohvSek() const { return sek; }
int dohvMin() const { return min; }
void pisi() const;
friend bool duze(const Pesma &p1,
 const Pesma &p2) {
if (p1.min > p2.min ||
 p1.min == p2.min && p1.sek > p2.sek)
 return true;
else return false;
}
int getBr(){return br;}
};
void Pesma::pisi() const {
cout << "P(" << naziv << " - "
 << min << ":" << sek << ")" << endl;
cout << "Izvodjaci: ";
for (int i = 0; i < br; i++) 
izv[i].pisi();  
}
class Album{
public:
    Izvodjac izvodjac;
    Pesma *pesme;
public:
    Album(Izvodjac &i){
        izvodjac = i;
        pesme = new Pesma[20];
        for(int i = 0;i < 20;i++){
            pesme[i] = Pesma(2+i%2,35+i%3,"Pesma",5);
            pesme[i].dodaj(&izvodjac);
        }

    }
    void dodaj(Izvodjac *i,int brPesme){
        pesme[brPesme - 1].dodaj(i);
    }
    int najduza(){
        int index = 0;
        int minNaj = pesme[0].dohvMin();
        int sekNaj = pesme[0].dohvMin();
        for(int i = 1;i < 20;i++){
            if(minNaj < pesme[i].dohvMin() || (minNaj == pesme[i].dohvMin() && sekNaj < pesme[i].dohvSek())){
                index = i;
                minNaj = pesme[i].dohvMin();
                sekNaj = pesme[i].dohvSek();
                
            }
        }
        return index;
    }
    int brSamostalno(){
        int br = 0;
        for(int i = 0;i < 20;i++){
            if(pesme[i].getBr() == 1)
            br++;
        }
        return br;
    }

};


int main() {
Izvodjac Micko("Micko",REP);
Izvodjac Zecko("Zecko",POP);
Izvodjac Acko("Acko",REP);
Pesma hello(3,40,"Hello world",2);
Pesma bye(2,23,"Go to the end",5);
hello.dodaj(&Micko);
hello.dodaj(&Zecko);
hello.dodaj(&Acko);

bye.dodaj(&Zecko);
Album a(Micko);
a.dodaj(&Zecko,5);
a.dodaj(&Acko,2);
cout<<"Najduza pesma na albumu je "<<a.najduza()<<endl;
cout<<"Izvodjac je izveo "<<a.brSamostalno()<<" pesama samostalno"<<endl;
return 0;

}