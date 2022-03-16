// Klasa Student (indeks,ime,prezime,ocene,studijsk progtam)
//metode: inacijalizacija(...),prosek() -> vraca prosek
// studenata,brpolozenih(), dodajocenu(ocena), oslobodi()

#include<iostream>
#include<string.h>
using namespace std;

class Student{
    public:
    string ime,prezime,studijskiProgram;
    int ocene,brocena;
    Student(string i,string p,string s,int o,int br){
        ime = i;
        prezime = p;
        studijskiProgram = s;
        ocene = 0;
        brocena = br;
    }
    int prosek();
    int brpolozenih();
    void dodajocenu(int ocena);
    void oslobodi();
};

int Student::prosek(){
    int br,i,s = 0;
    for(i = 0; i < brocena;i++){
        if(ocene > 5 && ocene <= 10){
            s += ocene;
            br++;
        }
    }
    return s/br;
}
int Student::brpolozenih(){
    int br = 0,i;
    for(i = 0;i < brocena ;i++){
        if(ocene > 5 && ocene <= 10){
            br++;   
        }
    }
    return br;
}
void Student::dodajocenu(int ocena){
   
}