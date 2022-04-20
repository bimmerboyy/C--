#include<iostream>
using namespace std;
// Primer 2
// Razlomak

class Razlomak{
    int brojilac,imenilac;
public:

      Razlomak(int a,int b){
        brojilac = a;
        imenilac = b;
    }
    void setB(int value){
        brojilac = value;
    }
    void setI(int value){
        brojilac = value;
    }
    int getB(){
        return brojilac;
    }
    int getI(){
        return imenilac;
    }
    // 1/2 + 2/3 = 7/6
    Razlomak operator+(Razlomak r){
        int newImen = imenilac*r.imenilac;
        Razlomak rzbir(newImen / imenilac*brojilac + newImen / r.imenilac * r.brojilac,newImen);
        rzbir.skracivanjeRazlomaka();
        return rzbir;
    }
    // newImen = 2 * 3 = 6
    // Razlomak rzbir(6/2*1+6/3*2,6) _> rzbir(7,6)
    Razlomak operator *(int k){
        Razlomak rnew(brojilac * k,imenilac);
        rnew.skracivanjeRazlomaka();
        return rnew;
    }
    Razlomak& operator =(Razlomak& r){
        if(&r == this){
            return *this;
        }
        brojilac = r.brojilac;
        imenilac = r.imenilac;
        return *this;
    } 
    Razlomak operator++(int){
        brojilac++;
        imenilac++;
        skracivanjeRazlomaka();
        return *this;
    }
     Razlomak operator++(){
        brojilac++;
        imenilac++;
        skracivanjeRazlomaka();
        return *this;
    }
    Razlomak operator -(){
        brojilac = -brojilac;
        return *this;
    }
    bool operator ==(Razlomak r){
        skracivanjeRazlomaka();
        r.skracivanjeRazlomaka();
        if(brojilac == r.brojilac && imenilac == r.imenilac)
            return true;
        return false;
    }
    
        void skracivanjeRazlomaka(){
            if(brojilac < imenilac){
                for(int i = brojilac;i > 1;i--){
                    if(brojilac % i == 0 && imenilac % i == 0){

                    }
                }
            }
        }

    //ispis
    // Preklapanje preko friend funkcije
    friend ostream& operator<<(ostream& out,Razlomak r){
        out<<r.brojilac<<"/"<<r.imenilac<<endl;
    }

    //unos bez friend funkcije
    istream& operator>>(istream& in){
        cout<<"Unesite brojilac i imenilac razlomka"<<endl;
        in>>brojilac>>imenilac;
        return in;
    }
  
   
    
};
int main(){
    Razlomak r1(1,2),r2(2,3);
    Razlomak r3 = r1 + r2;
    Razlomak r4 = r1 * 5;
    cout<<r1;
    cout<<r2;
    cout<<r3;
    cout<<r4;
    Razlomak r5 = (++r1);
    cout<<r5;
    r3++;
}