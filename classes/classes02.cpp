#include<iostream>
using namespace std;
class Klasa{
    public:
    int broj;
    string ime;
};
int main(){
    Klasa br;
    br.broj=15;
    br.ime="Tarik";
    cout<<"Broj:"<<br.broj<<endl<<"Ime:"<<br.ime;
    return 0;

}