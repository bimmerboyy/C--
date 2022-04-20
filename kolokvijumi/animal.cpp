/*Напиши пробрам са животињом из разреда мајке. Унутар њега дефинишете име и променљиве старости
, и функцију сет_валуе(). Затим креирајте две основне варијабле 
Зебра и Долпхин које пишу поруку која говори о узрасту, имену и дајући неке додатне 
информације (нпр. место порекла).
*/

#include<iostream>
#include<string.h>
using namespace std;

class Animal{
private:
    char ime[20];
    int starost;
public:
    Animal(char ime[],int s){
        strcpy(this->ime,ime);
        starost = s;
    }
    void setValue(char i[]){
        strcpy(ime,i);
    }
    void setValue(int starost){
        this->starost = starost;
    }
};

class Zebra{
    Animal a1;
    void ispis_za_zebru(){
        cout<<"Zebra se zove";
        a1.setValue();
    }
};