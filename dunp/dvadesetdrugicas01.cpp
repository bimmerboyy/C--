#include<iostream>

using namespace std;

// class Proizvod{
//     void ispisProzvoda(){}
// };
// class Prodavnica{
//     void ispis(){}
// };


class Oblik{
    virtual float povrsina() = 0;
};
class Trougao : Oblik{
    float povrsina(){return a*b/2;}
};

int main(){
    return 0;
}