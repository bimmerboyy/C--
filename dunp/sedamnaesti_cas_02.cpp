#include <iostream>
#include <string>

using namespace std;

class Razlomak{
    private:
    int imenilac;
    int brojilac;
    public:
    Razlomak(int a, int b){
        brojilac = a;
        imenilac = b;
    }
    void setB(int a){
        brojilac = a;
    }
    void setI(int a){
        imenilac = a;
    }
    int getB(){
        return brojilac;
    }
    int getI(){
        return imenilac;
    }
    void ispis(){
        cout << brojilac << " / " <<  imenilac;
    }
    Razlomak operator ++(){
        brojilac++;
        imenilac++;
        return *this;
    }
    Razlomak operator ++(int){
        brojilac++;
        imenilac++;
        return *this;
    }
    Razlomak operator +(Razlomak r){
        int newImenilac = imenilac*r.imenilac;
        Razlomak rzbir(newImenilac/imenilac*brojilac+newImenilac/r.imenilac*r.brojilac, newImenilac);
        return rzbir;
    }
    Razlomak operator *(int k){
        Razlomak rnew (brojilac*k, imenilac);
        return rnew;
    }
    Razlomak& operator = (Razlomak& r){
        if(&r == this){
            return *this;
        }
        brojilac = r.brojilac;
        imenilac = r.imenilac;
        return *this;
    }
    Razlomak operator -(){
        brojilac = -brojilac;
        return *this;
    }
    // private :
    // void skracivanjeRazlomka(){
    //     //....
    // }
    //ispis upotrebom frendly funkcije 
    friend ostream& operator<<(ostream& out, Razlomak r){
        out<<r.brojilac << " / " << r.imenilac << endl;
    }
    //unos bez frendly funkcije
    iostream& operator >>(iostream & in){
        cout << "unesite broj i imen razlomka"<< endl;
        in>>imen>>broj;
        return in;
    }
    void skracivanjeRazlomka(){
        
    }
};

int main{
    Razlomak r1(1,2), r2(2,3);
    Razlomak r3 = r1 + r2;
    Razlomak r4 = r1 * 5;
    r3++;    
    cout <<r1;
    cout <<r2;
    cout <<r3;
    cout <<r4;
    Razlomak r5 = (++r1);
    cout <<r5;

    return 0;
}