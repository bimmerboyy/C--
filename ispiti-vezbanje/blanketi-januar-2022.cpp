//Blanekti januar 2022

#include <asm-generic/errno.h>
#include<iostream>

using namespace std;


class Figura{
    protected:
    int x;
    int y;
    public:
    Figura(int x, int y){
        this->x = x;
        this->y = y;
    }
    virtual void dodaj(int x, int y){
        this->x = x;
        this->y = y;
    }
    virtual void ispisi(){
        cout<<"("<<x<<","<<y<<")"<<endl;
    }
    
};

class Kvadrat : public Figura{
    protected:
    int velicinaStranice;
    public:
    Kvadrat(int x,int y,int velicinaStranice) : Figura(x,y) {
        if(x || y || velicinaStranice < 0){
            cout<<"Ponovo unesite stranice kvadrata"<<endl;
        }
        else{
            this->velicinaStranice = velicinaStranice;
        }
    }

   int PovrsinaKvadrata(){
    return x*y*velicinaStranice;
   }
    int ObimKvadrata(){
    return x+y+velicinaStranice;
   }

};

class Pravougaonik : public Figura{
    int a;
    int b;
    Pravougaonik(int a,int b, int x,int y,) : Figura(x,y) {
        if (a || b || x || y < 0){
            cout<<"Unsite ponovo stranice pravougaonika"<<endl;
        }
        else{
            this->a = a;
            this->b = b;
        }
    }
    int PovrsinaPravougaonika(){
       return  a*b*x*y;
    }
    int ObimPravougaonika(){
       return  a+b+x+y;
    }
};

class Kolekcija{
    private:
    Figura *figure;
    public:
    Kolekcija(Figura &figure){

    }
    int PovrsinaSvihFigura(){

    }
    int ObimSvihFigura(){
        
    }
};

int main(){

    return 0;
}
