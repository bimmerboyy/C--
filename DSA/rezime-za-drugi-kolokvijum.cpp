/// fajl je rezime svega, i ne treba ga pokretati kao program!

//poželjan početak fajla:
#include <iostream>
#include <string>
#include <cmaht> 

using namespace std;

// kreiranje klase :


class Ime{
    public:          |      protected:         |             private:  //atributi 
    int a;
    int b;
    public:                                                             //metode su uvek public.
    Ime(){                                                              //konstruktor bez argumenata:  
        a = 1;
        b = 2;
    }    
    Ime(int a, int b){                                                  // konstruktor sa argumentima:
        this->a = a;
        this->b = b;
    }
    ~Ime(){
        
    }
}