/* Primer 21. Napisati funkciju koja u neopadajućem nizu a[1], a[2], …, a[n]
određuje indeks elementa koji je jednak broju b metodom polovljenja. Ako
ne postoji element jednak b, funkcija treba da vrati -1.*/

#include<iostream>
#include<stab.h>
using namespace std;
int binarySearch(int n, int niz[], int brojKojiTrazim){
    int pocetak = 0;
    int kraj = n-1;
    while(pocetak <= kraj){
           int sredina = (pocetak + kraj)/2;
    if(brojKojiTrazim == niz[sredina]){
        return sredina;
    }
        else if(brojKojiTrazim > niz[sredina]){
            pocetak = sredina + 1;
        }
            else{
                kraj = sredina - 1;
            }
    }
    return -1;
}
int main(){
     system("clear");

    int n,i;
    cout << "Unesite duzinu niza:";
    cin >> n;
    int niz[n];
    for(i = 0;i < n;i++){
        cin>>niz[i];
    }
    int broj,rezultat;
    cout << "Unesite broj koji trazite:";
    cin >> broj;
    rezultat = binarySearch(n, niz, broj);
    if(rezultat >= 0){
        cout<<"Broj koji je nadjen je:"<<niz[rezultat]<<"\nNjegov indeks je:"<<rezultat<<endl;
          
    }
    else{
        cout<<"Broj: "<<broj<<" nije pronadjen";
    }
 
    return 0;
   

  

        
    
}