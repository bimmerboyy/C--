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
    Datum uporedi(Datum d2){
        Datum pom(0,0,0);
        Datum  d1 =  *this;
        if(d1.d > d2.d){
            pom.d = d1.d - d2.d;
        }
        else if(d1.d  < d2.d) {
            switch(m-1){
                case 1:  case 3:  case 5:  case 7:  case 8:  case 10:
                pom.d = 31 + d - d2.d;
                break; 
                 case 4:  case 6:  case 9:  case 11:
                 pom.d = 30 + d - d2.d;
                 case 2:
                 if(g % 4 == 0 && g % 100 != 0 || g % 400 == 0){
                     pom.d = 29 + d - d2.d;
                 } 
                 else{
                     pom.d = 28 + d - d2.d;
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
    
    bool daLije(Datum d2){
        if(d == d2.d && m == dat.m)
            return true;
        return false;
    }
    void ispisSlavljenika(Datum dat){
      
        if(daLije(dat)){
            
            cout<<ime<<" "<<prezime<<" je danas rodjendan"<<endl;
        }
        else{
            Datum dt(d,m,g);
            Datum razlika = dat.uporedi(dt);
            cout<<"Do rodjendana ima jos"<<razlika.d<<"dana i"<<razlika.m<<" meseci"<<endl;
        }

    }
    int godine(Datum dat){
        Datum dt(d,m,g);
        Datum razlika = dat.uporedi(dt);
        return razlika.g;
    }
};



int main(){
    Datum danas;
    Rodjendan aldin;

    return 0;
}