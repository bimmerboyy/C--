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
#include<stdlib.h>
using namespace std;

class Fibonaci{
    public:
    int n;
    int *niz;
    Fibonaci(){
        cout<<"Unesite n:";
        cin>>n;
        niz = new int[n];
        for(int i = 2;i < n;i++){
            niz[i] = niz[i-1] + niz[i-2];
        }
    }
};