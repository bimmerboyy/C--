#include<iostream>

using namespace std;

int main(){
    int i,n;
    cout<<"Unesite n:";
    cin >> n;
    int niz[n];

    for(i = 0;i < n;i++){
        cin>>niz[i];
    }
    cout<<"Niz pre QuickSort: ";
    for(i = 0;i < n;i++){
        cout<<niz[i]<<" ";
    }
    cout<<endl<<"Niz posle quick sorta"<<endl;

    int f,l,j,pivot = 0;
    f = 0;
    l = n-1;
    cout<<"Unesite pivot:";
    cin>>pivot;
    for(i = 0;i < n;i++){
        for(j = l;j > pivot;j--){
            if(niz[pivot] > niz[j]){
                niz[pivot] = niz[pivot] ^ niz[j];
                niz[j] = niz[pivot] ^ niz[j];
                niz[pivot] = niz[pivot] ^ niz[j];
            }
        }
    }


    return 0;
}