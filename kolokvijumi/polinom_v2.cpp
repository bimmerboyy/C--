/*Realizovati klasu Polinom koja treba ima dinamicki alocirani niz *koeficijenti i stepen polinoma n.
Konstruktore sa i bez argumenata, copy konstruktor, ispis I metoda izracunaj(x) koja racuna vrednost polinoma za x.
U main funkciji napraviti objekat klase i testirati sve metode
*/
#include <iostream>
#include <cmath>

using namespace std;

class Polinom{
    private:
    int n;
    float * niz;
    void unos_koeficijenata(){
        for(int i = 0; i<=n; i++){
            cout << "Unesite " << i << ". koeficijent";
            cin >> niz[i];
        }
    }
    public:
    Polinom(int n){
        this->n = n;
        this->niz = new float[n+1];
        unos_koeficijenata();
    }
    Polinom(){
        this->n = 3;
        this->niz = new float[n+1];
        unos_koeficijenata();
    }
    Polinom(const Polinom &p){
        this->n  = p.n;
        this->niz = new float[n+1];
        for(int i = 0; i<=n; i++){
            this->niz[i] = p.niz[i]; 
        }
    }
    void ispis(){
        for(int i=0; i<n; i++){
            cout << niz[i] << "X ^ " << n-i << " + ";
        }
        cout << niz[n] <<endl;
    }
    float izracunaj(float x){
        float s = 0;
        for(int i=0; i<n; i++){
            s += niz[i] * (pow(x, n-i));
        }
        s += niz[n];
        return s;
    }
};

int main(){
    Polinom p1(3);
    p1.ispis();
    cout << "Rezultat je : " << p1.izracunaj(2);
    Polinom p2  = p1 ;
    p2.ispis();
    cout << "Rezultat je : " << p2.izracunaj(2);
    return 0;
}