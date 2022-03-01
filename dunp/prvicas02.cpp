/*Napisati program koji proverava da li je uneti broj paran*/
#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int broj;
    cout<<"Unesite jedan ceo broj\n";
    cin>>broj;
    if(broj % 2 == 0){
        cout<<"Uneti broj je paran\n";
    }
    else{
        cout<<"Uneti broj je neparan";
    }
    return 0;
}