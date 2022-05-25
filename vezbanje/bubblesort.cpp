// Bubblesort

#include<iostream>

using namespace std;


        
    


int main(){

    int i,n,j;
    cout<<"Unesite n:"<<endl;
    cin>>n;
    int niz[n];
    for(i = 0; i < n; i++){
        cin>>niz[i];
    }
    cout<<"Niz pre bubble sorta je:"<<endl;
    for(i = 0; i < n; i++){
        cout<<niz[i]<<",";
    }
    cout<<endl<<"Bubblesort:"<<endl;
   
    for(i = 0; i < n; i++){
        for(j = 0; j < n-1-i; j++){
            if(niz[j] > niz[j+1]){
                niz[j] = niz[j] ^ niz[j+1];
                niz[j+1] = niz[j] ^ niz[j+1];
                niz[j] = niz[j] ^ niz[j+1];
            }
        }
    }
    for(i = 0;i < n;i++){
        cout<<" "<<niz[i];
    }
        

    return 0;
}