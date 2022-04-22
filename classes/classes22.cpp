
/*Realizovati klasu Polinom koja treba ima dinamicki alocirani niz *koeficijenti i stepen polinoma n.
Konstruktore sa i bez argumenata, copy konstruktor, ispis I metoda izracunaj(x) 
koja racuna vrednost polinoma za x.
U main funkciji napraviti objekat klase i testirati sve metode
*/

#include<iostream>
#include<stdlib.h>
#include<math.h>

using namespace std;

class Polinom{
    float *koeficijenti;
    int n;
   
public:
    Polinom(){
        n = 5;
        UnosKoeficijenata();
    }
    Polinom(int n) {
        this->n = n;
        UnosKoeficijenata();
    }
    Polinom(const Polinom &p){
        this->n = p.n;
        float* koeficijenti = new float[this->n+1];
        for(int i = 0;i < n;i++){
            this->koeficijenti[i] = p.koeficijenti[i];
        }
    }


    private:
    void UnosKoeficijenata(){        
        float* koeficijenti = new float[n+1];
        cout<<"Unesite koeficijente:";
        for(int i = 0;i < n;i++){
            cin>>koeficijenti[i];
        }
        cout<<endl;
    }
    public:
    float izracunaj(float x){
        float s = 0;
        for(int i = 0;i < n+1;i++){
            float clan = koeficijenti[i] * pow(x,(n-i));
            s += clan;
        }
        
        return s;

    }
    void ispis(){
       cout<<"Polinom je:"<<endl;
       for(int i = 0;i < n+1;i++){
           if(i != 0 && koeficijenti[i] > 0){
               cout<<koeficijenti[i];
           }
           if(i != 0){
               cout<<n-i<<"x";
           }
       }
    }
   
};
int main(){
    Polinom p1(5);
    p1.izracunaj(2);
    p1.ispis();
    p1.izracunaj(3);
   
    return 0;
}