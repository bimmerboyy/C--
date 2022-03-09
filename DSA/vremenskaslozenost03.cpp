#include<iostream>
using namespace std;
int main(){
    int i,j,n;
    cout<<"Unesite n:";
    cin>>n;
    int a[n];
    for(i = 0;i < n;i++){ // Prva petlja se izvrsava sa pow(n,2);
        for(j = 0;j < n;j++){
            a[i,j] = 0;

        }
    }
    for(i = 0;i < n;i++){ // Druga sa pow(n,2) + n;
        a[i,j] = 1;
    }
    return 0;
    // Ukupno vreme za izvrsavanje je pow(n, 2) ondonso T(n) = O(pow(n,2))
}