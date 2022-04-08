
//Primer 1

#include <iostream>
#include<math.h>
using namespace std;

class Duz{
    private:
    float x1,y1,x2,y2,d;
    public:
    Duz(){
        x1 = 1.5;
        x2 = 11.7;
        y1 = -0.5;
        y2 = 5.8;
        d =5.6;
    }
    Duz(float x1,float x2,float y1,float y2){
        this->x1 = x1;
        this->x2 = x2;
        this->y1 = y1;
        
    }
    void racunajDUzinu(){
        d = sqrt(pow(x1-x2,2)+pow(y1-y2,2));
    }
  
    void ispis(){
        cout<<"Pocetna tacka duzi ima koordinate "<<x1<<","<<y1<<" a krajnja tacka ima koordinate "<<x2<<","<<"duzina duzi je "<<d<<endl;
    }
    void setx1(float value){  x1 = value;}
    void setx2(float value){  x2 = value;}
    void sety1(float value){  y1 = value;}
    void sety2(float value){  y2 = value;}
    float getx1(){ return x1;}
    float getx2(){ return x2;}
    float gety1(){ return y1;}
    float gety2(){ return y2;}
    float getd(){ return d;}
};
class Kvadrat{
    public:
    Duz vrh,dno;
    public:
    Kvadrat(){
        vrh.setx1(1.5);
        vrh.setx2(11.5);
        vrh.sety1(5.5);
        vrh.sety2(5.5);
        vrh.racunajDUzinu();
        dno.setx1(1.5);
        dno.setx2(11.5);
        dno.sety1(0.5);
        dno.sety2(0.5);
        dno.racunajDUzinu();
    }
    Kvadrat(Duz a, Duz b){
    
        vrh.setx1(a.getx1());
        vrh.setx2(a.getx2());
        vrh.sety1(a.gety1());
        vrh.sety2(a.gety2());
       vrh.racunajDUzinu();
       dno.setx1(b.getx1());
       dno.setx2(b.getx2());
       dno.sety1(b.gety1());
       dno.sety2(b.gety2());
       dno.racunajDUzinu();
    }   
    float Povrsina(){
           return pow(vrh.getd(),2);
       }  
       float Obim(){
           return 4*vrh.getd();
       }
       void ispis(){
           cout<<"Vrh kvadrata"<<endl;
           vrh.ispis();
           cout<<"dno kvadrata"<<endl;
           dno.ispis();
        }
    };

int main(){
    Kvadrat k;
    cout<<"Povrsina kvadrata je "<<k.Povrsina()<<endl;
    cout<<"Obim kvadrata je "<<k.Obim()<<endl;

}
