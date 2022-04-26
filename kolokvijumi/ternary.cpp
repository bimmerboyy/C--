#include <iostream>

using namespace std;

int main(){
    int a = 20;
    if(a == 10){
        cout << "a je jedanko 10! \n";
    }
    else {
        cout << "a nije jednako 10 \n";
    }
    //skraćeno:
    (a == 10) ?  cout << "ternary a je jednako 10\n" : cout << "ternary a je jednako 10\n"  ;
    (a == 10) &&  cout << "&& a je jednako 10\n";
    (a == 10) ||  cout << "|| a  nije jednako 10\n";
}