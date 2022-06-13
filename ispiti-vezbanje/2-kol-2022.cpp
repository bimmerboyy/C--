#include<iostream>
#include<cmath>
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

enum Kvadrant { I, II, III, IV};

class Tacka{
    protected:
    float x,y;
    Kvadrant kvadrant;
    public:
    Tacka(float x = 0,float y = 0, Kvadrant kvadrant  = I){
        if(
            (x>=0 && y>=0 && kvadrant==I) ||
            (x<0 && y>=0 && kvadrant==II) ||
            (x<0 && y<0 && kvadrant==III) ||
            (x>=0 && y<0 && kvadrant==IV)
        ){
            this->x=x;
            this->y=y;
            this->kvadrant=kvadrant;
        }
        else{
            cout<<"Tacka nije u ispravnom kvadrantu"<<endl;
        }
    }
    friend ostream& operator<<(ostream& out, Tacka t1){
        out<<"("<<t1.x<<","<<t1.y<<")";
        return out;
    }
    void set_x(float x){
        this->x=x;
    }
    void set_y(float y){
        this->y=y;
    }
    //make getters function
    float get_x(){
        return x;
    }
    float get_y(){
        return y;
    }
};

class Kriva{
    protected:
    Tacka t1;
    float p;
    public:
    Kriva(){
    }
    Kriva(float p){
        this->p=p;
    }
    Kriva(const Kriva& k){
        this->t1=k.t1;
        this->p=k.p;
    }
    Tacka get_t(){
        return t1;
    }
};

class Spirala : public Kriva{
    float a,b;
    public:
    Spirala(float p, float a = 1,float b = 0): Kriva(p){
        this->a=a;
        this->b=b;
        t1.set_x(this->a*cos(this->b+this->p));
        t1.set_y(this->a*sin(this->b+this->p));
    }
    friend ostream& operator<<(ostream& out, Spirala s1){
        out<<"["<<s1.a*cos(s1.b+s1.p)<<","<<s1.a*sin(s1.b+s1.p)<<"]";
        return out;
    }
};

//create class prikazivac
class Prikazivac{
    protected:
    Kriva k;
    float pMin,pMax,DELTAp;
    public:
    Prikazivac(float pMin, float pMax, float DELTAp){
        this->pMin=pMin;
        this->pMax=pMax;
        this->DELTAp=DELTAp;
    }
    Prikazivac(const Prikazivac& p){
        this->k=p.k;
        this->pMin=p.pMin;
        this->pMax=p.pMax;
        this->DELTAp=p.DELTAp;
    }
    friend ostream& operator<<(ostream& out, Prikazivac p1){
        out<<"k("<<p1.pMin<<","<<p1.pMax<<","<<p1.DELTAp<<")"<<endl;
        for(float p=p1.pMin;p<=p1.pMax;p+=p1.DELTAp){
            out<<"("<<p<<","<<p1.k.get_t().get_x()<<","<<p1.k.get_t().get_y()<<")"<<endl;
        }
        return out;
    }
    //add function for K
    void set_k(Kriva k){
        this->k=k;
    }
    //set all by once
    void set_others(int pMin, int pMax, int DELTAp){
        this->pMin=pMin;
        this->pMax=pMax;
        this->DELTAp=DELTAp;
    }
    void table(){
        for(float p=pMin;p<=pMax;p+=DELTAp){
            cout<<"("<<p<<","<<k.get_t().get_x()<<","<<k.get_t().get_y()<<endl;
        }
    }

};


int main(){
    Tacka t1(1,1,I);
    Spirala s1(2, 3, 4);
    cout<<s1<<endl;
    cout << t1;
    return 0;
}

















