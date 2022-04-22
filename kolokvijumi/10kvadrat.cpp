/*Realizovati klase Prava i Kvadrat. 
Klasa Prava ima atribute x1,y1,x2,y2,d. 
Metode: Konstruktor sa i bez argumenata, 
set i get metode, 
metoda racunajDuzinu() i metodu ispis(). 
Kvadrat ima atribute:Prava vrh,Prava dno 
Metode:Konstruktor sa i bez argumenata, povrsina(),obim() i ispis().
*/
#include <iostream>
#include <cmath>

using namespace std;

class Prava{
    private:
    float x1;
    float x2;
    float y1;
    float y2;
    float d;
    public:
    Prava (float x1, float y1, float x2, float y2){
        this->x1 = x1;
        this->y1 = y1;
        this->x2 = x2;
        this->y2 = y2;
    }
    Prava(){
        x1 = 0;
        x2 = 10;
        y1 = 0;
        y2 = 10;
    }
    float racunajDuzinu(){
        d = sqrt(pow(x2-x1, 2) + pow(y2-y1,2));
        return d;
    }
    void setx1(float x1){
        this->x1 = x1;
    }
    void setx2(float x2){
        this->x2 = x2;
    }
    void sety1(float y1){
        this->y1 = y1;
    }
    void sety2(float y2){
        this->y2 = y2;
    }
    float getx1(){
        return x1;
    }
    float gety1(){
        return y1;
    }
    float getx2(){
        return x2;
    }
    float gety2(){
        return y2;
    }
    void ispis(){
        cout << "X1: " << x1 << "X2: " << x2 << "y1: " << y1 << "y2: " << y2  << "d: " << racunajDuzinu() <<  endl;   
    }
};

class Kvadrat{
    private:
    Prava vrh;
    Prava dno;
    public:
    Kvadrat(){
        dno.setx1(1);
        dno.sety1(1);
        dno.setx2(3);
        dno.sety2(1);

        vrh.setx1(1);
        vrh.sety1(3);
        vrh.setx2(3);
        vrh.sety2(3);
    }
    Kvadrat(Prava p1, Prava p2){
        this->dno.setx1(p1.getx1());
        this->dno.sety1(p1.gety1());
        this->dno.setx2(p1.getx2());
        this->dno.sety2(p1.gety2());
        
        this->vrh.setx1(p2.getx1());
        this->vrh.sety1(p2.gety1());
        this->vrh.setx2(p2.getx2());
        this->vrh.sety2(p2.gety2());
    }
    float povrsina(){
        return pow(vrh.racunajDuzinu(), 2);
    }
    float obim(){
        return vrh.racunajDuzinu() * 4;
    }
    void ispis(){
        cout << "povrsina: " << povrsina() << "obim: " << obim() <<endl; 
    }
};

int main(){
    Prava p1(1, 1, 1, 3);
    Prava p2(1, 3, 3, 3);
    Kvadrat k1(p1, p2);
    k1.ispis();
    Kvadrat k2;
    k2.ispis();
}