/* drugicas01.cpp prebacujemo u switch naredbu*/
#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int x,y=0;
    cout << "Unesite x";
    cin >> x;
    switch(x){
        case 0:
        y = x;
        break;
        case 1:case 2:case 3:case 4:case 5:case 6:case 7:
        y=pow(x,5)/5;
        break;
        case -1:case -2:case -3:case -4:case -5:case -6:case -7:
        y=sqrt(pow(x,2)+1);
        break;
        default:
        y=0;
        break;
    }
     cout << "y = "<< y <<"\n";
    return 0;
}