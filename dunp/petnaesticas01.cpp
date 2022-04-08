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
        cout << "Pozvan je prvi konstruktor" <<endl;
    }
    Poklon(const Poklon &P){
        cena = P.cena;
        brojac++;
        id = brojac;
        cout << "Pozvan je copy konstruktor" <<endl;
    }
    void ispis(){
        cout<<id<<"("<<cena<<")"<<endl;
        cout<<"brojač: "<<brojac<<endl;
    }
};
int Poklon::brojac = 0;// Moramo van klase
int main(){
    Poklon p1(200);
    p1.ispis();
    Poklon p2(300);
    p2.ispis();
    Poklon p3 = p1;
    p3.ispis();
    return 0;
}