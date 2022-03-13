#include <iostream>

using namespace std;

int main() {

    if(2 & 1){
        cout << "da";
    }
    else{
        cout << "ne";
    }
    //
    if(2 && 1){
        cout << "da";
    }
    else{
        cout << "ne";
    }
    //
    if(1 & 1){
        cout << "da";
    }
    else{
        cout << "ne";
    }
    if(1 && 1){
        cout << "da";
    }
    else{
        cout << "ne";
    }
    return 0;
}