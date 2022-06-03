#include<iostream>
#include<stdlib.h>

using namespace std;


class Niz{
    private:
    int duzinaNiza;
    int *niz;
    public:
    Niz(int duzinaNiza = 5){
        niz = new int[ duzinaNiza];
        for(int i = 0; i < duzinaNiza;i++){
            niz[i] = 0;
        }
        this->duzinaNiza = duzinaNiza;
    }

    void unosNiza(){
        niz = new int[duzinaNiza];
        cout<<"Unesite elemente niza:";
        for(int i = 0; i < duzinaNiza;i++){
            cin >> niz[i];
        }
    }
   
    friend ostream&  operator<<(ostream& COUT,Niz n1){
        COUT<<"Niz je:"<<endl;
        for(int i = 0; i < n1.duzinaNiza; i++){
            COUT<<n1.niz[i]<<" ";
        }
        COUT<<endl;
        return COUT;

    }
     ~Niz(){
        delete []niz;
        niz = nullptr;
        cout<<"Obrisao sam niz pomocu destrutor"<<endl;
    }
};

int main(){
    Niz n1;
    n1.unosNiza();
    cout <<n1;
    return 0;

}