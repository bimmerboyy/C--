#include<iostream>
using namespace std;
int main(){
    int i,j,n;
    cout<<"Unesite n:";
    cin>>n;
    for(i = 0;i < n;i++){
        for(j = 0;j < n;j++){

        }
    }
    cout<<"i ="<<i<<" "<<"j ="<<j<<endl;
    if(i < j){
        i = i ^ j;
        j = i ^ j;
        i = i ^ j;
    }
    cout<<"i = "<<i<<" "<<"j ="<<j;
    return 0;
    // Imamo 5 instrukcija
}