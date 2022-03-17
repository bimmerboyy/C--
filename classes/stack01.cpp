#include<iostream>
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

};