/*Kreirati klasu Izvođač koja ima privatno zadato ime i zadat muzički žanr. Žanr može biti POP, REP ili ROK (odraditi pomoću enumeracije) i može se dohvatiti, ali se ne može menjati. Metode konstruktor sa argumentima (naziv, zanr), metoda ispis() koja ispisuje podatke o izvođaču u obliku ime (žanr).
Klasa Pesma ima privatne atribute naziv, trajanje izraženo brojem minuta i brojem sekundi i maksimalni broj izvođača. Svi podaci se zadaju prilikom stvaranja kroz konstruktor sa argumentina(naziv, minuta, sekundi, brIzvodjaca). Može da se dohvati broj minuta i broj sekundi trajanja pesme ali ne mogu da se menjaju. Pomoću prijateljske funkcije može da se proveri koja od dve zadate pesme traje duže. Metoda za dodavanje pojedinačnog izvođača (dodavanje ne uspeva u slučaju prekoračenja kapaciteta). Metoda ispis koja na glavnom izlazu ispisuje u obliku: P(naziv – minuti : sekundi), a zatim se pojedinačni izvođači ispisuju u zasebnim redovima.
*/
#include <iostream>
#include <string>

using namespace std;

string a[3] = {"nikola", "tarik", "bahir"};

enum B {nikola , Tarik, Bhair};

// enum Zanr { POP, REP, ROK };

// class Izvodjac {


// };

int main() {
    string ime = nikola
    cout << B.nikola;
    return 0;
}
