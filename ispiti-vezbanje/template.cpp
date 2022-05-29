#include <iostream>

using namespace std;

//create templete for max char, int and float 
template <class T>
T max(T a, T b) {
    return a > b ? a : b;
}
//test this in main function
int main() {
    cout << max(5, 10) << endl;
    cout << max(5.5, 10.5) << endl;
    cout << max('a', 'b') << endl;
    return 0;
}