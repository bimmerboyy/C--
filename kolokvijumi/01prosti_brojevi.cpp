/*Napisati program kojim se testira f-ja prost  koja 
  proverava da li je broj prost.
  Program stampa brojeve blizance(susedni neparni brojevi koji su prosti)
  */

#include <iostream>

using namespace std;

bool prost(int a){
    int i = 0;
    for(i = 2; i <= a/2; i++){
        if(a % i == 0) return false;
    } 
    return true;
}

int main(){
    int n;
    do{
        cout << "Unesite n: ";
        cin >> n;
    }
    while(n<3);
    for(int i=3; i<=n; i+=2){
        if(prost(i) & prost(i+2)){
            cout << "( " << i << " , " << i+2 << " ) ";
        }
    }
    return 0;
}

/*
#include<iostream>

using namespace std;

int main(){
    cout<<"*"<<endl<<"**"<<endl<<"***"<<endl<<"****"<<endl<<"*****"<<endl<<"******"<<endl<<"*******"<<endl<<"********"<<endl<<"*********"<<endl<<"**********";
    return 0;
}
*/