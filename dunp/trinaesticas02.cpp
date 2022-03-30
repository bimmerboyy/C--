#include<iostream>
#include<math.h>
using namespace std;

class Polinom{
    private:
    int n;
    float *koeficijenti;
    public:
    Polinom(){
        n = 5;
        AlociranjeRacunanjElemenata();
    }
    Polinom(int n){
        this->n = n;
        AlociranjeRacunanjElemenata();
    }
    Polinom(const Polinom &obj){
        n = obj.n;
        koeficijenti = new float[n+1];
        for(int i = 0;i < n+1;i++){
            koeficijenti[i] = obj.koeficijenti[i];
        }
    }
    ~Polinom(){
        delete [] koeficijenti;
    }
  

    private:
    void AlociranjeRacunanjElemenata(){
        koeficijenti = new float [n+1];
        cout<<endl;
        cout<<"Unesite koeficijente:"<<endl;
        for(int i = 2;i < n+1;i++){
            cin>>koeficijenti[i];
        }
        cout<<endl;

}
    public:
    float Izracunaj(float x){
        float s = 0;
        for(int i = 0;i < n+1;i++){
            float clan = koeficijenti[i] * pow(x,i);
            s += clan;
        }
    }
    void Ispis(){
        cout<<"Polonom"<<endl;
        for(int i = 0;i < n+1;i++){
            if(i != 0 && koeficijenti[i] > 0){
                cout<<koeficijenti[i];
            }
            if(i != 0){
                cout<<"x"<<i;
            }
        }
    }
};
int main(){
    Polinom p;
    p.Ispis();
    cout<<"Vrednost polinoma je  "<<p.Izracunaj(3.1)<<endl;
}