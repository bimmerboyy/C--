#include<iostream>

using namespace std;


class OsnovnaKlasa{
    protected:
    int n;
    public:
    OsnovnaKlasa(int i = 0);
    ~OsnovnaKlasa();
    virtual void ispis(){
        cout<<"Broj iz osnovne klase je:"<<n<<endl;
    }

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
    void ispis(){
        cout<<"Zbir dva broja je:"<<saberi()<<endl;
    }

};

int main(){
    OsnovnaKlasa o1;
    IzvedenaKlasa i1;
    o1.ispis();
    cout<<endl;
    i1.ispis();
    
    return 0;
}