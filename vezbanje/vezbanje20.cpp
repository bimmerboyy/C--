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
    IzvedenaKlasa(int j = 7,int i = 4) : OsnovnaKlasa(i){
        m = j;
        cout<<"Izvrsen je konstruktor IzvedenaKlasa"<<endl;
    }
    int saberi(){
        int p = m + n;
        return p;
    }
    ~IzvedenaKlasa(){
        cout<<"Izvrsen je destruktor IzvedenaKlasa"<<endl;
    }
};