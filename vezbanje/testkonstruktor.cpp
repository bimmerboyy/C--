// kako ujedno pisati konstruktor sa i bez argumenata

#include<iostream>

using namespace std;

class Test{
    int x,y,z;
    public:
    Test(int x = 5,int y = 7,int z = 10){
        this->x = x;
        this->y = y;
        this->z = z;
    }
    void ispis(){
        cout<<"("<<x<<","<<y<<","<<z<<")"<<endl;
    }
};

int main(){
    Test t1;
    t1.ispis();
    return 0;
}