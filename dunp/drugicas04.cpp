/* Napisati program koji proverava da li je ueti broj prost */
#include <iostream>
using namespace std;
int main(){
    int broj,semafor = 1,i;
    cout<<"Unesite broj za proveru:\n";
    cin>>broj;
    for(i=2;i<broj/2;i++){
        if(broj % i == 0)
            semafor = 0;
        if(!semafor)
        cout<<"unesti broj nije prost\n";
        else 
        cout<<"Unesti broj nije prost\n";
    }
    return 0;

}