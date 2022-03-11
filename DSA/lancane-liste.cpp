#include  <iostream>

using namespace std;

typedef struct lancanaLista {
    int v;
    lancanaLista* next ;
}LANCANALISTA;



int main(){
    LANCANALISTA * first = NULL;
    first = (LANCANALISTA*) malloc(sizeof(LANCANALISTA));
    first->v  = 1;
    first->next = NULL;

    //doda se još 1 element
    first->next = (LANCANALISTA*) malloc(sizeof(LANCANALISTA));
    first->next->v = 2;
    first->next->next = NULL;
    return 0;

}