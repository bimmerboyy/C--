#include<iostream>
using namespace std;
int main(){
    int *p,*q,x;
    p = new int; // alociramo p
    *p = 1; // Smestamo sadrzaj u adresi q
    *q = *p; // Derferenciranje p = q
    cout<<"Prvi slicaj:"<<endl;
    cout<<"p = "<<*p<<endl;
    cout<<"q = "<<q<<endl;
    
    x = 2;     *q = x; // Vrednost x cuvamo u q
    cout<<"Drugi slicaj:"<<endl;
    cout<<"p = "<<*p<<endl;
    cout<<"q = "<<*q<<endl;
    p = new int;
    *p = 3; 
    cout<<"Treci slicaj:"<<endl;
    cout<<"p = "<<*p<<endl;
    cout<<"q = "<<*q<<endl;
    return 0;
}