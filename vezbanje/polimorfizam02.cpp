/*
Create a simple “shape” hierarchy: a base class called
Shape and derived classes called Circle, Square, and Triangle.
In the base class, make a virtual function called draw( ), and override this in the derived classes.
Make an array of pointers to Shape objects that you create on the heap (and thus perform upcasting of the pointers), 
and call draw( ) through the base-class pointers, to verify the behavior of the virtual function. 
If your debugger supports it, single-step through the code

*/

#include<iostream>
#include <type_traits>

using namespace std;

class Shape{
    virtual void draw(){
        
    }

};

class Circle{


};

class Square{

};
class Triangle{

};


int main(){
    
    return 0;
}