#include <iostream>

using namespace std;

class izraz1{
    protected:
    char op1;
    int operand1;
    int operand2;
    public:
    Izraz1(char op1='+', int operand1=2, int operand2 = 5){
        this->operand2 = operand2;
        this->operand1 = operand1;
        this->op1 = op1;
    }
    Izraz1(int operand1=2, int operand2 = 5, char op1='+'){
        this->operand2 = operand2;
        this->operand1 = operand1;
        this->op1 = op1;
    }
    int get_operand2(){
        return operand2;
    }
    int get_operand1(){
        return operand1;
    }
    char get_operator(){
        return op1; 
    }
    void set_operand2(){
        return operand2;
    }
    void set_operand1(){
        return operand1;
    }
    
};