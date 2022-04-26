#include <iostream>
#include <string>

using namespace std;

class Pesma{
    public:
    Pesma(int m, int s, string t){
        this->duzina_m  = m;
        this->duzina_s = s; 
        this->ime = t;
    }
    Pesma(){
        duzina_m = 3;
        duzina_s = 45;
        ime = "Nepoznato";
    }
    private:
    int duzina_m, duzina_s;
    string ime;
    friend void p_max(Pesma &p1, Pesma &p2){
        if(p1.duzina_m > p2.duzina_m  || p1.duzina_m == p2.duzina_m  &&  p1.duzina_s > p2.duzina_s){
            cout << "Pesma " << p1.ime << " je veća od pesme " <<  p2.ime  << endl;
            return;
        }
        cout << "Pesma " << p1.ime << " je manja od pesme " <<  p2.ime  << endl;
    }
    friend void max_van(Pesma &p1, Pesma &p2);
    public:
    Pesma(const Pesma &p1){
        p1.ime = "Žal";
        this->ime = p1.ime;
        this->duzina_m = p1.duzina_m;
        this->duzina_s = p1.duzina_s;
    }
    void ispis(){
        cout << "ime: " <<ime <<" , dužina : " <<duzina_m << " : " <<duzina_s <<endl;
    }
};

void max_van(Pesma &p1, Pesma &p2){
    if(p1.duzina_m > p2.duzina_m  || p1.duzina_m == p2.duzina_m  &&  p1.duzina_s > p2.duzina_s){
        cout << "Pesma " << p1.ime << " je veća od pesme " <<  p2.ime  << endl;
        return;
    }
    cout << "Pesma " << p1.ime << " je manja od pesme " <<  p2.ime  << endl;
}

int main(){
    Pesma p1(3, 30, "minut dva");
    Pesma p2(4, 20, "I zanesen tom ljepotom");
    Pesma p3;
    p_max(p1, p2);
    max_van(p2, p3);
    Pesma p4 = p2;
    p2.ispis();
    p4.ispis();
    return 0;
}