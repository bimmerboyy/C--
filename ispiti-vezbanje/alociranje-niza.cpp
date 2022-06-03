#include<iostream>
#include<stdlib.h>

using namespace std;


class Array{
    private:
    int duzinaNiza;
    int *niz;
    public:
    Array(int duzinaNiza = 5){
        niz = new int[ duzinaNiza];
        for(int i = 0; i < duzinaNiza;i++){
            niz[i] = 0;
        }
        this->duzinaNiza = duzinaNiza;
    }
    ~Array(){
        delete []niz;
        niz = nullptr;
    }
};

int main(){
    return 0;

}