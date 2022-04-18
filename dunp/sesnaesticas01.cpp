/*
Kreirati klasu Izvođač koja ima privatno zadato ime i zadat muzički žanr.
 Žanr može biti POP, REP ili ROK (odraditi pomoću enumeracije) i može se dohvatiti, ali se ne može menjati.
 Metode konstruktor sa argumentima (naziv, zanr), metoda ispis() koja ispisuje podatke o izvođaču u obliku ime (žanr).

Klasa Pesma ima privatne atribute naziv, trajanje izraženo brojem minuta i brojem sekundi i maksimalni broj izvođača
Svi podaci se zadaju prilikom stvaranja kroz konstruktor sa argumentina(naziv, minuta, sekundi, brIzvodjaca).
Može da se dohvati broj minuta i broj sekundi trajanja pesme ali ne mogu da se menjaju.
Pomoću prijateljske funkcije može da se proveri koja od dve zadate pesme traje duže.
Metoda za dodavanje pojedinačnog izvođača (dodavanje ne uspeva u slučaju prekoračenja kapaciteta).
Metoda ispis koja na glavnom izlazu ispisuje u obliku: P(naziv – minuti : sekundi),
a zatim se pojedinačni izvođači ispisuju u zasebnim redovima.


*/
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
};
void Pesma::pisi() const {
cout << "P(" << naziv << " - "
 << min << ":" << sek << ")" << endl;
cout << "Izvodjaci: ";
for (int i = 0; i < br; i++) 
izv[i].pisi();  
}

int main() {
Izvodjac iz1("Micko", POP), iz2("Uki",ROK), iz3("Jocke", REP);
Pesma p1(2, 55, "Pesma", 2), p2(3, 23, "Pesma2", 1), p3(2, 49, "Pesma3", 1);
iz1.pisi();iz2.pisi();iz3.pisi();
p1.dodaj(&iz1);p1.dodaj(&iz2);p2.dodaj(&iz3); 
p1.pisi();p2.pisi();p3.pisi();
return 0;
}