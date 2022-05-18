#include<iostream>
#include <math.h>
using namespace std;

class Linearna{
    protected:
    float b,c;
    public:
    Linearna(float b = 2,float c = 3){
        this->b = b;
        this->c = c;
    }
    virtual int  resenje(){
        if(c != 0){
            float x = -b/c;
            cout<<"Jednacina ima resenje x = "<<x<<endl;
            return 1;
        }
        else{
            cout<<"Jednacina nema resenja jer je c = 0"<<endl;
            return 0;
        }
    }
    virtual void ispis(){
        cout<<"Linearna jednacina je oblika "<<b<<","<<c<<" = 0"<<endl<<endl;
    }
};

class Kvadratna : Linearna{
    protected:
    float a;
    public:
    Kvadratna(float a = 2,float b = 5,float c = 3) : Linearna(b,c){
        this->a = a;
    }
    int resenje(){
      float D = b*b - 4*a*c;
      if(D > 0){
          float x1 = (-b + sqrt(D)) / (2*a);
          float x2 = (-b + sqrt(D)) / (2*a);
          cout<<"Resenja kvadratne jednacine su x1 = "<<x1<<","<<"x2 ="<<x2<<endl;
          return 2;
      }
      else if(D == 0){
          float x = -b/(2*a);
          cout<<"Resenje kvadratne jednacine je x = "<<x<<endl;
          return 1;
      }
      else{
          cout<<"Kvadratna jednacina nema resenja"<<endl;
          return 0;
      } 
    }
    void ispis(){
        cout<<"Kvadratna jednacina je oblika"<<a<<"x^2 + "<<b<<"x + "<<c<<" = 0"<<endl;
    }

};

int main(){
    Linearna l;
    Kvadratna k;
    cout<<l.resenje()<<endl;
    cout<<k.resenje()<<endl;
    l.ispis();
    k.ispis();
}