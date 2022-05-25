#include<iostream>

using namespace std;


template<typename T> T zamena(T *a, T *b){
    *a =  *a ^ *b;
    *b =  *a ^ *b;
    *a =  *a ^ *b;
    return 0;

}


int main(){
    int a,b;
    cout<<"Unesite a i b:";
    cin>>a>>b;
    cout<<"Zamena dva broja:"<<zamena<int>(&a,&b)<<endl;
    cout<<a<<","<<b<<endl;

    return 0;
}

