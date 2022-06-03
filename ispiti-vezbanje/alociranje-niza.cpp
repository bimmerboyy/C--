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
            
        }
        this->duzinaNiza = duzinaNiza;
    }
};

int main(){
    return 0;

}