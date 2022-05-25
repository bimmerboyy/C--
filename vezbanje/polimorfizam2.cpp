//napraviti program koji rešava linarnu i kvadratnu jednačinu, preko klasa, rešenje da je virtuelno.
#include <iostream>
#include <cmath>
#include <string>

using namespace std;

class Linearna{
    protected:
    int b;
    int c;
    public:
    Linearna(int b = 5, int c = 3 ){
        this->b = b;
        this->c = c;
    }
    virtual void resenje(){
        if(c != 0){
            float x = -b  / c;
            cout << "x: " << x << endl;
        }
        else{
            cout << "Jednacina nema rešenje";
        }
    }
    virtual void ispis(){
        cout << "linearna jednačina je oblika :" << b << "+" << c << " = 0" <<endl;
    }
};

class Kvadratna : public Linearna {
    protected:
    float a;
    public:
    Kvadratna(float a = 1, float b = 5,  float c = 3) : Linearna(b, c), a(a) {};
    void resenje(){
        float D  = pow(b, 2) - 4 * a * c;
        if(D == 0){
            float x =  - b / 2 * a;
            cout<<"Resenje kvadratne jednacine je x = "<<x<<endl;
        }
        else if(D > 0){
            float x1 = (-b + sqrt(D)) / (2*a);
            float x2 = (-b - sqrt(D)) / (2*a);
            cout<<"Resenja kvadratne jednacine su x1 = "<<x1<<","<<"x2 ="<<x2<<endl;
        }
        else{
            float pod_korenom = sqrt(-D);
            float realan_deo = -b / (2 * a);
            float imaginarni_deo = pod_korenom / (2 * a);
            cout<<"Resenja kvadratne jednacine su x1 = "<<realan_deo << "+" <<imaginarni_deo << "i, "<<realan_deo << "-" <<imaginarni_deo << "i, "<<endl;
        }
    }
    void ispis(){
        cout << "Kvadratna jednačina je oblika " << a << "X ^ 2 + " << "bx" << "+"<< c << " = 0" <<endl;
    }    
};


int main() {
    Linearna l;
    Kvadratna k;
    Kvadratna k2(3, 2, 1);
    k.resenje();
    l.resenje();
    k2.resenje();
    return 0;
}