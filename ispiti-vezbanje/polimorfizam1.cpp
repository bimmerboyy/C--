#include <iostream>
#include <cmath>

using namespace std;

//Realizovati nasledjivanje Linearna->Kvadratna sa virtuelnim metodama resenje i ispis.
//create class Linearna
class Linearna{
    //add parameters
    protected:
        int a;
        int b;
    public:
    virtual float resenje(){
        return  -b/a;
    }
    virtual void ispis(){
        //cout linear formula
        cout<<"Linearna formula je: "<<a<<"x + "<<b<<" = 0"<<endl;
        //cout resenje
        cout<<"Rezultat je: "<<resenje()<<endl;
    };
    //create construcotr
    Linearna(){
       //set default values
        a=0;
        b=0;
    }
    //create constructor with parameters
    Linearna(int a, int b){
        this->a=a;
        this->b=b;
    }
};
//create class Kvadratna thet extends Linearna
class Kvadratna: public Linearna{
    //add parameters
    protected:
        int c;
    public:
    //create virtual function resenje
    virtual float resenje(){
        return (-b+sqrt(b*b-4*a*c))/(2*a);
    }
    //create virtual function ispis
    virtual void ispis(){
        //cout linear formula
        cout<<"Kvadratna formula je: "<<a<<"x^2 + "<<b<<"x + "<<c<<" = 0"<<endl;
        //cout resenje
        cout<<"Rezultat je: "<<resenje()<<endl;
    };
    //create constructor
    Kvadratna(){
        //set default values
        a=0;
        b=0;
        c=0;
    }
    //create constructor with parameters
    Kvadratna(int a, int b, int c){
        this->a=a;
        this->b=b;
        this->c=c;
    }
};
//create main function, a and b are prtected
int main(){
    //create variables
    int a,b,c;
    //ask for a,b,c
    cout<<"Unesite koeficijente a,b i c: ";
    cin>>a>>b>>c;
    //create object of class Linearna
    Linearna l(a,b);
    //create object of class Kvadratna
    Kvadratna k(a,b,c);
    //call virtual function ispis
    l.ispis();
    k.ispis();
    //return 0
    return 0;
}