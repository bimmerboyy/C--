#include<iostream>
#include<stack>
using namespace std;

void display(stack <int> myStack){
    while(!myStack.empty()){
        cout<<myStack.top()<<endl;
        myStack.pop();
    }
    cout<<" "<<endl;
}
int main() {
        
    stack<int>myStack;
    myStack.push(10);
    myStack.push(16);
    myStack.push(12);
    myStack.push(9);

    cout<<"Elemneti us steku su: "<<endl;
    display(myStack);
    myStack.push(20);
    display(myStack);
    cout<<"Velicina steka je:"<<myStack.size()<<endl;
    cout<<"Na vrhu steka se nalazi:"<<myStack.top()<<endl; 
    cout<<"Posle 20 prsotali elementi su:"<<endl;
    myStack.pop();
    display(myStack);
    return 0;
}