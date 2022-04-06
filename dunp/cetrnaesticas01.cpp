
//Primer 1

#include <iostream>
#include<math.h>
using namespace std;

class Duz{
    private:
    float x1,y1,x2,y2,d;
    public:
    Duz(){
        x1 = 1.5;
        x2 = 11.7;
        y1 = -0.5;
        y2 = 5.8;
        d =5.6;
    }
    Duz(float x1,float x2,float y1,float y2){
        this->x1 = x1;
        this->x2 = x2;
        this->y1 = y1;
        
    }
    void racunajDUzinu(){
        d = sqrt(pow(x1-x2,2)+pow(y1-y2,2));
    }
    void set(){

    }
    void get(){

    }

};
class Kvadrat{

};
