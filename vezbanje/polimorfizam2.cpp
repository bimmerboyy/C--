//napraviti program koji rešava linarnu i kvadratnu jednačinu, preko klasa, rešenje da je virtuelno.
#include <iostream>

using namespace std;

class Linearna{
    protected:
    int b;
    int c;
    public:
    Linearna(int b, int c){
        this->b = b;
        this->c = c;
    }
    virtual void izracunaj(){
        if(c != 0){
            float x = -b  / c
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