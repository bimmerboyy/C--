#include <iostream>

using namespace std;

template<typename T>

void zamena(T* a, T* b) {
    *a = *a ^ *b;
    *b = *a ^ *b;
    *a = *a ^ *b;
}

int main(){
    int a = 5, b = 10;
    zamena(&a, &b);
    cout << a << " " << b << endl;
}