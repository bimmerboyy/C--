#include <iostream>

using namespace std;

//Create a program that will implement classes expression1 and expression2.
//Expression 1 consists of the following features:
//char op1 - character type variable that marks the operation (+, -, *, /)
//operand1 - integer variable first operand
//operand2 - integer variable second operand

class expression1{
    //create protected variables
    protected:
        char op1;
        int operand1;
        int operand2;
    public:
    //create constructor
    expression1(){
        //set default values
        op1='+';
        operand1=0;
        operand2=0;
    }
    //create constructor with parameters
    expression1(char op1, int operand1, int operand2){
        this->op1=op1;
        this->operand1=operand1;
        this->operand2=operand2;
    }
    //create virtual function resenje
    virtual float resenje(){
        //create switch statement
        switch(op1){
            case '+':
                return operand1+operand2;
            case '-':
                return operand1-operand2;
            case '*':
                return operand1*operand2;
            case '/':
                return operand1/operand2;
            default:
                return 0;
        }
    }
    //create virtual function ispis
    virtual void ispis(){
        //cout expression
        cout<<"Expression is: "<<operand1<<op1<<operand2<<" = "<<resenje()<<endl;
    }
};

//create same wiht 3 paramerters for expression2
class expression2: public expression1{
    //add parameters
    protected:
        char op2;
        int operand3;
    public:
    //create constructor
    expression2(){
        //set default values
        op2='+';
    }
    //create constructor with parameters
    expression2(int operand1, int operand2, int operand3,char op1,char op2):expression1(operand1,operand2, op1){
        this->operand3=operand3;
        this->op2=op2;
    }
    //create virtual function resenje
    float resenje(){
        double prvi;
        if((op2 == '*' || op2 == '/') && (op1 == '+' || op1 == '-')){
            //swhich op2
            switch(op2){
                case '*':
                    prvi = (double) operand2 * operand3;
                    break;
                case '/':
                    prvi = (double) operand2 / operand3;
                    break;
            }
            //switch op1
            switch(op1){
                case '+':
                    return (double) operand1 + prvi;
                case '-':
                    return (double) operand1 - prvi;
            }
        }
        else{
            switch(op1){
                case '+':
                    prvi = (double) operand1 + operand2;
                case '-':
                    prvi = (double) operand1 - operand2;
                case '*':
                    prvi = (double) operand1 * operand2;
                case '/':
                    prvi = (double) operand1 / operand2;
            }
            switch(op2){
                case '+':
                    return prvi + operand3;
                case '-':
                    return prvi - operand3;
                case '*':
                    return prvi * operand3;
                case '/':
                    return prvi / operand3;
            }
        }
    }
    //create virtual function ispis
    void ispis(){
        //cout expression
        cout<<"Expression is: "<<operand1<<op1<<operand2<<op2<<operand2<<" = "<<resenje()<<endl;
    }
};
//create main function
int main(){
    //create expression1 object
    expression1 e1('*',5,2);
    //create expression2 object
    expression2 e2('+',5,2,3,'*');
    //call ispis function for e1
    e1.ispis();
    //call ispis function for e2
    e2.ispis();
    return 0;
}