/* Keirati dve tacke Tacka2d I Tacka3d.
Tcka 2d
-atributi (x,y)
-Metode:konsturktor bez argumenata,konstruktor sa argumentima,translacija,pozicija,destruktor
_Tacka3d
-atributi(x,y,z)
-Metode:kosntruktor bez ag+rgumenata,konstrukor sa argumentiam,translacija +,pozicija,destruktro
*/
#include<iostream>
#include<string.h>
using namespace std;

class Tacka2d{
    private:
    float x,y;
    public:
    Tacka2d(){
        x = 5;
        y = 11.6; //Konstruktor bez argumenata
    }
    Tacka2d(float a,float b){
        x = a; //kosntruktor sa argumentima
        y = b;
    
    }
    void translacija(float dx,float dy){
        y += dy;
        x += dx;
    }
    void pozicija(){
        cout << "Tacka se nalazi na poziciji ("<<x<<","<<y<<")"<<endl;
        cout<<"Objekat se nalazi na adresi"<<this<<endl;
    }
     ~Tacka2d(){
         cout<<"Pozvao se destruktor klase Tacka2d"<<endl;
     }
};
class Tacka3d{
    private:
    float x,y,z;
    public:
    Tacka3d(){
        cout<<"Pozvan je konstruktor bez argumenata klase tacka3d"<<endl;
        x = 5;
        y = 11.6;
        z = -1.89;

    }
    Tacka3d(float a,float b,float c){
         cout<<"Pozvan je konstruktor sa argumenata klase tacka3d"<<endl;
        x = a;
        y = b;
        z = c;
    }
    void translacija(float dx,float dy,float dz){
        x += dx;
        y += dy;
        z += dz;
    }
    void pozicija(){
        cout << "Tacka se nalazi na poziciji ("<<x<<","<<y<<","<<z<<")"<<endl;
        cout<<"Objekat se nalazi na adresi"<<this<<endl;
    }
    ~Tacka3d(){
         cout<<"Pozvao se destruktor klase Tacka3d"<<endl;
    }

};
int main(){
    Tacka2d t1,t2(1,1);
    Tacka3d t3(9,6,-7),t4;
    t1.pozicija();
    t2.translacija(1,1);
    t2.pozicija();
    t3.translacija(1,1,1);
    t3.pozicija();
    t4.pozicija();
    return 0;
}