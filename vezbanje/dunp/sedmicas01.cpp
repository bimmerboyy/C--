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
        void inacijalizacija(float a, float b); // prototipi metoda
        void tarnslacija(float dx,float dy);
        void pozicija();

    };
   void Tacka::inacijalizacija(float a, float b){
       x = a;
       y = b;
   }
   void Tacka::tarnslacija(float dx,float dy){
       x += dx;
       y += dy;
   }
   void Tacka::pozicija(){
       cout<<"Tacka se nalazi na poziciji("<<x<<","<<y<<")\n";
   }
int main(){
    Tacka t1,t2;
    t1.inacijalizacija(2, 3);
    t1.inacijalizacija(1, -5);
    t2.tarnslacija(1, 1);
    t2.tarnslacija(-5, 4);
    t2.tarnslacija(3, 1);
    t1.pozicija();
    t2.pozicija();
         return 0;


   
} 