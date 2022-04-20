#include <iostream>

using namespace std;

class Stack{
    int top;
    int size; 
    char *s;
    Stack(int size){
        s = new char[size];       
        this->size = size;
        this->top = -1;
    }
    Stack(int size, char s[], int length){
        s = new char[size];
        for (int i = 0; i<length; i++ ){
            this->s[i] = s[i];
        }
        top = length - 1;
    }
    void reset(){
        top = -1;
    }
    void push(char c){
        s[++top] = c;
    }
    char pop(){
        char c = s[top];
        top --;
        return c;
    }
    char top_Of(){
        return s[top];
    }
    bool empty(){
        return top == -1;
    }
    bool full(){
        return top+1 == size;
    }
    ~Stack(){
        delete []s;
    }
};

int main(){

    return 0;
}