/* 10:zadatak Napisati program kojim se za vrednosti -1<=x <= 1 
aproksimativnom formulom izracunava vrednost e na x 
sa gresjom aproksimacije 10 na -7*/


#include<iostream>
#include <math.h>
using namespace std;
int main(){
    float e,x;
    cout<<"Unesite x\n";
    cin >> x;
    e=pow((1+x/8+1/2*pow(x/8,2)+1/6*pow(x/3,3)+1/24*pow(x/8,4)+1/120*pow(x/8,5)),8);
    cout << "Greska je="<< e << "\n";


    return 0;

}