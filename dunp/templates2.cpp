//realizovati funkciju koja će vratiti razumenu rednosti za 2 promeljive. nije poznato kog tipa će biti promeljive.
// ako bismo preklapali funkcije onda bismo imali 3 funkcije i to 
//za int vrednosti
//za float vrednosti
//za char vrednosti
//umesto toga iskoristićemo šablon.
#include <iostream>

using namespace std;

template <typename T>
void  unos(T niz[], int n){
    for(int i = 0; i<n; i++>){
        cin >> niz[i];
    }
}

int main(){
    int a = 5, b = 10;
    zamena (&a, &b);
    cout << a << b;
}