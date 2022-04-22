#include <iostream>
#include <string>

using namespace std;

enum Zanr { POP, REP, ROK };

class Izvodjac {
    string naziv;
    Zanr zanr;
    string nadjiZanr(Zanr zanr){
        switch(zanr){
            case 0: return "POP"; break;
            case 1: return "REP"; break;
            case 2: return "ROK"; break;
            default: return "GRESKA"; break;          
        }
    }
    public:
    Izvodjac(string naz, Zanr z) : naziv(naz), zanr(z) {}
    Izvodjac(){
        naziv="Micko";
        zanr=POP;
    }
    Zanr getZanr() const { return zanr; }
    void pisi();
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
    Pesma(int m, int s, string naz, int k) :
    min(m), sek(s), naziv(naz) {
        kap = k;
        izv = new Izvodjac[kap];
        br=0;
    }
    ~Pesma() {
        delete [] izv;
    }
    void dodaj(Izvodjac *i) {
        if (br < kap){
            izv[br++] = *i;
        }
    }
    int dohvSek() const { return sek; }
    int dohvMin() const { return min; }
    void pisi() const;
    friend bool duze(const Pesma &p1, const Pesma &p2) {
        if (p1.min > p2.min || p1.min == p2.min && p1.sek > p2.sek){
            return true;
        }
        return false;
    }
};

void Pesma::pisi() const {
    cout << "P(" << naziv << " - " << min << ":" << sek << ")" << endl;
    cout << "Izvodjaci: ";
    for (int i = 0; i < br; i++) 
    izv[i].pisi();
}
int main() {
    Izvodjac iz1("Micko", POP);
    Izvodjac iz2("Uki",ROK);
    Izvodjac iz3("Jocke", REP);
    Pesma p1(2, 55, "Pesma", 2);
    Pesma p2(3, 23, "Pesma2", 1);
    Pesma p3(2, 49, "Pesma3", 1);
    iz1.pisi();
    iz2.pisi();
    iz3.pisi();
    p1.dodaj(&iz1);
    p1.dodaj(&iz2);
    p2.dodaj(&iz3); 
    p1.pisi();
    p2.pisi();
    p3.pisi();
    return 0;
}
