/*U sledećem primeru se kreira klasa Pravougaonik. Ova klasa poseduje konstruktore, atribute,
propertije i javne metode za računanje obima i površine. Iz ove klase je primenom nasleđivanja izvedena
klasa Kvadrat. Prilikom nasleđivanja se ne nasleđuju konstruktori, pa klasa Kvadrat mora da
implementira svoje sopstvene konstruktore. Ostali elementi se nasleđuju. Na kraju se iz main metode
kreiraju objekti za kreirane klase i nad njima se pozivaju metode kako bi se dobio željeni ispis. */

#include<iostream>

using namespace std;

class Pravougaonik{
    protected:
    int a;
    int b;
    public:
    Pravougaonik(int a = 7, int b = 10){
        this->a = a;
        this->b = b;
    }
    int Obim(){
        int o;
        o = 2*a + 2*b;
        return o;
    }

};

int main(){

    return 0;
}