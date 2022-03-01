#include<iostream>
using namespace std;
int main(){
    int broj,y;
    cout <<"Unesite broj";
    cin >>broj;
    if(broj>=0){
        y=broj;
    }
    else{
        y=-broj;
    }
    cout<<"Apsolutna vrednost broja je:"<<y;
    return 0;
}