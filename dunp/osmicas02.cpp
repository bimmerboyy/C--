#include <iostream>

using namespace std;

class Stack{
    private:
        char *s;
        int  size;
        int top;
    public:
        Stack(int size){
            s = new char[size];
            this->size = size;
            top = -1;
        }
        Stack(int size, char ch[], int lenght){
            s = new char[size];
            this->size = size;
            for(int i = 0; i<lenght; i++){
                s[i] = ch[i];
            }
            top = lenght-1;
        }
        void  reset(){
            top = -1;
        }
        void push(char c){
            s[++top] = c;
        }
        char pop(){
            char c = s[top];
            top--;
            return c;
            //return c[top--];
        }
        int top_Of(){
            return top;
        }
        int  empty (){
            if(top == -1) return 1;
            return 0;
            // return (top == -1);
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
    cout << "Inicijalizovan je prazan stack" <<endl;
    if(!stack.empty()){
        cout <<"Iz nekog razloga stack nije prazan" <<endl;
    }
    stack.push('a');
    stack.push('c');
    stack.push('u');
    cout << "vrh stack-a je na " << stack.top_Of() << endl;
    cout << "na vrhu steka se nalazi karatker " << stack.pop() <<endl;
    cout << "vrh stack-a je na " << stack.top_Of() << endl;
    if(!stack.full()){
        stack.push('r');
    }
    if(!stack.full()){
        stack.push('s');
    }
    if(!stack.full()){
        stack.push('x');
    }
    if(!stack.full()){
        stack.push('q');
    }
    if(!stack.full()){
        stack.push('w');
    }
    if(!stack.full()){
        stack.push('p');
    }
    cout << "Na vrhu se nalazi karakter " << stack.pop() <<endl;
}