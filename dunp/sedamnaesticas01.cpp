
/* PRAVI GRESKE

#include<iostream>
using namespace std;

//Preklapanje operatora
//Primer 1

class Vektor{
    int v[3];
public:
    Vektor(int niz[]){
        for(int i = 0;i < 3;i++){
            v[i]= niz[i];
        }
    }
    void setX(int value){ v[0] = value;}
    void setY(int value){ v[1] = value;}
    void setZ(int value){ v[2] = value;}
    int getX(){ return v[0];}
    int getY(){ return v[1];}
    int getZ(){ return v[2];}
    //Vektor vnew = v1.dodaj(v2);

    Vektor dodaj(Vektor v2){
        Vektor vnew({v[0]+v2.getX()}, v[1]+v2.getY(), v[2]+v2.getZ());
        return vnew;
        //Vektor vnew({ v[0] + v2.getX()},v[1] + v2.getY(),v[2] + v2.getZ());
        //return vnew;
    }
    Vektor operator +(Vektor v2){
        Vektor vnew({v[0]+v2.getX()}, v[1]+v2.getY(), v[2]+v2.getZ());
        return vnew;
        //Vektor vnew({ v[0] + v2.getX(),v[1] + v2.getY(),v[2] + v2.getZ(),});
        //return vnew;
    }
    Vektor operator *(int k){
        Vektor vnew = *this;
        for(int i = 0;i < 3;i++){
            vnew.v[i] *= k;
        }
        return vnew;
    }
    // v1 = v2 + v3
    // v2 = [1,2,3]
    // v3 = [5,4,3]
    // v1 = v2 + v3
    // v1 = [6,6,6]
    // v2 = [6,6,6]
    // v1 = v2 
    // v1 = v1
    Vektor& operator =(Vektor& v2){
        if(&v2 == this){
            return *this;
        }
        for(int i = 0;i < 3;i++){
            v[i] = v2.v[i];
            return *this;
        }
    }
    Vektor operator++(){
        for(int i = 0;i < 3;i++){
            v[i]++;
            return *this;
        }
    }
    Vektor operator -(){
        for(int i = 0;i < 3;i++){
            v[i] *= -1;
            return *this;
        }
    }
    int operator [](int i){
        if(i > 2){
            return 0;
        }
        return v[i];
    }
    void ispis(){
        cout<<"("<<v[0]<<","<<v[1]<<","<<v[2]<<")"<<endl;
    }
};
// vektro v = 1,2,3
// v*3 -> 3,6,9



int main(){
    Vektor v1(1,2,3),v2(5,4,3);
    //v1.v[0] -> v1[0];
    Vektor v3 = v1.dodaj(v2);
    Vektor v4 = v1 + v2; 
    v1.ispis(),v2.ispis(),v3.ispis(),v4.ispis();
    v1++;
    v1.ispis();
    Vektor v5 = -v1;
    v5.ispis();
    //Vektor v6 = 
    return 0;
}
*/