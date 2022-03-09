#include <iostream>

using namespace std;

// Create a Car class with some attributes
class Car {
  public:
    string brand;   
    string model;
    int year;
    Car(string x, string y, int z){
        brand = x;
        model = y;
        year = z;
    }
};
class test {
  public:
    test(){
        printf("Test radi \n");
    }
    void test2(){
        printf("Test2 \n");
    }
};


int main() {
    Car carObj1("Bmw", "x6", 1999);
    Car carObj2("Golf", "2", 1987); 
    cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << "\n";
    cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << "\n";
    //cout << "Bmw is " << carObj1.starost() << " years old";
    test t1;
    t1.test2();
    return 0;
}