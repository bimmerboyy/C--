/*
#include<iostream>
#include <type_traits>
using namespace std;
int main(){
    int n,i,broj, prvi, srednji, zadnji, zastava=0;
    cout<<"Unesite n:";
    cin>>n;
    int niz[n];
    for(i=0;i<n;i++){
        cin>>niz[i];
    }
    cout<<"Uneti broj koji se pretrazuje:";
    cin>>broj;
    prvi = 0;
    zadnji = n-1;
    while (prvi <= zadnji){
        srednji = (prvi + zadnji) / 2;
        if(niz[srednji] == broj ){
            zastava = 1;
            cout<<srednji<<"srednji";
            break;
        }
        else if (broj < niz[srednji]){
            zadnji = srednji - 1;
        }
        else if(broj > niz[srednji]){
            prvi = srednji + 1;
        }
    }
    if(!zastava){
        cout<<"nisam pronašao element";
    }
    return 0;
    
}
*/


#include<iostream>
using namespace std;
int main(){
    
    int first,last,i,flag = 0,n,middle,searchNumber;
    cout<<"Unesite n:";
    cin>>n;
    int array[n];
    cout<<"Unesite niz";
    for(i = 0;i < n;i++){
        cin>>array[i];
    }
    cout<<"Unesite broj koji se trazi:";
    cin>>searchNumber;
    first = 0;
    last = n-1;
    while(first <= last){
        middle = (first + last)/2;
        middle = searchNumber;
        if(array[middle] == searchNumber){
             flag = 1;
             cout<<"Sredina:"<<middle<<endl;
            break;
        }
        else if(searchNumber > array[middle]){
            first = middle + 1;
          
        }
        else if(searchNumber < array[middle]){
            last = middle-1;
           
        }
    }
     if(!flag){
            cout<<"Nisam prosao broj";
        }
        cout<<"Broj koji tarzim je:"<<searchNumber;
        
     
    return 0;
}

