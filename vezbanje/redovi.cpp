/*Zadatak 2.3

Redovi brojeva ograničenih kapaciteta
Red je linearna struktura podataka kod kojeg se podaci stavljaju na jednom kraju a uzimaju na drugom
kraju. Može da bude ograničenog i neograničenog kapaciteta. Napisati na jeziku C++ klasu redova ogra-
ničenih kapaciteta za cele brojeve. Predvideti:
 stvaranje praznog reda sa zadatim kapacitetom, kopiranjem drugog reda i premeštanjem drugog reda,
 uništavanje reda,
 dodavanje jednog podatka i uzimanje jednog podatka,
 ispitivanje da li je red pun i da li je prazan,
 pisanje sadržaja reda na glavnom izlazu, i
 pražnjenje reda.
*/

#include<iostream>
using namespace std;

class Red{
    private:
    int *niz,prvi,poslednji,duz,kap;
    public:
    explicit Red(int k = 10);
    Red(const Red &rd){
        niz = new int [kap = rd.kap];
        for(int i = 0;i < kap;i++){
            niz[i] = rd.niz[i];
        }
        duz = rd.duz;
        prvi = rd.prvi;
        poslednji = rd.poslednji;       
    }
    Red(Red&& rd){
        niz = rd.niz;
        prvi = rd.prvi;
        poslednji = rd.poslednji;
        duz = rd.duz;
        rd.niz = NULL;

    }
    void stavi(int br){
        if(duz == kap){
            cout<<"Red je pun";
            exit(1);
        }
        if(duz != kap){
            poslednji++;
            niz[poslednji] = br;
        }
        else if(poslednji = kap){
            poslednji = 0;
            duz++;
        }
    }
    void uzmi(){
        if(duz == 0){
            exit(2);    
        }
        else if(duz != 0){
            prvi++;
            int b = niz[prvi];
        }
        else if(prvi == kap){
            prvi = 0;
            duz--;
        
        }
    }
    void display(){
        for(int i = 0;i < duz;i++){
            cout<<niz[(prvi + i)%kap];
        }
    }

};


