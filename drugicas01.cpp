/* 16.zdtk Na osnovu unete vrednosti broja x sa tastaure izracunati i ispisati vrednost Y
y=x, ako je x=0;
y=pow(x,5)/5 ako je 1<=x<=7;
y=sqrt(pow(x,2)+1) ako je -7<=x<=-1;
y=0 inace
*/
#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int x,y=0;
    cout << "Unesite x";
    cin >> x;
    if(x==0){
        y=x;
    }
   
    else if(1<=x && x<=7){
        y=pow(x,5)/5;
    }
    else if(-7<=x && x<=-1){
        y=sqrt(pow(x,2)+1);

    }
    else{
        y=0;
    }
    cout << "y = "<< y <<"\n";
    return 0;
    
}