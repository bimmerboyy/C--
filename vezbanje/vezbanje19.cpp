#include<iostream>
using namespace std;

class Automobil{
    public:
    float gorivo;
    float potrosnja;
    float rezervoar;
public:
    Automobil(float g,float p){
        gorivo = g;
        potrosnja = p;
    }
    int predjiKm(int km){
        int automobil,ukupna_potrosnja,potrosnja_po_km,potrsonja_na_svakom_km;
        for(int automobil = 0;automobil <= km;automobil++){
            potrosnja_po_km = potrosnja/100;
            potrsonja_na_svakom_km = potrosnja_po_km*automobil;
            ukupna_potrosnja = potrosnja_po_km*km;
            if(ukupna_potrosnja > rezervoar){
                printf("Automobil je ne moze da predje tu razdaljinu");
            }
        }
       
        return ukupna_potrosnja;
    }
    
};

int main(){
   Automobil a1(55,6);

    
    return 0;
}