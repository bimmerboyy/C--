/*Zadatak 2.2 Uglovi

Napisati na jeziku C++ klasu uglova. Predvideti:
 stvaranje ugla na osnovu zadatog broja radijana (podrazumevano 0),
 stvaranje ugla na osnovu zadatog broja stepeni, minuta i sekundi,
 dohvatanje veličine ugla u radijanima,
 dohvatanje delova ugla (celobrojnih stepeni, minuta i sekundi) odvojeno i odjednom,
 dodavanje vrednosti drugog ugla tekućem uglu,
 množenje ugla realnim brojem, i
 čitanje ugla s glavnog ulaza i ispisivanje ugla na glavnom izlazu u radijanima i u stepenima.

Napisati na jeziku C++ program za ispitivanje prethodne klase.
*/

#include<iostream>
using namespace std;
const double FAKTOR = 3.14159265358979323 / 180;

class Uglovi{
    private:
    double ugao;
    public:
    Uglovi(){
        ugao = 0;
    }
    Uglovi(int stp, int min=0, int sek=0){
     ugao = ((sek/60.+min)/60+stp) * FAKTOR; 
    }
    double radijani()const{
        return ugao;
    }
    int stepeni()const{
        return int (ugao/FAKTOR);
    }
    int minuti()const{
        return int (ugao / FAKTOR * 60)%60;
    }
    int sekunde()const{
        return int (ugao / FAKTOR *3600) % 60;
    }
    void razlozi(int step,int minu,int sekun){
        step = stepeni();
        minu = minuti();
        sekun = sekunde();
    }
    Uglovi(const Uglovi &u){
        ugao += u.ugao;
    }

    //int dodaj(int ugao){
      //  return this->ugao;
    //}
    /*
    int dodajUgao(Uglovi u){
        ugao += u.ugao;
        return ugao;
    }
    */
    double pomnozi(double a){
        ugao *= a;
        return ugao;
    }
    void citaj(){
        cin>>ugao;
    }
    void citajStp(){
        int stp,min,sek;
        cin>>stp>>min>>sek;
    }
    void pisi(){
        cout<<"Ugao:"<<ugao<<endl;
    }
    void pisiStp(){
        cout<<"Stepeni:"<<stepeni()<<endl<<"Minuti:"<<minuti()<<endl<<"Sekunde:"<<sekunde()<<endl;
    }
};
int main(){
    Uglovi u1,u2;
    cout<<"Prvi ugao:";
    u1.citaj();
    cout<<"Drugi ugao:";
    u2.citaj();
    

}