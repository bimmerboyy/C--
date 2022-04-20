/*#include <iostream>

class X{
    friend void g(int, x&);
    friend void Y::h();
    int i;
    public:
    void f(int ip) {
        i =ip;
    }
};
void g(int k, x &x){
    x.i = k;
}
void main(){
    x x;
    x.f(5);
    g(6,x);
}
*/