
/*Realizovati klasu Polinom koja treba ima dinamicki alocirani niz *koeficijenti i stepen polinoma n.
Konstruktore sa i bez argumenata, copy konstruktor, ispis I metoda izracunaj(x) 
koja racuna vrednost polinoma za x.
U main funkciji napraviti objekat klase i testirati sve metode
*/

#include<iostream>
#include<stdlib.h>
using namespace std;

class Polinom{
    float *koeficijenti;
    int n;
public:

    Polinom(){
        n = 5;
        UnosKoeficijenata(n);
       
    }
    Polinom(int n) {
        this->n = n;
        UnosKoeficijenata(n);
    }
    Polinom(const Polinom &p){
        this->n = p.n;
        int* koeficijenti = new int[this->n+1];
        for(int i = 0;i < n;i++){
            this->koeficijenti[i] = p.koeficijenti[i];
        }
    }
    private:
    void UnosKoeficijenata(int n){        
        cout<<"Unesite stepen polinoma";
        cin>>n;
        int* koeficijenti = new int[n+1];
        for(int i = 0;i < n;i++){
            cin>>koeficijenti[i];
        }
    }
    void izracunaj(float x){
        float s = 0;
        for(int i = 0;i < n+1;i++){
            
        }

    }
    void ispis(){

    }
   
};