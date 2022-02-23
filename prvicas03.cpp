
/* Ako se molekul sumporne ksileine H2SO4 sastoji iz dva atoma vodonika,jednog atoma
sumpora i cetiri atoma kiseonika, napisati program koji odredjuje maksimalan broj molekua
sumporne kisleine koji se moze formirati od datih A atoma vodonika,B atoma sumpora
i C aoma kiseonika: (A, B i C korisni unosi sa tastaure) */
#include <iostream>
using namespace std;
int main(){
    int A,B,C,max;
    cout<< "Unesite broj atoma vodonika:";
    cin>>A;
    cout<< "Unesite broj atoma sumpora";
    cin>>B;
    cout<< "Uensite broj atoma kiseonika:";
    cin>>C;
    max = A/2;
    if(B < max)
        max = B;
    if(C/4 < max)
        max = C/4;
    cout<<"Sa unetim brojem atoma mozete formirati " <<max<<" molekula simporne kiseline\n";
    return 0; 
}