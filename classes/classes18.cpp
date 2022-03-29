/*
Primer 58
Napisati program koji koristi prosirenu verziju klase iz
prethodnog primera.Klasu prosiriti novim metodama`
*/
#include<string.h>
#include <iostream>
using namespace std;

class BankovniRacun{
    private:
    string brojRacuna;
    double stanjenaRacunu;
    double kamatnaStopa;
    public:
    BankovniRacun(string broj,double stanje,double kamata){
        brojRacuna = broj;
        stanjenaRacunu = stanje;
        kamatnaStopa = kamata;

    }  
    double izracunajKamatu(){
        return stanjenaRacunu*kamatnaStopa;
    }
    double proslediStanje(){
        return stanjenaRacunu;
    }
    string proslediBrojRacuna(){
        return brojRacuna;
    }  
    void uplata(double iznos){
        stanjenaRacunu += iznos;
    
    }
    double isplata(double iznos){
        bool dopusteno;
        if(iznos <= stanjenaRacunu){
            dopusteno = true;
        }
        else if(iznos > stanjenaRacunu){
            dopusteno = false;
        }
        return iznos;
    }
    double kamatniIznos(){
        double kamatniIznos;
       kamatniIznos = stanjenaRacunu*kamatnaStopa;
        stanjenaRacunu += kamatniIznos;
        return kamatniIznos; 
       
    }
};
int main(){
   string brRacuna;
   double kamatnaStopa,stanjeRacuna,prvaIsplata,drugaIsplata;
   cout<<"Unesite broj racuna:";
   cin>>brRacuna;
   cout<<"Unesite stanje na raucnu:";
   cin>>stanjeRacuna;
   cout<<"Unesite kamatnu stopu:";
   cin>>kamatnaStopa;
   cout<<"Unesite prvu isplatu:"<<endl;
   cin>>prvaIsplata;
   cout<<"Unesite drugu isplatu:"<<endl;
   cin>>drugaIsplata;

   // Inacijalizacija
   BankovniRacun r1(brRacuna,stanjeRacuna,kamatnaStopa);
   cout<<"Kamata koja se nalazi na racunu je: "<<r1.izracunajKamatu()<<endl;
   cout<<"Broj racuna je:"<<r1.proslediBrojRacuna()<<endl;
   cout<<"Stanje na racunu je:"<<r1.proslediStanje()<<endl;
   r1.uplata(56783);
   cout<<"Stanje racuna posle uplate iznosi:"<<r1.proslediStanje()<<endl;
   if(r1.isplata(prvaIsplata)){
       cout<<"Pokusali ste da dignete"<<prvaIsplata<<endl;
       cout<<"Nije moguce isplatiti toliku sumu novca"<<endl;
   }
   r1.isplata(drugaIsplata);
   cout<<"Stanje na racunu posle isplate je:"<<r1.proslediStanje();
   return 0;
}