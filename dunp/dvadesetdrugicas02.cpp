#include<iostream>

using namespace std;

class Linearna{
    protected:
    float b,c;
    public:
    Linearna(float b = 2,float c = 3){
        this->b = b;
        this->c = c;
    }
    virtual void  resenje(){
        if(c != 0){
            float x = -b/c;
            cout<<"Jednacina ima resenje x = "<<x<<endl;
        }
        else{
            cout<<"Jednacina nema resenja jer je c = 0"<<endl;
        }
    }
    virtual void ispis(){
        cout<<"Linearna jednacina je oblima "<<b<<","<<c<<" = 0"<<endl;
    }
};

class Kvadratna{

};