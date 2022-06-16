// Napisati na jeziku C++ sledeći sistem klasa.
// Klase opremiti onim konstruktorima,destruktoromi operatorima dodelekoji su potrebni za bezbedno i efikasno korišćenje klasa. 
// Greške prijavljivati  izuzecima  tipa  jednostavnih  klasa  koje  su  opremljene  pisanjem  teksta  poruke. 
// Za generičke zbirke nije dozvoljeno korišćenje klasa iz standardne biblioteke šablona (STL).

// 1.	Klasa Sastojak sadrži zadato ime i cenu po kilogramu.
//      Pomoću metoda može da se dohvati vrsta sastojka 
//      i da se izračuna cena za zadatu količinu sastojka u gramima(količina dolazi kao argument metode).
//      Upisuje se u izlazni tok (cout<<s)  u obliku ime-cena/kg.
//      Vrste slanog, slatkog i neutralnog sastojka su SLAN, SLADiNEUT, respektivno. (Odraditi pomoću enumeracije)

// 2.	
//      Klasa Jelo ima ime i sadrži listu sastojaka, 
//      kao i celobrojnu vrednost koja predstavlja količinu sastojka za pripremu jela izraženu u gramima.
//      Cena jela je određena zbirom cene sastojaka,
//      uz eventualno procentualno povećanje ili smanjenje osnovne cene,
//      koje zavisi od sata formiranja cene jela. 
//      Može da se postavi podatak o procentualnoj promeni cene jela i podatak o satu formiranja cene.
//      Može da se doda sastojak određene količine u jelo, 
//      pri čemu se pre dodavanja proverava da li je sastojak adekvatan(greška je ako nije),
//      da se dohvati jednoslovna vrsta jela i da se izračuna njegova cena.
//      Upisuje se u izlazni tok(cout<<j) tako što se u prvom redu upiše 
//      ime:cena, a u narednim redovima se upisuje jedan sastojak poredu u obliku sastojak:količina. 
//      Pri uništavanju jela, uništavaju se i svi sadržani sastojci.
// 3.	
//      Predjelo i glavno jelo su jela koja mogu da sadrže samo slane i neutralne sastojke i njihove vrste su P i G,
//      respektivno. Predjelo se nalazi na akciji u periodu 9-12 časova (kada se cena umanjuje za određeni procenat).
//      Cena glavnog jela se uvećava za određeni procenat u periodu 20-23 časa.
//      Dezert je jelo koje može da sadrži samo slatke i neutralne sastojke i njegova vrsta je D.

// main
//      Napisati na jeziku C++ program koji napravi nekoliko jela, 
//      postavi im određeni procenat promene cene, doda im sastojke, a zatim napravljena jela doda u jelovnik.
//      Potom napravi generator koji generiše  dnevni  meni za  određeni  sat i  ispiše ga na  standardnom  izlazu.
//      Koristiti  fiksne parametre - nije potrebno ništa učitati s glavnog ulaz


#include<iostream>
#include <stdlib.h>

using namespace std;



enum Vrsta {SLAN,SLADAK,NEUTRALAN};

class Sastojak{
    private:
    Vrsta vrsta;
    string ime;
    int cenaPoKilogramu;
    public:
    Sastojak(string ime,int cenaPoKilogramu,Vrsta vrsta){
        this->ime = ime;
        this->cenaPoKilogramu = cenaPoKilogramu;
        this->vrsta = vrsta;
    }
    Sastojak(){

    }
    string getVrsta(){
        switch(vrsta){
            case SLAN:
            return "Slan";
            case SLADAK:
            return "Sladak";
            case NEUTRALAN:
            return "Neutralan";
            default: return "Greška";
        }
    }
    float cenaUGramima(int kolicinaUGramima){
        int kolicinaPoKilogarmu = (float)kolicinaUGramima / 1000;
        return cenaPoKilogramu * kolicinaPoKilogarmu;

    }
    friend ostream& operator<<(ostream& out,Sastojak &s1){
        out<<s1.ime<<"-"<<s1.cenaPoKilogramu<<"/kg"<<endl;
        return out;
    }
};

 //Klasa Jelo ima ime i sadrži listu sastojaka, 
//      kao i celobrojnu vrednost koja predstavlja količinu sastojka za pripremu jela izraženu u gramima.
//      Cena jela je određena zbirom cene sastojaka,
//      uz eventualno procentualno povećanje ili smanjenje osnovne cene,
//      koje zavisi od sata formiranja cene jela. 
//      Može da se postavi podatak o procentualnoj promeni cene jela i podatak o satu formiranja cene.
//      Može da se doda sastojak određene količine u jelo, 
//      pri čemu se pre dodavanja proverava da li je sastojak adekvatan(greška je ako nije),
//      da se dohvati jednoslovna vrsta jela i da se izračuna njegova cena.
//      Upisuje se u izlazni tok(cout<<j) tako što se u prvom redu upiše 
//      ime:cena, a u narednim redovima se upisuje jedan sastojak poredu u obliku sastojak:količina. 
//      Pri uništavanju jela, uništavaju se i svi sadržani sastojci.

class Jelo{
    protected:
    string ime;
    Sastojak *sastojci;
    int *kolicinaUGramima;
    int sat;
    int procenat;
    int trenutni_broj_sastojaka;
    public:
    Jelo(string ime = "Burger"){
        this->ime = ime;
        trenutni_broj_sastojaka = 0;
        procenat = 0;
        sat = 25;
    }
    Jelo(){
        trenutni_broj_sastojaka = 0;
    }
   virtual void dodajSastojak(Sastojak &s1,int kolicina){
        Sastojak *temp = new Sastojak[trenutni_broj_sastojaka];

    }
   

};


int main(){
    Sastojak s1("Belo meeso",250,SLAN);
    Sastojak s2("Salata",100,NEUTRALAN);
    Sastojak s3("Kecap",150,SLAN);
    Sastojak s4("Paradajzs",70,NEUTRALAN);

    cout<<s1;

    return 0;
}

