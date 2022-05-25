#include<iostream>

using namespace std;


class Base{
    public:
    virtual void fun(int x){ cout<<"Base"<<endl;}
};
class Derived : public Base{
    public:
    void fun(int x)  { cout<<"Derived"<<endl;}
};

int main(){ 
    Base *b = new Derived();
    b->fun(5);


    return 0;

}