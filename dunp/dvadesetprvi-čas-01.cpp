//klasa tačka ima atribute x i y, z metode konstrukor sa argumentima, konstruktor  bez argumenata, ispis,
/* klasa kvadrati ima atribude abcd, koji su tipa tačka. metode konstrukor sa i bez argumenata, ispis, stranica  - metode  koja računa stranicu, 
dijagonala - metoda koja računa dijagonalu.
klasa piramida nasleđuje klasu tačka i kvadrat, i oddaje atribudt visina, visina se računa na onsnovu prethodnih klasa. metode konstrukor 
sa i bez argumentata, ispis, površina.*/
#include <iostream>

using namespace std;

class Tacka{
    protected:
    int x;
    int y;
    int z;
    public:
    Tacka(){
        x = 2;
        y = 2;
        z = 5;
    }
    Tacka(int a, int b, int c){
        x = a;
        y = b;
        z = c;
    }
    Tacka(const Tacka &t1){
        this -> x = t1.x;
        this -> y = t1.y;
        this -> z = t1.z;
    }
    void ispis(){
        cout << "X : " << x << "y: " << y << " z: " << z << endl;
    }
};

class Kvadrat{
    protected:
    Tacka a;
    Tacka b;
    Tacka c;
    Tacka d;
    public:
    Kvadrat(const Tacka &t1, const Tacka &t2, const Tacka &t3, const Tacka &t4 ){
        a = t1;
        b = t2;
        c = t3;
        d = t4;
        d.ispis();
    }
    void ispis_kvadrata(){
        a.ispis();
        b.ispis();
        c.ispis();
        d.ispis();
    }
};

class piramida : Tacka, Kvadrat{
    a = t1;
    b = t2;
    c = t
}

int main(){
    Tacka t1(0, 0, 0);
    Tacka t2(5, 0, 0);
    Tacka t3(5, 5, 0);
    Tacka t4(0, 5, 0);
    Kvadrat k1(t1, t2, t3, t4);
    return 0;
}