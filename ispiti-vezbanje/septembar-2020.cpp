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
#include <iostream>
#include <string>

using namespace std;

enum Vrsta {SLAN, SLADAK, NEUTRALNAN};

class Sastojak{
    protected:
    string ime;
    float cena_po_kilogramu;
    Vrsta vrsta;
    public:
    Sastojak(string ime = "vode", float cena_po_kilogramu = 100, Vrsta vrsta = NEUTRALNAN){
        this->ime = ime;
        this->cena_po_kilogramu = cena_po_kilogramu;
        this->vrsta = vrsta;
    }
    float cena(int kolicina_u_gramima){
        float kolicana_u_kilogramima = (float) kolicina_u_gramima  / 1000;
        return kolicana_u_kilogramima * cena_po_kilogramu;
    }
    Vrsta get_vrsta(){
        return vrsta;
    }
    string get_vrsta_string(){
        switch(vrsta){
            case NEUTRALNAN:
                return "Neutralan";
            case SLAN:
                return "Slan";
            case SLADAK: 
                return "Sladak";
            default:
                return "Greška";
        }
    }
    friend ostream& operator<<(ostream& out, Sastojak s){
        out << s.ime << "-" << s.cena_po_kilogramu << " / " << "kg" << endl;
        return out;
    }
};

int main(){
    Sastojak s1("Jagode", 200, SLADAK);
    cout << s1;
    cout << s1.cena(100);
    cout << s1.get_vrsta();

    return 0;
}