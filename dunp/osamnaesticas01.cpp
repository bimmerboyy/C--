//Nasledjivanje klasa

#include<iostream>

using namespace std;

class dvaDTacka{
    protected:
    int x,y;
    public:
    dvaDTacka(){
        cout<<"Pozvan je konstruktor klase 2DTacka"<<endl;
        x = 2;
        y = 3;
    }

};

class triDTacka{
    public:
    int z;
    public:
    triDTacka(){
        cout<<"Pozvan je konstruktor klase 3DTacka"<<endl;
        z = 5;
    }
};