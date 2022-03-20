#include<iostream>
#include<string.h>
#include<stack>
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
    Stack(int size,char ch[],int length){
        s = new char[size];
        this -> size = size;
        for(int i = 0;i < length;i++){
            s[i] = ch[i];
        }
        top = length -1;
    }
    void reset(){
        top = -1;
    }
    void push(char c){
        top++;
        s[top+1] = c;
    }
    char pop(){
        char c = s[top];
        top --;
        return c;
    }
    int top_of(){
        return top;
    }
    int empty(){
        if(top == -1){
            return 1;
        }
        else{
            return 0;
        }
    }
    int full(){
        if(size == top+1){
            return 1;
        }
        else{
            return 0;
        }
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