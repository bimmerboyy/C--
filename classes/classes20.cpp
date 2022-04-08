/*Zadatak 2.1 Tačke u ravni
Napisati na jeziku C++ klasu tačaka u ravni. Predvideti: postavljanje i dohvatanje koordinata, izračunavanje rastojanja do zadate tačke, čitanje tačke i pisanje tačke.
Napisati na jeziku C++ program za ispitivanje prethodne klase.
*/

#include<iostream>
#include<math.h>
using namespace std;

class Tacka{
    private:
    float x,y;
    public:
    Tacka(float a,float b){
        x = a;
        y = b;
    }
    float aps() const {
        return x;
    }
    float ord() const {
        return y;
    }
    float citaj(){
        cin>>x>>y;
    }
    float pisi(){
        cout<<" ("<<x<<","<<y<<")"<<endl;
    }
    float rastojanje(Tacka t){
        return sqrt(pow(x-t.x,2) + pow(y-t.y,2));
    }
};
/*
int main(){
    Tacka t1;
    t1.aps();
    t1.ord();
    t1.citaj();
    t1.pisi();
    t1.rastojanje();
}
*/