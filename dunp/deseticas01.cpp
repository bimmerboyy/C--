/*
Stack:
q [3] pop brise ga
y [2]
c [1] push c
a [0]  // push a
 <- top za restet
*/
#include<iostream>
#include<string.h>
using namespace std;
class Stack{
    private:
    char *s;
    int size;
    int top;
    public:
    Stack(int size){
        s = new char[size];
        this->size = size;
        top = -1;
    }
     Stack(int size,char ch[],int lenght){
        s = new char[size];
        this->size = size;
        for(int i = 0;i < lenght;i++){
            s[i] = ch[i];
        }
        top = lenght -1;
    }
    void reset(){
        top = -1;
    }
    void push(char c){ // stavlja znac u stek
        top++; // da dodje do vrha
        s[top+1] = c; // postavlja na vrh c
    }
    char pop(){ // uzima vrednost sa vrha steka
        char c = s[top];
        top--;
        return c;
    }
    int top_of(){ // vraca vredbnost sa vrha
    return top;
    }
    int empty(){  // proverava da li  je stek prazan
        if(top == -1){
            return 1;
        }
        return 0;    
    }
    int full(){
        if(size == top+1){
            return 1;
        }
        return 0;
    }
    ~Stack(){
        delete [] s;
    }

};
int main(){
    Stack stack(7);
    cout<<"Inicijalizovan stek je prazan stek"<<endl;
    if(!stack.empty()){
        cout<<"Iz nekog razloga stek nije prazan"<<endl;
    }
    stack.push('a');
     stack.push('c');
      stack.push('u');
    cout<<"Vrh stack-a je na "<<stack.top_of()<<endl;
       cout<<"Na vrhu se nalazi karakter "<<stack.pop()<<endl;
       cout<<"Vrh stack-a je na "<<stack.top_of()<<endl;
       if(!stack.full())
        stack.push('r');
         if(!stack.full())
        stack.push('s');
         if(!stack.full())
        stack.push('x');
         if(!stack.full())
        stack.push('q');
         if(!stack.full())
        stack.push('w');
         if(!stack.full()){
              stack.push('p');
         }
       
        cout<<"Na vrhu se nalazi karakter"<<stack.pop()<<endl;
        return 0;
}

