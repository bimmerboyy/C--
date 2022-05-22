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
    cout<<"Bubblesort:"<<endl;
    for(i = 0; i < n; i++){
        for(j = i +1;j < n; j++){

        }
       if(niz[i] > niz[j]){
           niz[i] = niz[i] ^ niz[j];
           niz[j] = niz[i] ^ niz[j];
           niz[i] = niz[i] ^ niz[j];
    }
        

    

    }
        

    return 0;
}