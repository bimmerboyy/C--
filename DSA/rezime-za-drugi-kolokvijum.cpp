/// fajl je rezime svega, i ne treba ga pokretati kao program!

//poželjan početak fajla:
#include <iostream>
#include <string>
#include <cmaht> 

using namespace std;

// kreiranje klase :

class Prva{
    public:                                                             //Može da se koristi bilo gde
    private:                                                            //Ne može se pristupiti van klase, ne koristiti za nasleđinje.
    protected:                                                          //Isto što i private - sem što dozvoljava nasleđivanje
    int a;                                                              //atributi 
    int b;
    public:                                                             //metode su uvek public.
    Prva(){                                                             //konstruktor bez argumenata:  
        a = 1;
        b = 2;
    }    
    Prva(int a, int b){                                                  // konstruktor sa argumentima:
        this->a = a;
        this->b = b;
    }
    //ova  dva konstrukotra mogu biti napisana kao :
    ime(int a = 1, int b = 2){
        this->a = a;
        this->b = b;
    }
    ime(int a, int b) : a(a), b(b) {}                                    //skraćeno:
    Prva(const Prva &i){                                                 //kopi konstruktor
        this->a = i->a;
        this->b = i->b;
    }
};

class Druga{
    protected:
    int x;
    Prva *niz;                                                           //dinamički niz nepoznate dužine
    int trenutna_duzina_niza;                                            //potrebno je čuvati trenutnu dužinu niza.
    public:
    Druga(n = 1) : n(n);
    Druga operator +=(Prva p1){                                          //preklapanje/preopterećivanje operatora, druga+=prva.
        Prva *temp = new Prva[trenutna_duzina_niza];                     // pravi se temp niz da bi smestili trenute elemente
        for(int i = 0; i < trenutna_duzina_niza; i++){                  
            temp[i] = niz[i];                               
        }
        trenutna_duzina_niza++;
        niz = new Prva[trenutna_duzina_niza];                            //niz se proširuje za jedan
        for(int i = 0; i < trenutna_duzina_niza - 1; i++){               //važan detalj je  - 1
            niz[i] = temp[i];
        }
        niz[trenutna_duzina_niza-1] = p1;                                // na kraju se ubacuje.
    }
    
    
    ~Druga(){
        delete []niz;                                                    //potrebno je brisati dinamičke nizove samo.
    }
};