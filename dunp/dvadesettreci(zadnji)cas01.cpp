#include<iostream>

using namespace std;


template<typename T> T zamena(T *a, T *b){
    *a =  *a ^ *b;
    *b =  *a ^ *b;
    *a =  *a ^ *b;
    return 0;

}
template<class T1>
T1 maks(T1 a, T1 b) {
    T1 pom = a;
    if(b > pom){
        pom = b;
    }
    return pom;
}
template <class T2>
void unos(T2 a,T2 b) {
    cin >> a>>b;
}



int main(){
    int a,b;
    cout<<"Unesite a i b:";
    cin>>a>>b;
    cout<<"Zamena dva broja:"<<zamena<int>(&a,&b)<<endl;
    cout<<a<<","<<b<<endl;
    cout<<"Veci od ";

    return 0;
}

