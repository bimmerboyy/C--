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


#include<iostream>


using namespace std;

class Artikal{
    private:
    string naziv;
    float cena;
    int popust;
    public:
    Artikal(string naziv, float cena, int popust){
        this->naziv = naziv;
        this->cena = cena;
        this->popust = popust;
    }
    Artikal(){
        popust = 0;
    }
    float cenaSaPopustom(){
        float cenaSaPopustom;
        cenaSaPopustom = cena-(cena * (float)popust/ 100);
        return cenaSaPopustom;

    }
    string getNaziv(){
        return naziv;
    }
    int getCena(){
        return cena;
    }
    friend ostream& operator<<(ostream& out, Artikal &a1){
        out<<a1.naziv<<"("<<a1.cenaSaPopustom()<<")"<<", popust:"<<a1.popust<<endl;
        return out;
    }

};

// Klasa Stavka računa se kreira za zadati artikal i zadatu celobrojnu količinu.
//    Stavki računa se dodeljuje redni broj na računu prilikom dodavanja stavke na račun. 
//    Može da se izračuna iznos stavke računa kao proizvod količine i cene artikla. 
//    Omogućiti kopiranje vrednosti pomoću kopi konstruktora.
//    Može se ispisati artikal stavke. Na glavnom izlazu se ispisuje u obliku:
//    S redni_broj_na_računu(artikal):količina|iznos.
//    U main funkciji kreirati 2 objekta klase Stavka i testirati sve metode.
//    Kreirati i treći objekat kao kopiju prvog.


class Stavka{
    private:
    Artikal a1;
    int kolicina;
    int redniBroj;
    public:
    Stavka(int kolicina, int redniBroj){
        this->kolicina = kolicina;
        this->redniBroj = redniBroj;   
    }
    Stavka(){}
    int iznosStavke(){
        int iznos;
        iznos = kolicina * a1.cenaSaPopustom();
        return iznos;
    }
    Stavka(const Stavka &s1){
        kolicina = s1.kolicina;
        redniBroj = s1.redniBroj;
    }
    friend ostream& operator<<(ostream& out,Stavka &s1){
        out<<s1.redniBroj<<"("<< s1.a1.getNaziv()<<")"<<"kolicina:"<<s1.kolicina<<" | "<<s1.iznosStavke()<<endl;
        return out;
    }


};

int main(){
    Artikal a1("Balan stangla",100,10);
    Stavka s1(2,4);
    Stavka s2;
    s2 = s1;
    cout<<s2;
    cout<<a1;
return 0;
}

