#include<iostream>
using namespace std;

int main(){
    int *p,*q;
    p = new int;
    *p = 1;
    q = new int;
    *q = 2;
    delete p;
    p = q;
    q = new int;
    *q = 3;
    cout<<"p = "<<*p<<endl;
    cout<<"q = "<<*q<<endl;
}