#include<iostream>
#include<string>
using namespace std;
class FastandFurious{
    public:
    void speed(int x);
};
void FastandFurious::speed(int x){
    int i;
    string high = "High speed";
    string low = "Low speed";
    x = 200;
    for(i = 0;i < x;i++){
        if(x >= 150){
            cout<<high;
        }
        if(x <= 50){
            cout<<low;
        }
    }
};
int main(){
    FastandFurious car;
    car.speed(130);
}