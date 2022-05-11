#include<iostream>
#include<string>

using namespace std;

// Visestruko nasledjivanje

class Proizvod{
    public:
    int barKod;
    float cena;
    float kolicina;
    public:
    Proizvod(){
        cout<<"Pozvao se konstruktro bez argumenata klase Proizvod"<<endl;
        barKod = 123456;
        cena = 120;
        kolicina = 10;
    }
    Proizvod(int bk,float c,float k){
        cout<<"Pozvao se konstruktro sa argumenata klase Proizvod"<<endl;
        barKod = bk;
        cena = c;
        kolicina = k;
    }
    void IspisProizvoda(){
        cout<<"Podaci o proizvodu su:"<<endl;
        cout<<"Barkod::"<<barKod<<endl;
        cout<<"Cena:"<<cena<<endl;
        cout<<"<Kolicina:"<<kolicina<<endl;
    }
};
    class Radnik{
        public:
        string ime;
        string prezime;
        public:
        Radnik(){
            cout<<"Pozvao se konstruktro bez arhumenata klase Radnik"<<endl;
            ime = "Aldin";
            prezime = "Mekic";
        }
         Radnik(string i,string p){
            cout<<"Pozvao se konstruktro sa arhumenata klase Radnik"<<endl;
            ime = i;
            prezime = p;
        }
        void IspisRadnika(){
            cout<<"Podaci o radniku"<<endl;
            cout<<"Ime:"<<ime<<endl;
            cout<<"Prezime:"<<prezime<<endl;
        }

    };
    class Prodavnica: Radnik,Proizvod{
        public:
        int brRadnihSati;
        float cenaPoSatu;
        public:
        Prodavnica(){
            cout<<"Pozvao se konstruktor bez argumenata klase Prozvod"<<endl;
            brRadnihSati = 160;
            cenaPoSatu = 2000;
        }
        Prodavnica(int bk,float c,float k,string i,string p,int brrs,float cps) : Proizvod(bk,c,k),Radnik(i,p)
        {
             cout<<"Pozvao se konstruktor bez argumenata klase Prozvod"<<endl;
            brRadnihSati = brrs;
            cenaPoSatu = cps;

        }
        void ispis(){
            IspisProizvoda();
            IspisRadnika();
            cout<<"Broj radnih sati:"<<brRadnihSati<<endl;    
            cout<<"Cena po satu:"<<cenaPoSatu<<endl; 
           
        }
        float Plata(){
            return brRadnihSati * cenaPoSatu;
        }
        void Prodaj(float kol){
            kolicina -= (kol <= kolicina) ? kol : 0;
        }
    };


int main(){
    Prodavnica p(11111,1000,50,"Predrag","Lancarevic",200,1500);
    p.ispis();
    return 0;
}