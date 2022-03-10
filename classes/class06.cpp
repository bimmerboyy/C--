#include<iostream>
#include<string>
using namespace std;
class Car{
    public:
    int year;
    string brand;
    string model;
};
int main(){
    Car o;
    o.brand = "BMW";
    o.model = "E46 M3";
    o.year = 2005;
    Car p;
    p.brand = "Fiat";
    p.model = "Multipla";
    p.year = 2003;
    cout<<"Prvi auto:"<<endl<<o.brand<<endl<<o.model<<endl<<o.year<<endl;
    cout<<"Drugi auto:"<<endl<<p.brand<<endl<<p.model<<endl<<p.year<<endl;
    return 0;
}