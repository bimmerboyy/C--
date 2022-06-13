#include<iostream>

using namespace std;

/*Tacka u ravni zadaje se kvadratnom (1 kvadrant,2 kvadrant,3 kvadrant ili 4 kvadrant), i realnim koordinatama x i y 
podrazumevano(0,0) koje mogu da se dohvate.Kvadranti sluze da bi se izvrsila provera da li koordinate tacke ispravno unete.
Tacka moze da se upise u izlazini tok (cout<<tacka) u obliku (x,y)
*/

class Tacka{
    private:
    int x;
    int y;
    public:
    Tacka(int x,int y){
        this->x = x;
        this->y = y;
    }
    bool daLiSeNalazi(){
        if(x > 0 && y > 0){
            cout<<"Tacka"<<"("<<x<<","<<y<<")"<<", nalazi se u prvom kvadrantu"<<endl;
        }
        else if(x < 0 && y > 0){
            cout<<"Tacka"<<"("<<x<<","<<y<<")"<<", nalazi se u drugom kvadrantu"<<endl;
        }
        else if(x < 0 && y < 0){
            cout<<"Tacka"<<"("<<x<<","<<y<<")"<<", nalazi se u trecem kvadrantu"<<endl;
        }
        else if(x > 0 && y < 0){
            cout<<"Tacka"<<"("<<x<<","<<y<<")"<<", nalazi se u cetvrtom kvadrantu"<<endl;
        }
        else if(x == 0 && y == 0){
            cout<<"Tacka"<<"("<<x<<","<<y<<")"<<", nalazi se na polaznoj tacki"<<endl;
        }
        return false;
    }
    friend ostream& operator<<(ostream& COUT,Tacka &t1){
        COUT<<"("<<t1.x<<","<<t1.y<<")"<<endl;
        return COUT;
    }
};

int main(){
    Tacka t1(0,0);
    t1.daLiSeNalazi();
 

    return 0;
}