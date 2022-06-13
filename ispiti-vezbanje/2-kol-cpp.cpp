#include<iostream>

using namespace std;

/*1.Tacka u ravni zadaje se kvadratnom (1 kvadrant,2 kvadrant,3 kvadrant ili 4 kvadrant), i realnim koordinatama x i y 
podrazumevano(0,0) koje mogu da se dohvate.Kvadranti sluze da bi se izvrsila provera da li koordinate tacke ispravno unete.
Tacka moze da se upise u izlazini tok (cout<<tacka) u obliku (x,y)

2.Apstraktna kriva u ravni predvidja stvaranje tacke  cije koordinate se racunaju na osnovu zadatog realnog parametra p(kriva(p)).
Moze da se napravi kopija krive i da se kriva upise u izlazni tok (cout<<kriva)

3.Spirala je kriva kod koje se koordinate tacke racunaju po formulama x = ap cos(b+p) i y ap sin(b+p) gde su ai b realni koeficijenti
koji se zadaju prilikom stavranja objekta (podrazumevano 1 i 0).Spirala se u izlazni tok pise u obliku [a*p*cos(b+p),a*p*sin(b+p)],
gde su a i b vrednosti sadrzanih koeficijenata 

4.Prikazivac sadrzi krivu ka i tri realna parametra pMin,pMax DELTAp,koji se zadaju prilikom stvaranja.Moze da se zameni sadrzan kriva
da se promene sva tri parametra odjednom da se tabele sadrzane krive upise u zadati izlazni tok i da se prikazivac ispise u izlazni tok
(cout<<prik) .Tabela krive  se sastoji od zaglavlja i parova (p,k(p)) za pmin <= p <= pmax sa korakom DELTAp.Upisivanje prikazivaca u 
izalzni tok je oblika k(pmin,pmin,DELTAp) gde je k rezultat upisivanje sadrzajne krive 

5.Napisati na jeziku C++ program koji napravi jednu spiralu,napravi jedan prikazivac koji prikazuje tu spiralu ispise prikazivac
na glavnom izlazu i ispise tabeliranu sadrzanu krivu na glavnom izlazu.Koristi fiksne parametre (nije potrebno ucitavati podatke
sa glavnog ulaza)

*/

class Tacka{
    private:
    int x;
    int y;
    public:
    Tacka(int x,int y){
        this->x = x;
        this->y = y;
    }
    Tacka(){
        x = 0;
        y = 0;
    }
    int getX(){
        return x;
    }
    int getY(){
        return y;
    }
    void setX(int x){
       this->x = x;
    }
    void setY(int y){
        this->y = y;
       
    }

    bool daLiSeNalazi(){
        if(x > 0 && y > 0){
            cout<<"Tacka"<<"("<<x<<","<<y<<")"<<", nalazi se u prvom kvadrantu"<<endl;
        }
        else if(x < 0 && y > 0){
            cout<<"Tacka"<<"("<<x<<","<<y<<")"<<", nalazi se u drugom kvadrantu"<<endl;
        }
        else if(x < 0 && y < 0){
            cout<<"Tacka"<<"("<<x<<","<<y<<")"<<", nalazi se u trecem kvadrantu"<<endl;
        }
        else if(x > 0 && y < 0){
            cout<<"Tacka"<<"("<<x<<","<<y<<")"<<", nalazi se u cetvrtom kvadrantu"<<endl;
        }
        else if(x == 0 && y == 0){
            cout<<"Tacka"<<"("<<x<<","<<y<<")"<<", nalazi se na polaznoj tacki"<<endl;
        }
        return false;
        int temp1,temp2;
        cout<<"X i Y koje ste uneli su netacni.Molimo vas unesite opet!"<<endl;
        cout<<"X";
        cin>>temp1;
        cout<<"Y";
        cin>>temp2;
    }
    friend ostream& operator<<(ostream& COUT,Tacka &t1){
        COUT<<"("<<t1.x<<","<<t1.y<<")"<<endl;
        return COUT;
    }
};

class Kriva{
    protected:
    Tacka p,t;
    public:
    Kriva(Tacka x,Tacka y){
        p = x;
        t = y;
               
    }
    Kriva(){
       
    }
    // Kriva(Kriva& k1){
    //     p = k1.p;
    // }

};

int main(){
    Tacka t1(0,0);
    t1.daLiSeNalazi();
 

    return 0;
}