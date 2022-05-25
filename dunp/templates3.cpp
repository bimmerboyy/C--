#include <iostream>
#include <string>


using namespace std; 

class Radnik {
    public:
    string ime;
    string prezime;
    float plata;
    public:
    Radnik(){
        ime = "nikola";
        prezime = "matković";
        plata = 150000
    }
    void ispis(){
        cout<< ime << prezime << plata;
    }
}