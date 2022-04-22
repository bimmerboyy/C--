/*Realizovati klasu Polinom koja treba ima dinamicki alocirani niz *koeficijenti i stepen polinoma n.
Konstruktore sa i bez argumenata, copy konstruktor, ispis I metoda izracunaj(x) koja racuna vrednost polinoma za x.
U main funkciji napraviti objekat klase i testirati sve metode
*/

#include <iostream>

using namespace std;

class Polinom{
    int n;
    float* koeficijenti;
    public:
    Polinom(float n){
        this->n=n;
        koeficijenti = new float[this->n+1];
    }
    Polinom(){
        for(int i=0;i<n+1;i++){
			koeficijenti[i]=1;
		}
    }
    Polinom(const Polinom &p1){
        this->n=p1.n;
        this->koeficijenti=new float[n+1];
        for(int i=0;i<n+1;i++){
            this->koeficijenti[i]=p1.koeficijenti[i];
        }
    }
    void ucitaj_koeficijente(){
        cout<<"Unesite koeficijente za polinom stepena "<<n<<endl;
        for(int i=0;i<n+1;i++){
            cin>>koeficijenti[i];
        }
    }
    void ispisi(){
        cout<<"p="<<koeficijenti[0];
        for(int i=1;i<n+1;i++){
            cout<<" + "<<koeficijenti[i]<<"x^"<<i;
        }
        cout<<endl;
    }
    int izracunaj(int x){
        int vrednost_polinoma=koeficijenti[0];
        int stepenx=1;
	    for(int i=1;i<n+1;i++) {
            stepenx*=x;
            vrednost_polinoma+= koeficijenti[i]*stepenx ;
        }
	    return vrednost_polinoma;
    }
};

int main(){
    int x;
    Polinom p,p1(3);
    p;
    p1.ucitaj_koeficijente();
    Polinom p2=p1;
    p.ispisi();
    p1.ispisi();
    p2.ispisi();
    cout<<"Unesite x";
    cin>>x;
    cout<<"Vrednost polinom p2 u tacki x= "<<x<<"  je"<<p2.izracunaj(x)<<endl;
    return 0;
}