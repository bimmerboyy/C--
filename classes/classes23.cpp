/*Realizovati klase Prava i Kvadrat. 
Klasa Prava ima atribute x1,y1,x2,y2,d. 
Metode: Konstruktor sa i bez argumenata, 
set i get metode, 
metoda racunajDuzinu() i metodu ispis(). 
Kvadrat ima atribute:Prava vrh,Prava dno 
Metode:Konstruktor sa i bez argumenata, povrsina(),obim() i ispis().
*/

#include<iostream>
using namespace std;

class Prava{
private:
    float x1,y1,x2,y2;
    float d;
    public:
    Prava(){
        x1 = 1;
        y1 = 1;
        x2 = 3;
        y2 = 1;
    }
    Prava(float x1,float y1,float x2,float y2){
        this->x1=x1;
        this->y1=y1;
        this->x2=x2;
        this->y2=y2;
    }
    void setX1(float x1){
        this->x1 = x1;
    }
    void setY1(float y1){
        this->y1 = y1;
    }
    void setX2(float x2){
        this->x2 = x2;
    }
    void setY2(float y2){
        this->y2 = y2;
    }
    float getX1(){
        return x1;
    }
    float getY1(){
        return y1;
    }
    float getX2(){
        return x2;
    }
    float getY2(){
        return y2;
    }

};