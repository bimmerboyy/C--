#include<iostream>

using namespace std;

class Izraz1{
    protected:
    char op1;
    int operand1;
    int operand2;
    public:
    Izraz1(char o = '+',int o1 = 2,int o2 = 5){
        op1 = o;
        operand1 = o1;
        operand2 = o2;
    }
    void setOp1(char o){
        op1 = o;
    }
    void setOperand1(char o1){
        operand1 = o1;
    }
    void setOperand2(char o2){
        operand2 = o2;
    }
    char getOp1(){
        return op1;
    }
    int getOperand1(){
        return operand1;
    }
    int getOperand2(){
        return operand2;
    }
    virtual float izracunaj(){
        switch(op1){
            case '+':
            return operand1 + operand2;
             case '-':
            return operand1 - operand2;
             case '*':
            return (operand2 != 0)? operand1 * operand2 : 0;
             case '/':
            return (operand2 != 0)? operand1 / operand2 : 0;
        }
        return 0;
    }
    virtual void ispis(){
        cout<<operand1<<op1<<operand2;
    }

};

class Izraz2{
    protected:
    float operand3;
    char op2;
    public:
    Izraz2(float oper1,float oper2,float oper3,char o1,char o2) : Izraz1(oper1,oper2,o1){
        operand3 = oper3;
        op2 = o2;
    }
    float izracunaj(){
        if(op1 == '+' || op1 == '-') && (op2 == '*' || op2 == '/'){
            float drez;
            switch(op2){
                case '+': drez = operand2 + operand3;
                    break;
                case '-': drez = operand2 - operand3;
                    break;
                case '*': drez = operand2 * operand3;
                    break;
                case '/': drez = (operand3 != 0)? operand2 / operand3 : 0;
                    break;
            }
            drez = 0;
             switch(op1){
                case '+': return  operand1 + operand3;
                case '-': return  operand1 - operand3;
                case '*': return  operand1 * operand3;
                case '/': return  (operand3 != 0)? operand1 / operand3 : 0;
            }

        }
        else{
            float lrez;
                switch(op1){
                case '+': lrez = operand1 + operand3;
                    break;
                case '-': lrez = operand1 - operand3;
                    break;
                case '*': lrez = operand1 * operand3;
                    break;
                case '/': lrez = (operand3 != 0)? operand1 / operand3 : 0;
                    break;
            }
            switch(op2){
                case '+': return lrez + operand3;
                case '-': return lrez - operand3;
                case '*': return lrez * operand3;
                case '/': return lrez = (operand3 != 0)? lrez / operand3 : 0;
            }
            return 0;
        
    }
    void ispis(){
        Izraz1::ispis();
        cout<<op2<<operand3<<endl;
    }
};
class Bazna{
    public:
    virtual void ispis(){
        cout<<"Ja sam ispis iz bazne klase"<<endl;
    }
      void ispis2(){
        cout<<"Ja sam ispis2 iz bazne klase"<<endl;
    }

};
class Izvedena : public Bazna{
    public:
    void ispis(){
        cout<<"Ja sam ispis iz izvedene klase"<<endl;
    }
     void ispis2(){
        cout<<"Ja sam ispis2 iz izvedene klase"<<endl;
    }

};

int main(){
    Bazna *b;
    Izvedena i;
    b = &i;
    b->ispis();
    b->ispis2();
    return 0;
}


/* Primer kalsa */