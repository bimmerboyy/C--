/*kreirati dve kklase tačka2d i tačka 3d,
############tačka 2d:
atributui x,y
medotede: konstrukor bez argumenata, konsturktor sa argumentima, 
translacija, pozicija, destruktor
#########tačka3d:
atributi (x,y, z);
medode: konstruktor bez argumenata, konstruktor sa argumentima,
transflacija, pozicija, destruktor
*/
#include<iostream>
#include<string.h>
using namespace std;

class Tacka2d{
    private:
    int x,y;
    public:
    Tacka2d(){
        x = 5;
        y = 3; // Default
    }
    Tacka2d(int a,int b){
        x = a;
        y = b;
    }
    void translacija(int dx,int dy){
        x += dx;
        y += dy;
    }
    void pozicija(){
        cout<<"Pozicija x:"<<x<<endl;
        cout<<"Pozicija y:"<<y<<endl;
        
    }
    ~Tacka2d(){
        cout<<"Pozvao se destruktor za klasu Tacka2d"<<endl;
    }

};
class Tacka3d{
    private:
    int x,y,z;
    public:
    Tacka3d(){
        x = 7;
        y = 10;
    }
    Tacka3d(int a,int b){
        x = a;
        y = b;
    }
    void translacija(int dx,int dy,int dz){
        x += dx;
        y += dy;
        z += dz;
    }
    void pozicija(){
        cout<<"Pozicija tacke x:";
        cout<<"Pozcija tacke y:";
    }
    ~Tacka3d(){
        cout<<"Pozvao se destruktor za kalsu Tacka3d"<<endl;
    }

};
int main(){
    Tacka2d t1;
    Tacka3d t2;
    t1.translacija(3,4);
    t1.pozicija();
    t1.translacija(7,9);
    t1.pozicija();

}