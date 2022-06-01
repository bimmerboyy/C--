// Napisati na jeziku C++ sledeće klase :
// (klase opremiti onim konstruktorima, destruktorom, set i get metodama i operatorima
// dodele koji su potrebni za bezbedno i efikasno korišćenje klasa):
// 1.	
//     (30 poena) Klasa Ponuđeni odgovor se sastoji od teksta odgovora(string), 
//     koji se zadaje pri stvaranju (podrazumevano ""), informacije da li je tačan i procentualnog
//     udela poena koji taj odgovor nosi (u opsegu od -100 do 100).
//     Svi podaci su privatni. Svi podaci se mogu dohvatiti, a informacija o tačnosti i procentualni udeo se 
//     mogu postavljati(prilikom postavljanja proveriti da li su uneti ispravni procenti).
//     Odgovor može da se ispiše na glavnom izlazu (out<<odgovor) u obliku tekst: udeo%.

// 2.	(30 poena)
//     Klasa Pitanje sadrži zadate podatke koji su zaštićeni: 
//     tekst, broj poena koji nosi, broj ponuđenih odgovora (podrazumevano 5),
//     kao i ponuđene odgovore(dinamičko alocirani niz odgovora). 
//     Stvara se bez ponuđenih odgovora, nakon čega se oni dodaju pojedinačno (pitanje+=odgovor).
//     Prilikom dodavanja ponuđenog odgovora računaju se jednaki procentualni udeli svih tačnih odgovora dodatih 
//     u dato pitanje(u zbiru daju 100%), dok svaki netačan odgovor nosi -100%.
//     Pomoću polimorfne metode može da se odgovori na pitanje, tada se zadaje niz koji 
//     sadrži redne brojeve ponuđenih odgovora koje ispitanik smatra tačnim i dužina tog 
//     niza(odgovori(int niz[],int br);). 
//     Tada se računa koliko je procentualno tačno odgovoreno na to pitanje. 
//     Na glavnom izlazu se ispisuje (out<<pitanje) tako što se u prvom redu ispiše tekst: poeni(maksimalni koje pitanje nosi), 
//     a potom se u zasebnim redovima ispišu sadržani ponuđeni odgovori.

// 3.	
//     (30 poena) Klasa Student nasleđuje klasu Pitanje i dodaje privatne podatke: broj indeksa(int), 
//     ime studenta (string) i broj osvojenih poena (double).
//     Mogu da se dohvate svi podaci. Preklopiti metodu odgovori(int niz[].int br) 
//     tako da nakon što izračuna procenat tačnosti na odgovoreno pitanje izračuna broj osvojenih poena na tom pitanju i 
//     taj broj doda na broj osvojenih poena. Na glavnom izlazu se ispisuje (out<<student) tako što se u prvom redu ispiše broj indeksa,
//     ime i broj osvojenih poena studenta,
//     u drugom redu se ispiše tekst: poeni(maksimalni koje pitanje nosi),
//     a potom se u zasebnim redovima ispišu sadržani ponuđeni odgovori.

// (10 poena) Napisati main funkciju u kojoj ćete kreirati 7 odgovora,
//     2 pitanja i 1 studenta. U prvom pitanju dodati 4 odgovora(3 tačnih i 1 netačno), 
//     a u drugom pitanju 6(4 tačnih i 2 netačnih). 
//     Student neka bude isti kao drugo pitanje uz dodato ime, 
//     broj indeksa i broj osvojenih poena.
//     Za podatke o odgovorima, pitanjima i studentu uneti  koristiti fiksne parameter 
//     (nije potrebno unositi vrednosti sa standardnog ulaza).
//     
#include <iostream>
#include <string>

using namespace std;

class Odgovor{
    private:
    string tekst;
    bool tacnost;
    int udeo;
    public:
    Odgovor(string tekst = "", bool tacnost=false, int udeo = 50){
        this->tekst = tekst;
        this->tacnost =tacnost;
        this->udeo = udeo;
    }
    string get_tekst(){return tekst;}
    bool get_tacnost(){return tacnost;}
    int get_udeo(){return udeo;}
    void set_tacnost(bool val){tacnost = val;}
    void set_udeo(int val){
        if(val > -101 && val < 101){
            udeo = val;
        }
        else{
            int temp;
            cout << "molimo vas da unesete ispravnu vrednost";
            cin >> temp;
            set_udeo(temp);
        }
    }
    friend ostream& operator<<(ostream& out, Odgovor &o1){
        out << o1.tekst << ": " << o1.udeo << "%"<< endl;
        return out;
    }
};
//     Klasa Pitanje sadrži zadate podatke koji su zaštićeni: 
//     tekst, broj poena koji nosi, broj ponuđenih odgovora (podrazumevano 5),
//     kao i ponuđene odgovore(dinamičko alocirani niz odgovora). 
//     Stvara se bez ponuđenih odgovora, nakon čega se oni dodaju pojedinačno (pitanje+=odgovor).
//     Prilikom dodavanja ponuđenog odgovora računaju se jednaki procentualni udeli svih tačnih odgovora dodatih 
//     u dato pitanje(u zbiru daju 100%), dok svaki netačan odgovor nosi -100%.
//     Pomoću polimorfne metode može da se odgovori na pitanje, tada se zadaje niz koji 
//     sadrži redne brojeve ponuđenih odgovora koje ispitanik smatra tačnim i dužina tog 
//     niza(odgovori(int niz[],int br);). 
//     Tada se računa koliko je procentualno tačno odgovoreno na to pitanje. 
//     Na glavnom izlazu se ispisuje (out<<pitanje) tako što se u prvom redu ispiše tekst: poeni(maksimalni koje pitanje nosi), 
//     a potom se u zasebnim redovima ispišu sadržani ponuđeni odgovori.
class Pitanje{
    protected:
    string tekst;
    int broj_poena;
    int broj_ponudjenih_odgovora;
    Odgovor * ponudjeni_odgovori; 
    int trenutni_broj_odgovora;
    public:
    Pitanje(string tekst, int broj_poena, int broj_ponudjenih_odgovora = 5){
        trenutni_broj_odgovora = 0;
        this->tekst = tekst;
        this->broj_poena = broj_poena;
        this->broj_ponudjenih_odgovora = broj_ponudjenih_odgovora;
    }
    Pitanje operator +=(Odgovor &o){
        Odgovor* pomocni = new Odgovor[trenutni_broj_odgovora];
        for(int i = 0; i < trenutni_broj_odgovora; i++){
            pomocni[i] = ponudjeni_odgovori[i];
        }
        trenutni_broj_odgovora++;
        ponudjeni_odgovori =  new  Odgovor[trenutni_broj_odgovora];
        for(int i = 0; i < trenutni_broj_odgovora-1; i++){
            ponudjeni_odgovori[i] = pomocni[i];
        }
        ponudjeni_odgovori[trenutni_broj_odgovora-1] = o;
        return *this;
    }
    void ispis_svih_odgovra(){
        int i; 
        for(i = 0; i<trenutni_broj_odgovora; i++){
            cout << ponudjeni_odgovori[i];
        }
    }
};



int main(){
    Pitanje p1("Šta je html ?", 10, 4 ); 
    Odgovor o1("Hyper text markup language", true, 100);
    Odgovor o2("Best way to  hack nasa", true, 99);
    Odgovor o3("I do not know", false, -10);
    Odgovor o4("Pitaću suada", false, -100);
    p1+=o1;
    p1+=o2;
    p1+=o3;
    p1+=o4;
    p1.ispis_svih_odgovra();
}
