#include <iostream>
using namespace std;
class Izraz1 {
 char op1;
 int operand1;
 int operand2;
public:
  Izraz1 () {
  op1 = '+' ;
  operand1 = 2;
  operand2 = 5;}
 Izraz1( int operand1 , int operand2, char operacija1) {
  this -> operand1 = operand1;
  this -> operand2 = operand2;
  op1 = operacija1;}
 void setop1(char b) { op1 = b; }
 void setoperand1( int b) { operand1 = b; }
 void setoperand2( int b) { operand2 = b; }
 char getop1() { return op1; }
 int getoperand1() { return operand1; }
 int getoperand2() { return operand2; }
  virtual double izracunaj () {
  switch(op1) {
   case '+' : return (double) operand1 + operand2;
   case '-' : return (double) operand1 - operand2;
   case '*' : return (double) operand1 * operand2;
            case '/':
            if(operand2!=0)
            return operand1/operand2;
            else return 0;break;
            default: return 0;break;}
  }
    void ispis() {
        cout << operand1 << op1 << operand2 << endl;
    }
};

class Izraz2 : public Izraz1 {
    char op2;
    int operand3;
public:
    Izraz2(): Izraz1(2, 5, '+') {
        op2 = '*';
        operand3 = 3;
    }
    Izraz2(int operand1, int operand2, int operand3,char op1,char op2): Izraz1 (operand1, operand2, op1) {
        this ->op2 = op2;
        this ->operand3 = operand3;
    }
    void setop2 (char b) { op2 = b;}
    void setoperand3 (int b) { operand3 = b;}
    char getop2() { return op2; }
    int getoperand3 () { return operand3; }

   double izracunaj() {
        double prvi;
        if ((op2 == '*' || op2 == '/') && (getop1()== '+' || getop1() == '-')) {
           switch(op2) {
                case '*' : prvi = (double) getoperand2() * operand3; break;
                case '/' : prvi = (double) getoperand2() / operand3; break;
           }
           switch(getop1()) {
                case '+': return prvi + getoperand1 ();
                case '-': return prvi - getoperand1 ();
           }
        }
        else {
            switch(getop1()) {
                case '+' : prvi = (double) getoperand1() + getoperand2(); break;
                case '-' : prvi = (double) getoperand1() - getoperand2(); break;
                case '*' : prvi = (double) getoperand1() * getoperand2(); break;
                case '/' : prvi = (double) getoperand1() / getoperand2(); break;
            }

            switch(op2) {
                case '+' : return prvi + getoperand1();
                case '-' : return prvi - getoperand1();
                case '*' : return prvi * getoperand1();
                case '/' : return prvi / getoperand1();
            } }
        return prvi;
   }
   void ispis() {
    cout << getoperand1() << getop1() << getoperand2() << op2 << operand3 <<endl; }
};

int main() {
    Izraz2 iz;
    iz.ispis();
    cout << iz.izracunaj() <<endl;
    return 0;
}
