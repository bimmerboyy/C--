#include<iostream>
#include<string>

using namespace std;

class Datum{
    public:
    int d,m,g;
    public:
    Datum(int d = 4,int m = 5,int g = 2000){
        this->d = d;
        this->m = m;
        this->g = g;
    }
    void ispis(bool format = true){
        if(format){
            cout<<"Danas je"<<d<<"."<<m<<"."<<g<<endl;

        }
        else{
            cout<<"Danas je"<<d<<"."<<m<<"."<<g<<endl;
        }
    }
    Datum uporedi(Datum dat){
        Datum pom(0,0,0);
        if(d > dat.d){
            pom.d = d - dat.d;
        }
        else{
            switch(m-1){
                case 1:  case 3:  case 5:  case 7:  case 8:  case 10:
                pom.d = 31 + d - dat.d;
                break; 
                 case 4:  case 6:  case 9:  case 11:
                 pom.d = 30 + d - dat.d;
                 case 2:
                 if(g % 4 == 0 && g % 100 != 0 || g % 400 == 0){
                     pom.d = 29 + d - dat.d;
                 } 
                 else{
                     pom.d = 20 + d - dat.d;
                 }
            }
        }
        m--;
    if(m > dat.m){
        pom.m = m - dat.m;
        g--;
    }
    pom.g = g - dat.g;
    return pom;

    }
   
};

class Rodjendan : public Datum{
    public:
    string ime,prezime;
    public:
    Rodjendan(string ime = "Aldin",string prezime = "Mekic",int d = 2,int m = 5,int g = 2000){
        this->ime = ime;
        this->prezime = prezime;
        this->d = d;
        this->m = m;
        this->g = g;
    }
    bool daLije(Datum dat){
        if(d == dat.d && m == dat.m)
            return true;
        return false;
    }
    void ispisSlavljenika(Datum dat){
       
        if(daLije(dat)){
             Datum dt(d,m,g);
            cout<<ime<<" "<<prezime<<" je danas rodjendan"<<endl;
        }
        else{
            Datum razlika = dat.uporedi(this);
            cout<<"Do rodjendana ima jos"<<razlika.d<<"dana i"<<razlika.m<<" meseci"<<endl;
        }

    }
    int godine(Datum dat){
        Datum razlika = dat.uporedi(dt);
        return razlika.g;
    }
};


int main(){
    Datum danas;
    Rodjendan aldin;

    return 0;
}