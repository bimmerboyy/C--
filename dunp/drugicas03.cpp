#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int a, b;
    char c;
    cout << "Unesite a i b";
    cin  >>a>>b;
    cout << "Unesite operaciju";
    cin >>c;
    switch(c){
        case '+':
        cout<< a+b;
        break;
        case '-':
        cout<< a-b;
        break;
        case '*':
        cout<< a*b;
        break;
        case '/':
        if(b!=0){
            cout<< a/b;
        }
        else{
            cout << "nije dozvoljeno deljenje nulom";
        }
        break;
        case '%':
        if(b!=0){
            cout<< a%b;
        }
        else{
            cout << "nije dozvoljeno deljenje nulom";
        }
        break;
    }
    return 0; 
}