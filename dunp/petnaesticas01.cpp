#include<iostream>
using namespace std;

class Poklon{
    float cena;
    int id;
    static int brojac;
    public:

    Poklon(float c){
        cena = c;
        brojac++;
        id = brojac;
    }
    Poklon(const Poklon &P){
        cena = P.cena;
        brojac++;
        id = brojac;
    }
    void ispis(){
        cout<<id<<"("<<cena<<")"<<endl;
        cout<<"Brojac ima vrednost "<<brojac<<endl;
        
    }
};
int Poklon::brojac = 0;// Moramo van klase
int main(){
    Poklon p1(200);
    p1.ispis();
    Poklon p2(1000);
    p2.ispis();
    p1.ispis();
    Poklon p3(p2);
    p3.ispis();
    return 0;
}