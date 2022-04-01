/*
Napisati program koji kreira klasi i koristi razlicite funkcije sa istim imenom 
prekalpanje fnkcija
*/
#include<iostream>
using namespace std;

class ZamenaElemenata{
    private:
    int a,b,c,d;    
    public:
    void  zamena1(int a,int b){
        a = a ^ b;
        b = a ^ b;
        a = a ^ b;
        cout<<"Prvi broj ce biti: "<<a<<endl;
        cout<<"Drugi broj ce biti: "<<b<<endl;
    }
    void zamena2(int c,int d){
        c = c ^ d;
        d = c ^ d;
        c = c ^ d;
        cout<<"Treci broj je:"<<c<<endl;
        cout<<"Cetvriti broj je:"<<d<<endl;
    }

};

int main(){
    int x,y,z,g;
    cout<<"Unesite prva dva broja";
    cin>>x>>y;
    cout<<"unsite druga dva broja";
    cin>>z>>g;
    ZamenaElemenata z1,z2;
    z1.zamena1(x,y);
    z2.zamena2(z,g);
 
    return 0;

}