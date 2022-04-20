/*
	Realizovati klasu Student koja ima privatne atribute ime,prezime i broj indeksa.
	Metode: inicijalizacija(char* i,char* p,int b) postavlja vrednosti atribute na vrednosti koje dolazi kao argumenti i ispis koja ispisuje vrednosti atributa.
*/
#include<iostream>
#include<string>


using namespace std;

class Student{
    private:
    string ime;
    string prezime;
    int broj_indeksa;
    public:
    Student(string i, string p, int b){
        ime = i;
        prezime = p;
        broj_indeksa = b;
    }
    void ispis(){
        cout << "ime: " << ime << " prezime: "<<prezime << "Broj indeksa: "<<broj_indeksa <<endl;
    }
};


int main(){
    Student s1("Nikola", "matković", 036016);
    s1.ispis();
    return 0;
}