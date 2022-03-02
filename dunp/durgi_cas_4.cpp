/* na programskom jeziku c napraviti program koji dinamički  alocira memoriju za 
niz od n elemenata, a zatim uneti elenete niza   i ispisati  
maksimalni element   u nizu.*/
#include <iostream>

using namespace std;
void unos(int niz[], int n){
    cout <<"unesite elemente niza \n";
    for(int i=0; i<n; i++){
        cin>> niz[i];
    }
}
int max(int niz[], int n){
    int m = niz[0];
    for(int i = 1; i<n; i++){
        if(niz[i] > m){
            m = niz[i];
        }
    }
    return m;
}

int* alociranje(int n){
    int* a;
    a = new int[n];
    return a;
}

int main(){
    int *a, n;
    cout <<"Unesite n\n";
    cin >> n;
    a = new  int[n];
    unos(a, n);
    cout << "najveći element u nizu je" << max(a, n) <<"\n";
    delete [a];
    return 0;
}