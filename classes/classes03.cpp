#include<iostream>
using namespace std;
class kvadrat{
    public:
    int stranica_a;
    int opseg;
    void izracunaj_opseg(){
        opseg=stranica_a*4;
    }
};
int main(){
    system("clear");
    kvadrat novi;
    cout<<"Unesite stranicu kvadrata:";
    cin>>novi.stranica_a;
    novi.izracunaj_opseg();
    cout<<"Opseg = "<<novi.opseg<<endl;
}