// Ispisati sve brojve blizance od 1 do n. Blizanci su susedni neparni brojev9i koji su prosti.
// Za proveru da li je broj prost kreirati funkciju.
#include <iostream>
using namespace std;


int prost(int broj){
    int n,i,flag = 1;
    for(i=2;i<broj/2;i++){
        if(broj % i){
            flag=0;
            break;
        }
    }
    return flag;
}
int main(){
    int i,n;
    cout<<"Unesite n:\n";
    cin>> n;
    cout<<"blizanci su:\n";
    for(i=3;i<=n;i+=2){
        if(prost(i) == 1 && prost(i + 2)==1){
            cout<<i<<"  "<<(i+2)<<"\n";
        }
    }
    return 0;
}
   
    
   
