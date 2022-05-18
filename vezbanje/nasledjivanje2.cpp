// Realizovati klase Kvadar i Bazen (klasa Bazen nasleđuje klasu Kvadar).
// Klasa Kvadar ima zaštićene celobrojne atribute a,b i c.
// Metode: konstruktor sa i bez argumenata i metodu ispis().
// Klasa Bazen ima a,b,c i d (gde je d dubina vode u bazenu).
// Metode konstruktor bez argumenata, void ispis().
// Kako bi se smanjio kod gde je god moguće pozvati metode bazne klase (Kvadar).

#include <iostream>

using namespace std;

class Kvadar{
    protected:
    int a,b,c;
    public:
    Kvadar(int a, int b, int c){
        a = 1;
        b = 1;
        c = 1;
    }
    Kvadar(int a, int b, int c){
        this->a = a;
        this->b = b;
        this->c = c;
    }
    virtual void ispis(){
        cout << a << "X" << b << "X" << c << endl;
    }
};
class Bazen : public Kvadar {
    protected:
    int d;
    public:
    Bazen() : Kvadar(){
        this->d = 2;
    }
    Bazen(int a = 1,int b = 1,int c = 1, int d = 1) : Kvadar(a,b,c){
        this->d = d;
    }
    void ispis(){
        cout << "a: " << a << ", b:" << b << ", c: " << c << ", d: "<<d<< endl;
    }
};

int main(){
    Kvadar k1(1,2,3), k2;
    Bazen  b1(1,2,3,2), b2;
    k1.ispis();
    k2.ispis();
    b1.ispis();
    b2.ispis();
    return 0;
}