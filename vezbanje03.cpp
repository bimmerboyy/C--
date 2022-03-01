#include<iostream>
using namespace std;
int main (){
    int a,x,y,z;
    cout<<"Unesite dvocifren broj\n";
    cin >> a;
    x=a/10;
    y=a%10;
    z=x-y;
    cout << "Razlika prve i druge cifre je:"<<z;


}