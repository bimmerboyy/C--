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
#include <iostream>
#include <string.h>
#include <stdlib.h>

using namespace std;

class Tacka2d{
    private:
        float x, y;
    public:
        Tacka2d(){
            cout << "pozvan je konstruktor bez argumenata tačke2d"<<endl;
            x = 0;
            y = 0;
        }
        Tacka2d(float pX, float pY){
            cout << "pozvan je konstruktor sa argumentima tačke2d"<<endl;
            x = pX;
            y = pY;
        }
        void translacija (float pomerajX, float pomerajY){
            x += pomerajX;
            y += pomerajY;
        }
        void pozicija(){
            cout << "tačka se nalazi na:  x: " << x << " y: " << y << endl;
            cout << "objekat se nalazi na adresi: "  << this << endl;
        }
        ~Tacka2d(){
            cout <<"pozvao se destruktor klase 2d" << endl;
        }
};

class Tacka3d{
    public:
        float x, y, z;
        Tacka3d(){
            cout << "pozvan je konstruktor bez argumenata tačke3d" << endl;

            x = 0;
            y = 0;
            z = 0;
        }
        Tacka3d(float pX, float pY, float pZ){
            cout << "pozvan je konstruktor sa argumentima tačke3d"<<endl;
            x = pX;
            y = pY;
            z = pZ;
        }
        void translacija (float pomerajX, float pomerajY, float pomerajZ){
            x += pomerajX;
            y += pomerajY;
            z += pomerajZ;
        }
        void pozicija(){
            cout << "tačka se nalazi na:  x: " << x << " y: " << y << " Z: " << z<<endl;
            cout << "objekat se nalazi na adresi: "  << this << endl;

        } 
        ~Tacka3d(){
            cout << "pozvao se destruktor klase 3d " << endl;
        }
};

int main(){
    Tacka2d t1, t2(1,1);
    Tacka3d t3(9,5,-7), t4;
    t1.pozicija();
    t2.translacija(1,1);
    t2.pozicija();

    t3.translacija(1, 1,1);
    t3.pozicija();
    t4.pozicija();
    return 0;
}