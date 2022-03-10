#include<iostream>
#include<string.h>
using namespace std;
class Studenti{
    public:
    char ime[15],prezime[15],pol;
    float visina,tezina;
    int starost;
    public:
    void inic(char *i,char *pr,char p,float v,float t,int s);
    void predtaviSe();
    void starneje(int godine);
};
void Studenti::inic(char *i, char *pr, char p, float v, float t, int s){
    strcpy(i, ime);
    strcpy(pr,prezime);
    pol = p;
    visina = v;
    tezina = t;
    starost = s;
}
void Studenti::predtaviSe(){
    cout<<"Ja sam:"<<ime<<" "<<prezime<<endl<<"Visok sam:"<<visina<<"cm"<<endl
    <<"Tezina:"<<tezina<<"kg"<<endl<<"Imam:"<<" "<<starost<<"godina";
}
void Studenti::starneje(int godine){
    starost += godine;
}
int main(){
    Studenti s;
    Studenti p;
    s.inic("Tarik","Kucevic", 'M',192,100,19);
    s.predtaviSe();
    s.starneje(3);
    p.inic("Nikola","Matkovic", 'M',170,60,19);
    p.predtaviSe();
    p.starneje(3);
}