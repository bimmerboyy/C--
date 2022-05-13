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
    //množenje vektora skalarom
    Vektor operator *(int s){
        Vektor levi = *this;
        levi.x *= s;
        levi.y *= s;
        levi.z *= s;
        return levi;
    }
    //skalarni proizvod  dva vektora
    float operator *(Vektor desni){
        Vektor levi = *this;
        float s = 0;
        s += levi.x * desni.x;
        s += levi.y * desni.y;
        s += levi.z * desni.z;
        return s;
    }
    void operator ++(int){
        x++;
        y++;
        z++;
    }
    void operator ++(){
        x++;
        y++;
        z++;
    }
    void operator --(int){
        x--;
        y--;
        z--;
    }
    void operator --(){
        x--;
        y--;
        z--;
    }
    Vektor operator -(){
        Vektor novi = *this;
        novi.x *= -1;
        novi.y *= -1;
        novi.z *= -1;
        return novi;
    }
    int & operator [](int i){
        if(i==0){
            return x;
        }
        if(i==1) return y;
        return z;
    }
    // Vektor operator ++(int){
    //     Vektor novi = *this;
    //     novi.x++;
    //     novi.y++;
    //     novi.z++;
    //     return novi; // return nema poentu jer svejendo  menja x, y, z
    // }
    void ispis(){
        cout << "(" << x << "," << y << "," << z <<")" << endl;
    }
    ostream& operator<<(ostream& os){
        os << x << '/' << y << '/' << z;
        return os;
    }
};


int main(){
    Vektor v1(1,2,3);
    Vektor v2(3,4,5);
    Vektor v3 = v1 + v2; ;
    //cout << v1 * v2;
    v1++;
    Vektor v4 = -v1;
    v1.ispis();
    v4.ispis();
    cout << v1[0];
    cout << v1;
    return 0;
}