/*
Направите једноставну хијерархију „облика“: базна класа тзв
Облик и изведене класе под називом Круг, квадрат и троугао.
У основној класи направите виртуелну функцију која се зове драв () и замените је у изведеним класама.
Направите низ показивача на објекте Схапе које креирате на хрпи (и тако извршите упцастинг показивача),
и позовите драв () кроз показиваче основне класе, да бисте проверили понашање виртуелне функције.
Ако ваш програм за отклањање грешака то подржава, прођите кроз цод у једном кораку

*/

#include<iostream>
#include <type_traits>

using namespace std;

class Shape{
    protected:
    int brojPuta;
    int *niz;
    int duzinaNiza;
    public:
    Shape(){
        duzinaNiza = 5;
        niz = new int[duzinaNiza];
        
    }
    Shape(int n){
        niz = new int[n];
        duzinaNiza = n;
    }
    virtual void draw(){
        for(int i = 0;i < duzinaNiza;i++){
            cout<<"Nacrtao sam objekat "<<niz[i]<<" puta"<<endl;
        }
    }

};

class Circle : public Shape {
    public:
    Circle(){
        Shape();
    }
    void draw(){
        for(int i = 1;i <= duzinaNiza;i++){
            niz[i] = i;
           cout<<"Nacrtao sam objekat "<<niz[i]<<" puta"<<endl;
        }
    }

};

class Square : public Shape{
      Square(){
        Shape();
    }
    void draw(){
        for(int i = 0;i < duzinaNiza;i++){
            cout<<"Nacrtao sam objekat "<<niz[i]<<" puta"<<endl;
        }
    }

};
class Triangle : public Shape{
      Triangle(){
        Shape();
    }
    void draw(){
        for(int i = 0;i < duzinaNiza;i++){
            cout<<"Nacrtao sam objekat "<<niz[i]<<" puta"<<endl;
        }
    }

};


int main(){
    Shape s1(5);
    Circle c1;
    c1.draw();
    
    return 0;
}