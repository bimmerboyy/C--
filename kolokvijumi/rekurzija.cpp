#include<iostream>

int fakt(int x){
    if(x > 1){
        return x * fakt(x-1);
    }
    return x;
}

int main(){
    std::cout<<fakt(5);
    return 0;
}
