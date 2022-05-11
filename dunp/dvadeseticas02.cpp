#include<iostream>
#include<string>

using namespace std;

class Dosije{
    protected:
    string ime;
    string prezime;
    string index;
    public:
    Dosije(){
        cout<<"Pozvao se konstruktor bez argumenata klase Dosije"<<endl;
        ime = "Aldin";
        prezime = "Mekic";
        index = "0360/142022";
    }
    Dosije(string i,string p,string ind){
        cout<<"Pozvao se konstruktor sa argumenata klase Dosije"<<endl;
        ime = i;
        prezime = p;
        index =ind;
    }
    void predstaviSe(){
        cout<<"Ja sam"<<ime<<endl;
        cout<<"Prezivam se"<<prezime<<endl;
        cout<<"Moj br indeksa je"<<index<<endl;
    }
    
};
class Predmet{
    protected:
    string imeProfesora;
    string prezimeProfesora;
    string nazivPredmeta;
    public:
    Predmet(){
        cout<<"Pozvao se konstruktro bez argumenata klase Predmet"<<endl;
        imeProfesora = "Safet";
        prezimeProfesora = "Prusevic";
        nazivPredmeta = "OOP1";
    }
    Predmet(string i,string p,string n){
        cout<<"Pozvao se konstruktro sa argumenata klase Predmet "<<endl;
        imeProfesora = i;
        prezimeProfesora = p;
        nazivPredmeta = n;
    }
    void opisPredmeta(){
        cout<<"Naziv predmeta je:"<<nazivPredmeta<<endl;
        cout<<"Predaje nam prosefor"<<imeProfesora<<" "<<prezimeProfesora<<endl;
    }

};

class Ispit : Dosije,Predmet{
    public:
    int ocena;
    string datum;
    public:
    Ispit(){
        cout<<"Pozvao se konstruktor bez argumenata Ispit"<<endl;
        ocena = 7;
        datum = "07.12.2022";
    }
    Ispit(string iu,string pu,string ind,string ip,string pp,string n, int o,string d) : Dosije(iu,ip,ind),Predmet(ip,pp,n){
        cout<<"Pozvao se konstruktor sa argumenata Ispit"<<endl;
        ocena = o;
        datum = d;
    }
};

int main(){
    
    return 0;
}