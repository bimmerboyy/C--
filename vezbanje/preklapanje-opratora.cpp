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
    friend Vektor vektorski_proizvod(Vektor v1, Vektor v2){
        int a = v1.x;
        int b = v1.y;
        int c = v1.z;
        int d = v2.x;
        int e = v2.y;
        int f = v2.z;
        int i = b * f - c * e;
        int j = c * d - a * f;
        int k = a * e - b * d;
        Vektor proizvod(i, j, k);
        return proizvod;
    }
    // Vektor operator ++(int){
    //     Vektor novi = *this;
    //     novi.x++;
    //     novi.y++;
    //     novi.z++;
    //     return novi; // return nema poentu jer svejendo  menja x, y, z
    // }
    friend ostream&  operator<<(ostream& COUT,Vektor& v1){
        COUT<< "(" << v1.x << "," << v1.y << "," << v1.z <<")" << endl;
        return COUT;
    }
    friend int mesoviti_proizvod(Vektor v1, Vektor v2, Vektor v3){
        int s = 0;
        int a1 = v1.x;
        int a2 = v1.y;
        int a3 = v1.z;
        int b1 = v2.x;
        int b2 = v2.y;
        int b3 = v2.z;
        int c1 = v3.x;
        int c2 = v3.y;
        int c3 = v3.z;
        s += a1 * b2 * c3;
        s += a2 * b3 * c1;
        s += a3 * b1 * c2;
        s -= c1 * b2 * a3;
        s -= c2 * b3 * a1;
        s -= c3 * b1 * a2;
        return s;
    }
    void ispis(){
        cout << "(" << x << "," << y << "," << z <<")" << endl;
    }
};


 

int main(){
    Vektor v1(1,5,3);
    Vektor v2(3,4,12);
    Vektor v3(1,2,0); 
    v1.ispis();
    v2.ispis();
    v3.ispis();
    // //cout << v1 * v2;
    // v1++;
    // Vektor v4 = -v1;
    // v1.ispis();
    // v4.ispis();
    // cout << v1[0];
    // cout << v1;
    // Vektor v5 = vektorski_proizvod(v1, v2);
    // v5.ispis();
    int proizvod = mesoviti_proizvod(v1,v2,v3);
    cout << proizvod;
    return 0;
}