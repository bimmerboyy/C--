#include<iostream>

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

int main(){

    return 0;
}