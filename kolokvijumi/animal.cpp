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
    void setName(char i[]){
        strcpy(ime,i);
    }
    void setValue(int starost){
        this->starost = starost;
    }
    int getValue(){
        return starost;
    }
    char getName(){
        return *ime;
    }
};

class Zebra{
private:
    Animal a1;
public:
    Zebra(){
        a1.setValue(5);
        a1.setName('Zebrica');
    }
    Zebra(Animal b1){
        a1.setValue(b1.getValue());
        a1.setName(b1.getName());
    }

    void ispis_za_zebru(){
        cout<<"Zebra se zove";
        
    }
};