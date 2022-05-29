/*
Primer u kom ćemo realizovati funkciju za unos elemenata niza,
ispis elemenata i računjanje srednje vrednosti elemenata niza.
Tip elemenata nam nije poznat prema tome imali bismo 3 preklopljenje funkcije za unos,
3 za ispis i 3 za srednju vrednost tj ukupno 9 funkcija.
Umesto toga uptoerbnom šablona imaćemo samo 3 funkcije za bilo koji tip podataka.
*/
#include <iostream>

using namespace std;

template <typename T>

//create function for entering array of templet
void unos(T *niz, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Unesite element niza: ";
        cin >> niz[i];
    }
}

template <class T1>
void ispis(T1 *niz, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << niz[i] << " ";
    }
}

template <typename T2>
T2 srednja_vrednost(T2 *niz, int n){
    float srednja_vrednost = 0;
    for(int i = 0; i < n ; i++){
        srednja_vrednost += niz[i];
    }    
    return srednja_vrednost / n;
}


int main(){
    //test functions 
    int n;
    cout << "Unesite broj elemenata niza: ";
    cin >> n;
    int niz[n];
    unos(niz, n);
    (niz, n);
    ispis(niz, n);
    cout << srednja_vrednost(niz, n);
    return 0;
}
