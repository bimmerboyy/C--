#include <iostream>

using namespace std;

template<typename T>

T max_t(T a, T b) {
    return a > b ? a : b;
}

int main(){
    cout << max_t('a', 'b') << endl;
    cout << max_t(1, 2) << endl;
    cout << max_t(0.1, 2.1) << endl;
}