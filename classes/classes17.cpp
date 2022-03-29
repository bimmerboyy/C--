/*
Primer 57 
Nampisati program koji kreia klasu bankovni racun i
u funkciji main() izvrsiti poziv njenih public funkcija-clanica
Program ilustruje upotrebu fukcija koje su clanice klase 
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
};
int main(){
   string brRacuna;
   double kamatnaStopa,stanjeRacuna;
   cout<<"Unesite broj racuna:";
   cin>>brRacuna;
   cout<<"Unesite stanje na raucnu:";
   cin>>stanjeRacuna;
   cout<<"Unesite kamatnu stopu:";
   cin>>kamatnaStopa;
   // Inacijalizacija
   BankovniRacun r1(brRacuna,stanjeRacuna,kamatnaStopa);
   cout<<"Kamata koja se nalazi na racunu je: "<<r1.izracunajKamatu();
}