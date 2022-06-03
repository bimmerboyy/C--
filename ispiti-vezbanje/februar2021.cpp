// 1.	
//      (35 poena)  Realizovati sledeće klase (klase opremiti onim konstruktorima, destruktorima i operatorima dodele 
//      (preklopljenim operatorima) koji su potrebni za bezbedno i efikasno korišćenje.
//      Klasa Artikal ima naziv, realnu cenu i celobrojni iznos popusta (podrazumevano 0).
//      Podaci artikla se zadaju pri stvaranju (nije potrebna provera). Može da se ispisati naziv, cena sa popustom i iznos popusta.
//      Na glavnom izlazu se ispisuje u obliku naziv(cena_sa_popustom).
// 2.	
//    Klasa Stavka računa se kreira za zadati artikal i zadatu celobrojnu količinu.
//    Stavki računa se dodeljuje redni broj na računu prilikom dodavanja stavke na račun. 
//    Može da se izračuna iznos stavke računa kao proizvod količine i cene artikla. 
//    Omogućiti kopiranje vrednosti pomoću kopi konstruktora.
//    Može se ispisati artikal stavke. Na glavnom izlazu se ispisuje u obliku:
//    S redni_broj_na_računu(artikal):količina|iznos.
//    U main funkciji kreirati 2 objekta klase Stavka i testirati sve metode.
//    Kreirati i treći objekat kao kopiju prvog.
// 3. (35 poena)   Koristeći klase iz prethodnog zadatka proširiti program tako da se doda klasa Račun koja sadrži proizvoljan
//    broj stavki(niz stavki) i celobrojni iznos dodatnog popusta.
//    Stvara se prazan, nakon čega se stavke dodaju pojedinačno. Dodavanje stavke odraditi
//    preklapanjem operatora += (račun += stavka). Može da se postavi iznos dodatnog popusta. Može da se izračuna iznos računa kao suma iznosa svih pojedinačnih stavki na računu. Ukoliko postoji dodatni popust, on se obračunava samo za artikle koji već nisu na popustu. Na glavnom izlazu se ispisuje u obliku Racun: iznos_računa, a zatim se u svakom redu ispisuje po jedna stavka u obliku: stavka [iznos_sa_dodatnim_popustom].
//    U main funkciji stvoriti jedan  objekat klase račun i u njega dodati nekoliko stavki
//    sa po jednim artiklom. Ispisati stanje računa nakon dodavanja tih stavki.
#include <iostream>
#include <string>

using namespace std;
class Artikal{
    protected:
    string naziv;
    float realna_cena;
    int popust;
    public:
    Artikal(string naziv = "Hurma", float realna_cena=199.99, int popust=0){
        this->naziv = naziv;
        this->realna_cena = realna_cena;
        this->popust = popust;
    }
    string  get_naziv(){ return this->naziv; }
    float get_realna_cena(){ return this->realna_cena;}
    int get_popust(){ return this->popust;}
    float cena_sa_popustom(){ 
        float kolicina_popusta = realna_cena / 100 * popust;
        return realna_cena - kolicina_popusta;
    }
    friend ostream& operator <<(ostream& out, Artikal a){
	    out << a.naziv << " ( " << a.cena_sa_popustom() << " ) " << endl;
        return out;
    }
};


int main() {
    Artikal a1("Smokva", 100, 10);
    cout << a1;
    return 0;
}