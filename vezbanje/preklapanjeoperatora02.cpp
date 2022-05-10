#include<iostream>

using namespace std;

/* Reailzovati klasu Vektor koja ima privatni atribut niz od 3 elementa i metode:
Konstruktor sa argumentom (argument je niz celih brojeva), set i get metode za x,y,z 
odnosno za elemente niza (za svaki element posebno), ispis() – metoda koja ispisuje x,y i z
odnosno elemente niza, Vektor dodaj(Vektor v) – metoda koja na trenutni vektor dodaje Vektor koji dolazi
kao argument (Vektor v), preklopiti operatore +, *(skalarom), =, ++ prefiksni,++(int) postfiksni operator, -,
operator indeksiranja [], metode Vektor pomnozi(int k) koja je ekvivalentna operatoru * skalarom.*/

class Vektor{
    private:
    int niz[3];
    public:
    Vektor(int n[]){
        for (int i = 0;i < 3;i++){
            niz[i] = n[i];
        }
    }
    Vektor(int x,int y,int z){
        niz[0] = x;
        niz[1] = y;
        niz[2] = z;
    }
    void setX(int x){
        niz[0] = x;
    }
    void setY(int y){
        niz[1] = y;
    }
    void setZ(int z){
        niz[2] = z;
    }
    void ispis(){
        for(int i = 0;i < 3;i++){
            cout<<niz[i];
        }
    }
    int getX(){
        return niz[0];
    }
    int getY(){
        return niz[1];
    }
    int getZ(){
        return niz[2];
    }
    Vektor dodaj(Vektor v1){
        // int newX,newY,newZ;
        // newX = this->x + v1.getX();
    }
    Vektor operator+(Vektor v1){
        Vektor vnew = ({niz[0] + v1.getX()},{niz[1] + v1.getY()},{niz[2] + v1.getZ()});
        return vnew;

    }
    Vektor operator*(int k){
        Vektor vnew = *this;
        for(int i = 0;i < 3;i++){
            vnew.niz[i] *= k;
        }
        return vnew;
    }
    Vektor& operator=(Vektor& v1){
        if(&v1 == this){
            return *this;
        }
        for(int i = 0;i < 3;i++){
            niz[i] = v1.niz[i];
        }
        return *this;
    }
    Vektor operator++(){
        for(int i = 0;i < 3;i++){
            niz[i]++;   
        }
        return *this;
    } 
      Vektor operator++(int){
        for(int i = 0;i < 3;i++){
            niz[i]++;   
        }
        return *this;
    }
    Vektor operator-(){
        for(int i = 0;i < 3;i++){
            niz[i] - niz[i];    
        }
        return *this;
    }
    int& operator [](int i){
        if(i > 2){
            return niz[0];
        }
        return niz[i];
    } 
};