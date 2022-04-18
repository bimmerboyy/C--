#include <iostream>
#include <string>

using namespace std;

enum Zanr = {POP, ROK, REP};

class izvodjac {
    private:
        string ime;
        Zanr zanr;
    public:
        izvodjac(){}
        izvodjac(string i, Zanr z ){
            ime = i;
            zanr = z;
        }
    string getIme() const {return ime;}
    Zanr getZanr() const {return zanr;}
    void ispis(){
        cout << ime << "(" << nadjiZanr() << ")" << endl;
    }
    private:
        string nadjiZanr(){
            switch(zanr){
                case 0:
                    return "POP";
                case 1:
                    return "ROK";
                case 2: 
                    return "rep";
            }
            return "greška";
        }
};

class Pesma{
    string naziv;
    int min, sek, max;
    izvodjac *izv;
public:
    pesama(){}
    Pesma(string n, int m, int s, snt max){
        naziv = n;
        min = m;
        sek = s;
        this->max = max;
        br = 0;
        izv = new izvodjac[max];
    }
    int getMinuta(){
        return min;
    }
    int getSekunda(){
        return sek;
    }
    friend bool duza(Pesma& p1, Pesma& p2){
        if(p1.min > p2.min || (p1.min== p2.min && p1.sek > p2.sek) ){
            return true;
        }
        return false;
    }
    void dodaj(izvodjac *i){
        if(br<max){
            izv[br] = *i;
            br++;
        }
    }
    void ispis(){
        cout << "P(" <<naziv << " - " << min << ":"<<sek << ")"<<endl;
        for(int i = 0; i<br; i++){
            izv[i].ispis();
        }
    }
};
class Album{
    public:
    Izvodjac izvodjac;
    Pesma * pesma;
    public:
    Album(izvodjac &i){
        izvodjac = i;
        pesme 
    }
};

int main(){
    izvodjac Micko("Micko", REP);
    izvodjac Zecko("zecko", POP);
    izvodjac Acko("acko", REP);
    pesma hello("Hello world", 3, 40, 2);
    pesma bye("On the end", 2, 23, 5);
    hello.dodaj(&micko);
    hello.dodaj(&acko);
    bye.dodaj(&Zecko);
    if(duza(hello, bye)){
        cout << "prva pesma je duža od  druge";
    }
    hello.ispis();
    bye.ispis();
    return 0;
}
//kreirati klasu album koja ima 20 pesama nekog izvođača koji može izvoditi pesme sam ili u duetu  sa više drugih izviođača, naglavnom izlazu ispisatko koja je od pesama najduža, koliko pesama je izveo