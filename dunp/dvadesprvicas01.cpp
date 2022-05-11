//klasa tačka ima zasticene atribute x i y, z metode konstrukor sa argumentima, konstruktor  bez argumenata, ispis,
/* klasa kvadrati ima atribude abcd, koji su tipa tačka. metode konstrukor sa i bez argumenata, ispis, stranica  - metode  koja računa stranicu, 
dijagonala - metoda koja računa dijagonalu.
klasa piramida nasleđuje klasu tačka i kvadrat, i oddaje atribudt visina, visina se računa na onsnovu prethodnih klasa. metode konstrukor 
sa i bez argumentata, ispis, površina.*/


#include<iostream>
#include<cmath>
#include<math.h>

using namespace std;

class Tacka{
    protected:
    int x;
    int y;
    int z;
    public:
    Tacka(){
        x = 2;
        y = 2;
        z = 5;
    }
    Tacka(int x,int y,int z){
        this->x = x;
        this->y = y;
        this->z = z;
    }
    Tacka operator=(Tacka t){
        if(&t == this){
            return *this;
        }
        x = t.x;
        y = t.y;
        z = t.z;
        return *this;
    }
    int getZ(){
        return z;
    }
    int getX(){
        return x;
    }
    int getY(){
        return y;
    }
  
    void ispis(){
        cout<<"Tacka ima koordinate"<<"("<<x<<","<<y<<","<<z<<") "<<endl;
    }

};
  

class Kvadrat{
    protected:
    Tacka a;
    Tacka b;
    Tacka c;
    Tacka d;
    public:
    Kvadrat(){
        a = Tacka(1,1,0);
        b = Tacka(3,1,0);
        c = Tacka(3,3,0);
        d = Tacka(1,3,0);
        
        
    }
    Kvadrat(Tacka a1,Tacka b1,Tacka c1,Tacka d1){
        a = a1;
        b = b1;
        c = c1;
        d = d1;
    }

    // 
    float izracunajStranicu(){
        return sqrt(pow(a.getX() - b.getX()),2) + sqrt(pow(a.getY() - b.getY()),2) + sqrt(pow(a.getZ() - b.getZ()),2);
    }
    float izracunajDijagonalu(){
        float d = sqr(pow(2*(izracunajStranicu(),2));
        return d;
    }

    
};

class Piramida: Tacka,Kvadrat{
    public:
    float visina;
    public:
    Piramida(){
        Tacka sredina((b.getX() - a.getX())/2,(d.getY()) - a.getY())/2,(c.getZ() - a.getZ())/2);
        visina = this->z - sredina.getZ();
    }
    float Povrsina(){
        Tacka sredinaStranice((b.getX() - a.getX())/2,(d.getY() - a.getY())/2,(c.getZ() - a.getZ())/2);
        float h = sqrt(pow(x - sredinaStranice.getX(),2) + pow((y - sredinaStranice.getY()),2) + pow((z - sredinaStranice.getZ()),2));
        float B = pow(izracunajStranicu(),2);
        float M = 4*(((izracunajStranicu()*h)/2));
        return B * M;

    }
};

int main(){
    Piramida p;
    cout<<"Povrsina piramide iznosi "<<p.Povrsina()<<endl;

    return 0;
}