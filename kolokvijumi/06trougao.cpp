/* Realizovati klasu Trougao koja ima tri privatna atributa a,b i c (realne vrednosti)
   i metode: inicijalizacija(a,b,c) postavlja vrednosti atributa na vrednosti argumenata;
   pisi - metoda koja ispisuje podatke o atributima a,b i c;
   P() - metoda koja racuna povrsinu trougla; O() racuna i vraca obim trougla;
*/

#include <iostream>
#include <cmath>

using namespace std;

class Trougao{
    private:
    float a;
    float b;
    float c;
    public:
    Trougao(float a, float b, float c){
        this->a = a;
        this->b = b;
        this->c = c;
    }
    void pisi(){
        cout << "a: " <<a << "b: " <<b << "c: " <<c << endl;
    }
    float O(){
        return a+b+c;
    }
    float P(){
        float s = O() / 2;
        float p = sqrt(s*(s-a)*(s-b)*(s-c));
        return p;
    }
};

int main(){
    Trougao t1(3,4,5);
    cout << t1.P();
    return 0;
}