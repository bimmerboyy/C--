/*Realizovati klasu Fibonaci koja ima dva javna atributa
n - ceo broj koji oznacava koliko elemenata Fibonacijevog
niza zelimo da izracunamo i *niz - niz elemenata koji predstavljaju elemente Fibonacijevog niza. niz[0] = 1,niz[1] = 1...niz[i]=niz[i-1]+niz[i-2] Metode:
Konstruktor sa i bez argumenata,Kopi konstruktor
int suma() - metoda koja vraca sumu elemenata Fibonacijevog
niza.
int vrednost(int i) - metoda koja vraca vrednost i-tog elementa
fibonacijevog niza (ako je moguce) 
void prosiri(int x) - metoda koja prosiruje niz elemenata Fibonacievog
niza za x novih elemenata.
void ispis() - metoda koja ispisuje elemente Fibonacijevog niza
Destruktor
*/
#include<iostream>

using namespace std;

class Fibonaci{
    public:
    int n; 
    int *niz;
    Fibonaci(){
        cout << "Unesite koliko želite elemenata fibonačijevog niza?";
        cin >> n;
        niz = new int[n];
        niz[0] = 1;
        niz[1] = 1;
        for(int i=2; i<n; i++){
            niz[i] = niz[i-1] + niz[i-2];
        }
    }
    Fibonaci(int n){
        this->n = n;
        niz = new int[n];
        niz[0] = 1;
        niz[1] = 1;
        for(int i=2; i<n; i++){
            niz[i] = niz[i-1] + niz[i-2];
        }
    }
    Fibonaci(const Fibonaci &f){
        cout << "Ušao sam u konsrukoor kopiranja" <<endl;
        this->n = f.n;
        niz = new int[this->n];
        for(int i=0; i<this->n; i++){
            this->niz[i] = f.niz[i];
        }
    }
    int suma(){
        int s=0;
        for(int i=0; i<n; i++){
            s+=niz[i];
        }
        return s;
    }
    int vrednost(int i){
        if(i>n){
            return -1;
        }
        return niz[i];
    }
    void prosiri(int x){
        int *pomocni = new int[n];
        for(int i=0; i<n; i++){
            pomocni[i] = niz[i];
        }
        delete [] niz;
        n += x;
        niz = new int[n];
        for(int i=0; i<(n-x); i++){
            niz[i] = pomocni[i];
        }
        for(int i = (n-x); i<n; i++){
            niz[i] = niz[i-1] + niz[i-2];
        }
    }
    ~Fibonaci(){
        delete []niz;
    }
};
int main(){
    // Fibonaci f1;
    // cout <<f1.suma() <<endl;
    // cout <<f1.vrednost(4) <<endl;
    // f1.prosiri(3);
    // cout <<f1.suma() <<endl;
    // cout <<f1.vrednost(7) <<endl;
    Fibonaci f2(5);
    cout << f2.suma();
    Fibonaci f3 = f2;
    cout << f3.suma();
    return 0;
}
       
