/* realizovati kalsu Tacka sa privatnim atributima x i y.metode inacijalizacije(a,b)koja 
predtavlja verdonst atributa na vrednosti koje dolazi kao argumeni,translacija(int dx,int dy)
koja translira tacku za vrednosti dx po x,odnosno dy po y osi;
pozicija() isipisuje ternutnu poziciju tacke u koordinantnom sistemu (njene x i y koordinate)
*/
#include <iostream>
using namespace std;
class Tacka{
    private:
    float x,y;
    public:
    void inicijalizacija(float a,float b){
         x = a;
         y = b;
    }
    void translacija(float dx,float dy){
         x += dx;
         y += dy;

    }
   void pozicija();

};
void Tacka::pozicija(){
    cout<<"Tacka x se nalazi na poziciji "<<x<<endl<<"Tacka y se nalazi na poziciji "<<y<<endl;
}
int main(){
    system("clear");
    Tacka t,z;
    t.inicijalizacija(2,3);
    t.translacija(3, 3);
    t.pozicija();
    z.inicijalizacija(6,7);
    z.translacija(5,5);
    z.pozicija();
    return 0;
}

