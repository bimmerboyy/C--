#include <iostream>

using namespace std;

class Vektor{
    private:
    int x;
    int y;
    int z;
    public:
    Vektor(){
        x = 0;
        y = 0;
        z = 0;
    }
    Vektor(int x, int y, int z){
        this->x = x;
        this->y = y;
        this->z = z;
    }
    Vektor operator + (const Vektor &desni){
        Vektor novi = desni;
        Vektor levi = *this;
        novi.x +=  levi.x;
        novi.y +=  levi.y;
        novi.z +=  levi.z;
        return novi;
    }
    // Vektor operator+ (Vektor desni){ //safetov način
    //     Vektor levi = *this;
    //     levi.x += desni.x;
    //     levi.y += desni.y;
    //     levi.z += desni.z;
    //     return levi; 
    // }
    Vektor operator *(int s){
        vektor levi = *this;
        levi.x *= s;
        levi.y *= s;
        levi.z *= s;
        return levi;
    }
    void ispis(){
        cout << "(" << x << "," << y << "," << z <<")";
    }
};

int main(){
    Vektor v1(1,2,3);
    Vektor v2(3,4,5);
    Vektor v3 = v1 + v2; 
    v1.ispis();
    v2.ispis();
    v3.ispis();
    return 0;
}