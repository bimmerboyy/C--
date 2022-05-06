#include<iostream>

using namespace std;

class Kvadar{
    protected:
    int a,b,c;
    public:
    Kvadar(){

        cout<<"Pozvao se konstruktor bez argumenata kvadar"<<endl;
        a = 5;
        b = 4;
        c = 10;
    }
    Kvadar(int a,int b,int c){
        cout<<"Pozvao se konstruktor sa argumenata kvadar"<<endl;
        this->a = a;
        this->b = b;
        this->c = c;
    }
    int Zapremina(){
        int v = a*b*c;
        return v;
    }
    void ispis(){
        cout<<"Tacke kvadra: "<<"("<<a<<","<<b<<","<<c<<")"<<endl;
        cout<<"Zapremina kvadra:"<<Zapremina()<<endl;
    }
};

class Bazen : public Kvadar{
    protected:
    int d;
    public:

    Bazen(int d){
        this->d = d;
    }
    Bazen(){
        d = 2;
    }
    Bazen (int a,int b,int c,int d) : Kvadar(a,b,c){
        this->d = d;
    }
    int Vode(){
        return Zapremina() - (a*b*d);
    }
    void ispis2(){
        cout<<"Bazen je napunjen do "<<d<<" metara i potrebno je jos "<<Vode()<<"l vode da bi se naunio bazen"<<endl;

    }
};
int main(){

    Bazen b(10,100,30,6);
    b.ispis();
    b.ispis2();
}
