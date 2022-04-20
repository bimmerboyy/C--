/*	Reazlivati klasu DvaZnaka koja ima dva javna atributa koji su tipa karakteri
	Metode: inicijalizacija(z1,z2),uvecaj() koja uvecava znakove tj dobijamo sledece karaktere u ASCII tabeli;
	ispis() metoda koja ispisuje koji su trenutni znaci
	adresaoObjekta() ispisuje adresu objekta koji je pozvao
*/
#include<iostream>
#include<string>

using namespace std;

class Znakovi{
    public: 
    char prvi; 
    char drugi;
    Znakovi(char a, char b){
        prvi = a;
        drugi = b;
    }
    void uvecaj(){
        prvi++;
        drugi++;
    }
    void ispis(){
        cout<<"Prvi: " << prvi <<" drugi: " <<drugi <<endl;
    }
    void address(){
        cout <<this;
    }
};

int main(){
    Znakovi z1('a', 'b');
    z1.uvecaj();
    z1.ispis();
    z1.address();
    return 0;
}