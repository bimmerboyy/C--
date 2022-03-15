#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int a, b, c, max;
    cout << "unesite koliko  ima atoma kiseonika, vodoonika i sumpora: ";
    cin >>a>>b>>c;
    max = c;
    if(b/2 < max){
        max = b/2;
    }
    if(a/4 < max){
        max = a/4;
    }
    cout << "najviše možemo imati "  << max <<" molekula  sumporne kiseline \n";
    return 0; 
}