/*Operacija dinamickog dodeljivanja memorije pomocu operacija new i delete*/
#include <iostream>
using namespace std;
int main(){
    int *p;/* automatski alociran pokazivac na int */
    p = new int; /* operacija new alocira bajtova kolika je velicina int-a i vraca adresu lokacije*/
    *p = 5;
    cout<<"Broj se nalazi na lokaciji:"<<p<<" i njegova vrednost je: "<<*p;
    return 0;
}