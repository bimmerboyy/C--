#include<iostream>
using namespace std;
int main(){
    int min = 0,i,j,n;
    cout<<"Unesite n:";
    cin>>n;
    int a[n];
    for(i = 0;i < n;i++){
        cin>>a[i];
    }
    if(a[i] < min){
        min = a[i];

    }
    do{
        if(min > a[i]){
            min = a[i];
            j = i;
        }
        i = i + 1;

    }
    while(i <= n);
    return 0;
}