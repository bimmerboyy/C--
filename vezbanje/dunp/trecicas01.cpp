#include<iostream>
using namespace std;
int main(){
    int N,i;
    cout<<"Unsiet n:\n";
    cin>>N;
    int bb = 0, bc = 0;
    for(i=0;i<=N;i++){
        cout<< "Unsite koordinate"<<i<<". tacke\n";
        float x,y;
        cin>>x>>y;
        if(
            (x < 0 || x > 30 || y < 0 || y > 20)
            ||
            (x >= 0.5 && x <= 21.6 && y >=8.1 && y <= 12)
            ||
            (x >= 13.1 && x <= 17.2 && y >=3.5&& y <= 16.5)
          )
          {
              bb++;

        }
        else
            bb++;
    }       
    cout<<"Broj tacaka u beloj obalsti je"<<bb<<"\n";
    cout<<"Broj tacaka u crvenoj obalsti je"<<bc<<"\n";
    return 0;
}