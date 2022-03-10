#include <string.h>
#include<iostream>
#include<string>
using namespace std;
class Student{
    //atributi
    public:
    char ime[15],prezime[15],pol;
    float visina,tezina;
    int starost;
    //metode
    void inic(char *i,char *pr,char p,float v,float t,int s);
    void predstaviSe();
    void starenje(int godine);

};
void Student::inic(char *i, char *pr, char p, float v, float t, int s){
    strcpy(i, ime);
    strcpy(pr, prezime);
    pol = p;
    visina = v;
    tezina = t;
    starost = s;
}
void Student::predstaviSe(){
    cout<<"Ja sam:"<<ime<<" "<<prezime<<endl<<"Visok sam:"<<visina<<endl<<"Tezak sam:"<<tezina<<"kg"<<endl
    <<"Imam"<<" "<<starost<<" "<<"godina";
}
void Student::starenje(int godine){
    starost+=godine;
}
int main(){
    Student s;
    s.inic("Tarik", "Kucevic", 'M',191,100,19);
    s.starenje(3);
    s.predstaviSe();
    return 0;
}