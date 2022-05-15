#include <iostream>
using namespace std;

int nadji_najveci_zajednicki_delilac(int a, int b){
    if (a == 0)
        return b;
    return nadji_najveci_zajednicki_delilac(b % a, a);
}

int main(){
    cout << nadji_najveci_zajednicki_delilac(20, 15);
}