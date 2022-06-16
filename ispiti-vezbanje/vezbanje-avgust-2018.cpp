// Realizovati sledeće klase :
// (klase opremiti onim konstruktorima, destruktorima i operatorima dodele (preklopljenim operatorima)
// koji su potrebni za bezbedno i efikasno korišćenje.
// 1. Nalepnica ima naziv i jednoznačni automatski generisan identifikator kojem može da se pristupi. 
//     Naziv se zadaje sa standardnog ulaza prilikom stvaranje objekta.
//     Prilikom kopiranja voditi računa da se kopira naziv a da se identifikator sam kreira. 
//     Omogućiti metodu za ispis. 
// 2. Flaša pića ima sledeće podatke: 
//     nalepnicu, cenu bez kaucije (u koju nije uračunata cena flaše), 
//     zapreminu (podrazumevano 0,33 litara) i vrstu pića. 
//     Vrsta pića može biti BEZALKOHOLNO (podrazumevano) i ALKOHOLNO.
//     Svi podaci se unose prilikom stvaranja objekta i mogu se odštampati, a samo se cena može promeniti.
//     Kreirati metodu koja može da izračuna cenu flaše pića sa kaucojom
//     (ima razlike za staklenu i plastičnu flašu).
//     Metodu PROVERA koja proverava da li su dve flaše jednake (flaše su jednake ukoliko imaju isti naziv nalepnice,
//     cenu flaše sa kaucijom i vrstu pića. Omogućiti metodu za ispis.

// 3. Staklena flaša pića je flaša pića kod koje se cena sa kaucijom računa tako što se na cenu bez kaucije doda 5% ukoliko
//     je zapremina manja od 0,5 litara ili 10% ukoliko je zapremina veća ili jednaka od 0,5 litara.
//     Preklopiti metodu ispis da ispisuje podatke o flaši i poruku da je flaša staklena.
// 4. Plastična flaša pića je flaša pića kod koje je cena sa kaucijom jednaka ceni bez kaucije. Preklopiti metodu za ispis da 
//     ispisuje podatke o flaši i poruku da je flaša plastnična.
// 5. Formirati funkciju UKUPNO, van klasa koja formira dinamički niz staklenih i plastičnih flaša
//     čije podatke unosi korisnik sa tastature i zatim računa i vraća ukupan zbir svih flaša sa kaucijom.
// U main funkciji napraviti po jedan objekat svake klase i testirati sve metode, kao i funkciju UKUPNO.






#include<iostream>
#include<string>


using namespace std;


class Nalepnica{
    protected:
    string naziv;
    int id;
    static int brojac;
    public:
    Nalepnica(string naziv){
        this->naziv = naziv;
        id = brojac;
        brojac++;
    }
    Nalepnica(){

    }
    Nalepnica(Nalepnica &n1){
        naziv = n1.naziv;
        id = brojac;
        brojac++;
    }
    void ispis(){
        cout<<id<<"."<<naziv<<endl;
    }
   string getNaziv(){
        return naziv;
    }
    int getIdentifikator(){
        return id;
    }

};

// 2. Flaša pića ima sledeće podatke: 
//     nalepnicu, cenu bez kaucije (u koju nije uračunata cena flaše), 
//     zapreminu (podrazumevano 0,33 litara) i vrstu pića. 
//     Vrsta pića može biti BEZALKOHOLNO (podrazumevano) i ALKOHOLNO.
//     Svi podaci se unose prilikom stvaranja objekta i mogu se odštampati, a samo se cena može promeniti.
//     Kreirati metodu koja može da izračuna cenu flaše pića sa kaucojom
//     (ima razlike za staklenu i plastičnu flašu).
//     Metodu PROVERA koja proverava da li su dve flaše jednake (flaše su jednake ukoliko imaju isti naziv nalepnice,
//     cenu flaše sa kaucijom i vrstu pića. Omogućiti metodu za ispis.

enum Vrsta {BEZALKOHOLNO,ALKOHOLNO};

class Flasa{
    protected:
    Nalepnica nalepnica;
    int cenaBezKaucije;
    float zapremina;
    int kaucija;
    Vrsta vrsta;
    public:
    Flasa(Nalepnica n1,int cenaBezKaucije,float zapremina = 0.33,Vrsta vrsta = BEZALKOHOLNO){
        nalepnica=n1;
        this->cenaBezKaucije=cenaBezKaucije;
        this->zapremina=zapremina;
        this->vrsta=vrsta;
    }
    Flasa(){

    }
  void setCenaBezKaucije(int cenaBezKaucije) {
    this->cenaBezKaucije=cenaBezKaucije;
  }
  string getVrsta(){
    switch(vrsta){
        case BEZALKOHOLNO:
        return "Bezalkoholno";
        case ALKOHOLNO:
        return "Alkoholno";
    }
  }
  int cenaSaKaucijom(){
    int cenaSaKaucijom = 0;
    cenaSaKaucijom = cenaBezKaucije + (cenaBezKaucije*kaucija/100);
    return cenaSaKaucijom;
  }
 
  friend bool provera(Flasa &f1, Flasa &f2){
    if(f1.nalepnica.getNaziv() == f2.nalepnica.getNaziv() && f1.cenaSaKaucijom() == f2.cenaSaKaucijom() && f1.vrsta == f2.vrsta){
        cout<<"Flase su iste"<<endl;
        return true;
    }
    else{
        cout<<"Flase nisu iste"<<endl;
        return false;
    }
        return false;
    }
    friend ostream& operator<<(ostream& out,Flasa &f1){
        out<<f1.nalepnica.getIdentifikator()<<". "<<f1.nalepnica.getNaziv()<<endl;
        
    }
  
 
};

int main(){
    Nalepnica n1("Pepsi");
    n1.ispis();
    return 0;
}