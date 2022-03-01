/*8.1.. Napisati program za određjivanje najmanjeg broja od n učitanih.*/
#include <iostream>
using namespace std;
int main(){
    int a,b,c,min;
    cout<<"Unesite a:";
    cin>>a;
    cout<<"Unesite b:";
    cin>>b;
    cout<<"Unesite c:";
    cin>>c;
    if(a<min){
        min=a;
    }
    else if(b<min){
        min=b;

    }
    else if(c<min){
        min=c;
    }
    cout<<"Min je:"<<min;
    return 0;

}


