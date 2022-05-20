#include<iostream>

using namespace std;


class OsnovnaKlasa{
    protected:
    int n;
    public:
    OsnovnaKlasa(int i = 0);
    ~OsnovnaKlasa();

};

OsnovnaKlasa::OsnovnaKlasa(int i) : n(i){
    n = i;    
    cout<<"Izvrsen je konstruktor OsnovnaKlase"<<endl;

}
OsnovnaKlasa:: ~OsnovnaKlasa(){
    cout<<"Izvrsen je destruktor OsnovneKlase"<<endl;
}

class IzvedenaKlasa : public OsnovnaKlasa{
    protected:
    int m;
    public:
    IzvedenaKlasa(int j = 7){
        m = j;
        cout<<"Izvrsen je konstruktor IzvedenaKlasa"<<endl;
    }
};