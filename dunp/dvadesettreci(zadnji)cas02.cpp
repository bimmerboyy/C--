#include<iostream>
#include <string>

using namespace std;



class Radnik{
    public:
    string ime;
    string prezime;
    float plata;
    public:
    Radnik(){
        ime = "Nikola";
        prezime = "Matković";
        plata = 150000;
    }
    void ispis(){
        cout<<"Radnik"<<ime <<" "<<prezime<<" "<<"ima platu"<<plata<<endl;
    }
};

class Sef{
    public:
    string ime;
    string prezime;
    float plata;
    public:
    Sef(){
        ime = "Tarik";
        prezime = "Kučević";
        plata = 200000;
    }
    void ispis(){
        cout<<"Sef"<<ime <<" "<<prezime<<" "<<"ima platu"<<plata<<endl;
    }
};

template<class T,int k = 10>
class Firma{
    public:
    T niz[k];
    int broj;
    public:
    Firma(){
        broj = 5;
        
    }
    void ispis(){
        for(int i = 0;i < broj;i++){
            niz[i].ispis();
        }   
    }
};

int main(){
    Firma<Radnik,5> radnici;
    Firma<Sef,5> sefovi;
    radnici.ispis();
    sefovi.ispis();
    return 0;
}