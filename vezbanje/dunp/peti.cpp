#include <iostream>
#include <math.h>
using namespace std;
int main(){
    float x, y;
    cout << "Unesite x";
    cin  <<x;
    if(x==0)
        y=x;
    else if(x>=1 && x<=7)
        y=pow(x,5) / 5;
    else if(x>=-7 && x<= -1)
        y = sqrt(pow(x, 5)+ 1)
    else
        y = 0;
    return 0; 
}