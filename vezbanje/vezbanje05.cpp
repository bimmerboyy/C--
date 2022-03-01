/*8.1..Izračunati sumu prirodnih brojeva u intervalu od k do n koji su deljivi sa a.*/

#include <iostream>
using namespace std;
int main(){
    int a,k,n,i,s=0;
    cout<<"Unesite k,n,a";
    cin>>k>>n>>a;
    for(i=k;i<n;i++){
        if(i % a == 0){
            s+=i;
            
        }
    }
    cout<<"Suma je="<<s<<endl;
    return 0;
}

