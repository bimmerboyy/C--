/*
relaizovati klasu Racun koja ima privatne atribute:
operandi,operandi2 i operacija
metode: konstruktor bez argumenata koji postavlja  da je raccun 1+1
izracunaj() koja vraca vredbnost racuna (npr za 1+1 vratila bi 2)
U glavnom programu naprvaiti jedan objekat klase racun i izracunati izraz
    2 * 5
*/
#include <iostream>
#include <string.h>

using namespace std;

class Racunanje{
    private:
    float prvi;
    float drugi;
    char operacija;
    public:
    Racunanje(){
        prvi = 1;
        drugi = 1;
        operacija = '+';
    }
    void set1(float a){
        this->prvi = a;
    }
    void set2(float b){
        this->drugi = b;
    }
    void setOperacija(char o){
        this->operacija = o;
    }
    float get1(){
        return prvi;
    }
    float get2(){
        return drugi;
    }
    char getO(){
        return operacija;
    }
    float izracunaj(){
        switch(operacija){
            case '+':
                return prvi + drugi;
                break;
            case '-':
                return prvi - drugi;
                break;
            case '*':
                return prvi * drugi;
                break;
            case '/':
                return prvi / drugi;
                break;
            default:
                cout<<"Došlo je do greške";
                return 0;
        }
    }
};

int main(){
    Racunanje r1;
    cout << r1.izracunaj();
    r1.set1(3);
    r1.set2(5);
    r1.setOperacija('*');
    cout <<endl<< "rezultat operacije " << r1.get1() << r1.getO() <<r1.get2() << " iznosi : "  << r1.izracunaj();

    return 0;
}