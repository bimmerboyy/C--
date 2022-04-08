/*
relaizovati klasu Racun koja ima privatne atribute:
operandi,operandi2 i operacija
metode: konstruktor bez argumenata koji postavlja  da je raccun 1+1
izracunaj() koja vraca vredbnost racuna (npr za 1+1 vratila bi 2)
U glavnom programu naprvaiti jedan objekat klase racun i izracunati izraz
    2 * 5
*/
#include<iostream>
using namespace std;

class Racun{
    private:
    int operandi1,operandi2;
    char operacija;
    public:
    Racun(){
        operandi1 = 1;
        operandi2 = 1;
        operacija = operandi1 + operandi2;
    }
    float Izracunaj(){
        switch(operacija){
            case '+': return operandi1 + operandi2;
            case '-': return operandi1 - operandi2;
            case '*': return operandi1 * operandi2;
            case '/': return (float)operandi1 / operandi2;
        }
        return 0;
    }
    void setOp1(int a){ operandi1 = a; }
    void setOp2(int a){ operandi2 = a; }
    void setOp(char c){ operacija = c; }
    int getOp1(){return operandi1;}
    int getOp2(){return operandi2;}
    int getOp(){return operacija;}
};
int main(){
    Racun r;
    r.setOp('+');
    r.setOp1(5);
    r.setOp2(4);
    cout<<"Rezultat operacije"<<r.getOp()<<" Prvog:"<<r.getOp1()<<" i "<<" Drugog:"<<r.getOp2()<<" broja je:"
    <<r.Izracunaj();
    return 0;
    
}