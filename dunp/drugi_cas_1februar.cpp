#include <iostream>

using namespace std;

int main(){
    int N, i;
    cout << "Unesite N\n";
    cin >>N;
    int bb = 0, bc = 0;
    for(i=0; i<N; i++){
        cout <<"Unesite kooordinate" <<i+1<<". tačke \n";
        float x, y;
        cin >>x >>y;
        if( (x<0 || x > 30 || y <0 || y > 30 )
        ||
        (x>=8.5  && x<=21.6 && y>=8.1 && y<=12)
        ||
        (x>=13.1  && x<=17.2 && y>=3.5 && y<=16.5)
        ){
            bb++;
        }
        else{
            bc++;
        }
    }
    cout <<"broja tačaka u beloj oblasti je" << bb <<"\n";
    cout <<"broja tačaka u crvenoj oblasti je" << bc <<"\n";
        
}