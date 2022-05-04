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

    friend bool provera(Flasa &f){
        if(nalepnica == f.nalepnica && cenaBezKaucije == f.cenaBezKaucije)
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
        cena = (zapremina < 0.5) ? cenaBezKaucije = 1.05 : cenaBezKaucije = 1.1;

    }
    ispisStaklena(){
        cout<<"Flasa je staklena"<<endl;
        ispis();
        cout<<"Ukupna cena staklene flase je "<<cena<<endl;
    }
};
class Plasticna : Flasa{
    public:
    Plasticna (string n,float cbk,float z = 0.33) : Flasa(n,cbk,z){
    }
    ispisPlasticna(){
        cout<<"Flasa je plasticna"<<endl;
        ispis();
    }

};

int main(){
    
    return 0;
}