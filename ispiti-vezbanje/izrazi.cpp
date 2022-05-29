#include <iostream>

using namespace std;

class Izraz1{
    protected:
    int a;
    int b;
    char operator1;
    public:
    Izraz1(int a=1, char operator1='+', int b=1) : a(a), b(b), operator1(operator1) {}
    virtual float izracunaj(){
        switch(operator1){
            case '+':
                return a+b;
                break;
            case '-':
                return a-b;
                break;
            case '*': 
                return (float)a*b;
                break;
            case '/':
                return (float) a/b;
                break;
        }
        return 0;
    }
    virtual void ispis(){
        cout << a <<operator1 <<b << "=" <<izracunaj() <<endl;
    }
    
};

class Izraz2 : public Izraz1{
    protected:
    int c;
    char operator2;
    public:
    Izraz2(int a,  char operator1, int b, char operator2 = '*', int c=1) : c(c), operator2(operator2), Izraz1(a, operator1, b){};
    float izracunaj(){
        float prvi;
        if(operator1 == '*' || operator1 == '/' ){
            switch(operator1){
                case '*':
                    prvi = (float)a*b;
                    break;
                case '/':
                    prvi = (float)a/b;
            }
            switch(operator2){
                case '+':
                    return prvi + c;
                case '-':
                    return prvi - c;
                case '*':
                    return (float)prvi * c;
                case '/':
                    return (float)prvi / c;
            }
        }
        if(operator2 == '*' || operator2 == '/'){
            switch(operator2){
                case '*':
                    prvi = (float) b * c;
                    break;
                case '/':
                    prvi = (float)b / c;
                    break;
            }
            switch(operator1){
                case '+': 
                    return a + prvi;
                case '-':
                    return a - prvi;
            }
        }
        prvi = Izraz1::izracunaj();
        switch(operator2){
            case '+':
                return prvi + c;
            case '-':
                return prvi - c;
        }
        return 0;
    }
    
    void ispis(){
        cout << a << operator1 << b << operator2 << c << "=" << izracunaj() << endl;
    }
};

int main(){
    Izraz1 i1(3, '+', 4);
    Izraz2 i2(1, '/', 2, '/', 3);
    i1.ispis();
    i2.ispis();
}   