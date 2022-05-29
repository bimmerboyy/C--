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
    string text;
    bool tacan;
    int procenat;
    public:
    Odgovor(string text = "", bool tacan = false, int procenat = 0){
        this->tacan = tacan;
        this->procenat = procenat;
        this->text = text;
    }
    string get_text() { return text;}
    bool get_tacan() { return tacan; }
    int get_procenat() { return procenat; }
    void set_tacan(bool tacan) {this->tacan = tacan;}
    void set_procenat(int procenat) {
        if(procenat > -101 && procenat < 101 )
            this->procenat = procenat;
        else 
            cout << "unesite ispravan procenat" <<endl ; }
    friend ostream& operator<<(ostream& COUT, const Odgovor &o){
        COUT << "Tekst: " << o.text << "   " << o.procenat << "%" << endl;
        return COUT;
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
    string text;
    int broj_poena;
    int broj_ponudjenih_odgovora;
    Odgovor *odgovori;
    public:
    Pitanje(string text ="", int broj_poena, int broj_ponudjenih_odgovora = 5){
        
    }
};

int main(){
    Odgovor o1("Pariz je glavni grad amerike", false, 0);
    Odgovor o2("Pariz je glavni grad srbije", false, -100);
    Odgovor o3("Pariz je glavni grad francuske", true, 100);
    Odgovor o4("Pariz je glavni grad makedonije", false);
    o4.set_procenat(19);
    return 0;
}