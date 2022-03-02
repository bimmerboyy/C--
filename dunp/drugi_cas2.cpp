//ispisati sve  brojeve blizance od 1 do N.
//blizanci su susedni neparni brojevi koji su takođe i prosti.
//za proveru da li je broj prost kreirati funkciju
#include <iostream>
using namespace std;
int provera(int broj){
    int i, zastava = 1;
    for(i=2; i<broj; i++){
        if(broj % i == 0){
            zastava = 0;
        }
    }
    return zastava;
}
int main(){
    int n, i, j;
    cout <<"unesite n";
    cin >>n;
    for(i=3; i<n-2; i+=2){
        if(provera(i) && provera(i + 2)){
            cout << "brojevi " <<i <<" i " << i+2 <<" su blizanci." <<endl;
        }
    }
}