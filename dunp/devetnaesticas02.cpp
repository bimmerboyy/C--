#include<iostream>
#include<string>

using namespace std;

class Flasa{
    protected:
    string nalepnica;
    float cenaBezKaucije;
    float Zapremina;
    public:
    Flasa(string n,float cbk,float z = 0.33){
        nalepnica = n;
        cenaBezKaucije = cbk;
        Zapremina = z;
    }
    string getNalepnica(){return nalepnica;}
    float getCenabezKaucije(){return cenaBezKaucije;}
    float getZapremina(){return Zapremina;}

    void setCenaBezKaucije(float value){ cenaBezKaucije = value;}

    friend bool provera(Flasa &f1,Flasa &f2){
        if(f1.nalepnica == f2.nalepnica && f1.cenaBezKaucije == f2.cenaBezKaucije)
                return true;
            return false;
            
        
    }
    void ispis(){
        cout<<"Flasa ima nalepnicu"<<nalepnica<<" njena zapremina je"<<Zapremina<<"i cena bez kaucije je"<<cenaBezKaucije<<endl;

    }
};
class Staklena : Flasa{
    public:
    float cena;
    public:
    Staklena (string n,float cbk,float z = 0.33) : Flasa(n,cbk,z){
        cena = (Zapremina < 0.5) ? cenaBezKaucije = 1.05 : cenaBezKaucije = 1.1;

    }
    void ispisStaklena(){
        cout<<"Flasa je staklena"<<endl;
        ispis();
        cout<<"Ukupna cena staklene flase je "<<cena<<endl;
    }
};
class Plasticna : Flasa{
    public:
    Plasticna (string n,float cbk,float z = 0.33) : Flasa(n,cbk,z){
    }
    void ispisPlasticna(){
        cout<<"Flasa je plasticna"<<endl;
        ispis();
    }

};

int main(){
    Plasticna p("Koka kola",5,0.33);
    Staklena s("Koka kola",10,0.5);
    p.ispisPlasticna();
    s.ispisStaklena();
    
    return 0;
}