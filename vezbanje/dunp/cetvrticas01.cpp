#include<iostream>
using namespace std;
int main(){
    int a = 5, b = 10;
    int *p = &a;
    cout<<"a = "<<a<<", b = "<<b<<"\n";// a=5, b = 10
    (*p)++;
     cout<<"a = "<<a<<", b = "<<b<<"\n";// a = 6, b = 10
     cout<<"adresa a = "<<&a<<", pokazivac pokazuje na adresu "<<p<<"\n";
     p++;
      cout<<"a = "<<a<<", b = "<<b<<"\n";// a = 6, b = 10

    
    return 0;
}