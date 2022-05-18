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
    virtual double izracunaj(){
        switch(op1){
            case 
        }
    }

};

int main(){
    return 0;
}