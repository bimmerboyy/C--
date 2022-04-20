/*
	Realizovati klasu Tacka sa privatnim atributima x i y.
	Metode: inicijalizacija(a,b) koja postavlja vrednosti atributa na vrednosti koje dolazi kao argumenti,
    translacija(int dx,int dy) koja translira tacku za vrednosti dx po x, odnosno dy po y osi;
	pozicija() ispisuje trenutnu poziciju tacke u koordinatnom sistemu (njene x i y koordinate) 
*/
#include<iostream>

using namespace std;

class Tacka{
    private:
    int x;
    int y;
    public:
    Tacka(int a, int b){
        x = a;
        y = b;
    }
    void translacija(int dx, int dy){
        x += dx;
        y += dy;
    }
    void pozicija(){
        cout << "x: " << x << " y: "<<y <<endl;
    }
};


int main(){
    Tacka t1(5, 4);
    t1.translacija(1, 1);
    t1.pozicija();
    return 0;
}