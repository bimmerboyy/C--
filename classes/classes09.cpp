#include<iostream>
#include<string>
using namespace std;
// Constructors exrcise

class shoes{
    public:
    string brand;
    string model;
    int size;
    shoes(string a,string b,int c);
};
shoes::shoes(string a,string b,int c){
    brand = a;
    model = b;
    size = c;
}
int main(){
    shoes first("Nike", "AirMax", 44);
    shoes second("Puma", "BMW Model",42);
    cout<<"Prva patika:"<<first.brand<<endl<<"Model:"<<first.model<<endl<<"Velicina:"<<first.size<<endl<<endl;
    cout<<"Druga patika:"<<second.brand<<endl<<"Model:"<<second.model<<endl<<"velicina:"<<second.size<<endl;
    return 0;
}