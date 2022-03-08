/*Napisati program koji sa standardnog ulaza unosi prvo dimenziju niza pa
zatim i elemente niza. Memoriju za niz alocirati dinamicki, koriˇsścenjem
funkcije malloc. Nakon toga odrediti maksimalni element niza i sumu
elemenata na parnim pozicijama.*/
/* Demonstracija dinamicke alokacije memorije koriscenjem funkcije malloc */
/* Program unosi niz proizvoljne dimenzije i nalazi najveci element niza
i sumu elemenata na parnim pozicijama. */
/* Neophodno je ukljuciti zaglavlje "stdlib.h" zbog funkcije malloc */
#include <stdlib.h>
#include<iostream>
using namespace std;
int main(){
    int i,n,max=0,s=0;
    cout<<"Unesite n:";
    cin>>n;
    int* niz;
    niz = new int[n];

    for(i = 0;i < n;i++){
        niz[i]=i;
    }
    cout<<"Niz je: ";
    for(i = 0;i < n;i++){
        cout<<" "<<niz[i];
    }
    for(i = 0;i < n;i++){
        if(niz[i] > max){
            max = niz[i];
        }
        if(i % 2 == 0){
            s+=niz[i];
        }
    }
    cout<<endl;
    cout<<"Najveci element u nizu je:"<<max<<endl<<"Suma elemenata na parnim pozicijama u nizu je:"<<s;
    delete []niz;

 
    return 0;
   
}