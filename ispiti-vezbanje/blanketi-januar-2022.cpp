//Blanekti januar 2022
#include <asm-generic/errno.h>
#include<iostream>

using namespace std;

class Figura{
    protected:
    int x;
    int y;
    public:
    Figura(){}
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
    virtual float povrsina() {
        cout << "virtual \n";
        return 0;
    }
};

class Kvadrat : public Figura{
    protected:
    int velicinaStranice;
    public:
    Kvadrat(int velicinaStranice, int x = 0,int y = 0) : Figura(x,y) {
        if(x < 0 || y < 0 || velicinaStranice < 0){
            cout<<"Ponovo unesite stranice kvadrata"<<endl;
        }
        else{
            this->velicinaStranice = velicinaStranice;
        }
    }
    float povrsina(){
        return velicinaStranice*velicinaStranice;
    }
    int ObimKvadrata(){
        return 4 * velicinaStranice;
    }
};

class Pravougaonik : public Figura{
    int a;
    int b;
    public:
    Pravougaonik(int a,int b, int x = 0,int y = 0) : Figura(x,y) {
        if (a  < 0 || b < 0 || x < 0 || y < 0){
            cout<<"Unsite ponovo stranice pravougaonika"<<endl;
        }
        else{
            this->a = a;
            this->b = b;
        }
    }
    float povrsina(){
        return  a*b;
    }
    int ObimPravougaonika(){
        return 2*(a+b);
    }
};

class Kolekcija{
    private:
    Figura *figure;
    int maksimalno_figura;
    int trenutno_figura;
    public:
    Kolekcija(int maksimalno_figura){
        this->maksimalno_figura = maksimalno_figura;
        this->trenutno_figura = 0;
    }
    void operator +=(Figura f){
        if(trenutno_figura < maksimalno_figura){
            Figura * temp = new Figura[trenutno_figura];
            for(int i = 0; i < trenutno_figura; i++){
                temp[i] = figure[i];
            }
            figure = new Figura[trenutno_figura+1];
            for(int i = 0; i < trenutno_figura; i++){
                figure[i] = temp[i];
            }
            figure[trenutno_figura] = f;
            trenutno_figura++;
        }
        else{
            maksimalno_figura += maksimalno_figura / 2;
            *this += f;
        }
    }
    float povrsina_kolekcije(){
        cout << "ušao";
        float povrsina = 0;
        for(int i = 0; i < trenutno_figura; i++){
            povrsina += figure[i].povrsina();
        }
        return povrsina;
    }
};

int main(){
    Kvadrat k1(4);
    Pravougaonik p1(4,5);
    Kvadrat k2(6);
    Pravougaonik p2(6,7);
    Kolekcija kolekcija(10);
    kolekcija += k1;
    kolekcija += p1;
    kolekcija += k2;
    kolekcija += p2;
    cout << "Povrsina kolekcije: " << kolekcija.povrsina_kolekcije() << endl;
    return 0;
}