#include <iostream> 
#include <cmath> 

using namespace std;

class prava { 
private:
    int x1;
    int y1;
    int x2;
    int y2; 
    float d; 
public: 
    prava(){ 
        x1 = 0; y1 = 0; x2 = 10; y2 = 10; 
    } 
    prava(int x1, int y1, int x2, int y2){ 
        this->x1=x1;
        this->y1=y1;
        this->x2=x2;
         this->y2=y2;
    }
    void setx1 (int a){x1=a;} 
    void sety1 (int a){y1=a;} 
    void setx2 (int a){x2=a;} 
    void sety2 (int a){y2=a;} 
    int getx1() {return x1;} 
    int gety1 () {return y1;} 
    int getx2 () {return x2;} 
    int gety2 () {return y2;} 

    float racunajDuzinu(){
        d=sqrt(pow(x2-x1, 2)+ pow(y2-y1,2)); 
        return d; 
    } 
void ispis (){ cout << "Prava: (" << x1 << ", " << y1 << ") - (" << x2 << " ," << y2 << ") " << endl; } };
class kvadrat { 
private: prava vrh, dno; 
public: 
kvadrat(){ 
        vrh.setx1(1);
        vrh.sety1(1);
        vrh.setx2(2);
        vrh.sety2(2);
        dno.setx1(3);
        dno.sety1(3);
        dno.setx2(4);
        dno.sety2(4);
    } 
    kvadrat(prava po1, prava po2){ 
        vrh.setx1(po1.getx1());
        vrh.sety1(po1.gety1());
        vrh.setx2(po1.getx2());
        vrh.sety2(po1.gety2());
        dno.setx1(po2.getx1());
        dno.sety1(po2.gety1());
        dno.setx2(po2.getx2());
        dno.sety2(po2.gety2()); 
    }
float povrsina (){
return pow(vrh.racunajDuzinu(), 2); } 
float obim() { 
return 4*vrh.racunajDuzinu(); } 
void ispis (){ 
cout << "Povrsina=" << povrsina() << " Obim=" << obim() << endl; } };
int main() 
{ 
prava po1(0,10,10,10), po2; 
kvadrat ko1(po1, po2); 
ko1.ispis(); 
return 0; 
}