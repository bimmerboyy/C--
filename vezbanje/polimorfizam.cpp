#include <iostream>
#include <string>

using namespace std;

class Zivotinja{
    public:
    string ime;
    int godine;
    Zivotinja(){};
    Zivotinja(string ime, int godine){
        this->ime = ime;
        this ->godine = godine;
    }
    virtual void oglasi_se(){
        cout << "(podrazumevani zvuk neke životinje)";
    }
};

class Pas : public Zivotinja {
    public:
    string rasa;
    bool zivi_u_kuci;
    Pas(string ime, int godine, string rasa, bool zivi_u_kuci){
        Zivotinja(ime, godine);
        this->rasa = rasa;
        this->zivi_u_kuci = zivi_u_kuci;
    }
    void oglasi_se(){
        cout << "Aw, aw";
    }
};

class Vuk : public Zivotinja {
    public:
    bool is_alpha;
    Vuk(string ime, int godine, bool is_alpha){
        Zivotinja(ime, godine);
        this->is_alpha = is_alpha;
    }
    void oglasi_se(){
        cout << "AUUUUUUUUUUUUUUUUUUUUUUUUUU";
    }
};

class Macka : public Zivotinja {
    public: 
    bool sterilisana;
    Macka(string ime, int godine, bool sterilisana){
        Zivotinja(ime, godine);
        this->sterilisana = sterilisana;
    }
};

int main(){
    Vuk v1("Nikola", 19, true);
    Vuk v2("Ermin", 19, false);
    Pas p1("Pućko", 10, "lovački", false);
    Zivotinja z1("Rumenka", 10);
    Macka m1("gafild", 5, false);
    v1.oglasi_se();
    v2.oglasi_se();
    p1.oglasi_se();
    z1.oglasi_se();
    m1.oglasi_se();
}