#include <iostream>

using namespace std;

//create class fraction with private members for numerator and denominator 
//and public members for addition, subtraction, multiplication, division, and print
//add a constructor that takes two ints as arguments and initializes the numerator and denominator
//overload the +, -, *, / operators to add, subtract, multiply, and divide fractions
//overload the << operator to print the fraction in the format of numerator/denominator
//overload the == operator to check if two fractions are equal
//overload the != operator to check if two fractions are not equal
//overload the > operator to check if one fraction is greater than another
//overload the < operator to check if one fraction is less than another
//overload the >= operator to check if one fraction is greater than or equal to another
//overload the <= operator to check if one fraction is less than or equal to another
//overload the >> operator to read a fraction from the user
class fraction {
private:
    int numerator;
    int denominator;
public:
    fraction(int n=1, int d=1) {
        numerator = n;
        denominator = d;
    }
    //make function for fraction addition
    friend fraction operator+(fraction f1, fraction f2);
    friend fraction operator-(fraction f1, fraction f2);
    friend fraction operator*(fraction f1, fraction f2);
    friend fraction operator/(fraction f1, fraction f2);
    friend ostream& operator<<(ostream& out, fraction f);
    friend istream& operator>>(istream& in, fraction& f);
    friend bool operator==(fraction f1, fraction f2);
    friend bool operator!=(fraction f1, fraction f2);
    friend bool operator>(fraction f1, fraction f2);
    friend bool operator<(fraction f1, fraction f2);
    friend bool operator>=(fraction f1, fraction f2);
    friend bool operator<=(fraction f1, fraction f2);
};
fraction operator+(fraction f1, fraction f2) {
    int n = f1.numerator * f2.denominator + f2.numerator * f1.denominator;
    int d = f1.denominator * f2.denominator;
    fraction f(n, d);
    return f;
}
fraction operator-(fraction f1, fraction f2) {
    int n = f1.numerator * f2.denominator - f2.numerator * f1.denominator;
    int d = f1.denominator * f2.denominator;
    fraction f(n, d);
    return f;
}
fraction operator*(fraction f1, fraction f2) {
    int n = f1.numerator * f2.numerator;
    int d = f1.denominator * f2.denominator;
    fraction f(n, d);
    return f;
}
fraction operator/(fraction f1, fraction f2) {
    int n = f1.numerator * f2.denominator;
    int d = f1.denominator * f2.numerator;
    fraction f(n, d);
    return f;
}
ostream& operator<<(ostream& out, fraction f) {
    if (f.numerator == f.denominator) {
        out << f.numerator;
        return out;
    }
    out << f.numerator << "/" << f.denominator;
    return out;
}
istream& operator>>(istream& in, fraction& f) {
    in >> f.numerator >> f.denominator;
    return in;
}
bool operator==(fraction f1, fraction f2) {
    return (f1.numerator == f2.numerator && f1.denominator == f2.denominator);
}
bool operator!=(fraction f1, fraction f2) {
    return (f1.numerator != f2.numerator || f1.denominator != f2.denominator);
}
bool operator>(fraction f1, fraction f2) {
    return (f1.numerator * f2.denominator > f2.numerator * f1.denominator);
}
bool operator<(fraction f1, fraction f2) {
    return (f1.numerator * f2.denominator < f2.numerator * f1.denominator);
}
bool operator>=(fraction f1, fraction f2) {
    return (f1.numerator * f2.denominator >= f2.numerator * f1.denominator);
}
bool operator<=(fraction f1, fraction f2) {
    return (f1.numerator * f2.denominator <= f2.numerator * f1.denominator);
}
int main() {
    fraction f1(1, 2);
    fraction f2(2, 3);
    fraction f3 = f1 + f2;
    fraction f4 = f1 - f2;
    fraction f5 = f1 * f2;
    fraction f6 = f1 / f2;
    cout << f3 << endl;
    cout << f4 << endl;
    cout << f5 << endl;
    cout << f6 << endl;
    fraction f7;
    cin >> f7;
    cout << f7 << endl;
    fraction f8(1, 2);
    fraction f9(2, 3);
    if (f8 == f9) {
        cout << "f8 == f9" << endl;
    }
    if (f8 != f9) {
        cout << "f8 != f9" << endl;
    }
    if (f8 > f9) {
        cout << "f8 > f9" << endl;
    }
    if (f8 < f9) {
        cout << "f8 < f9" << endl;
    }
    if (f8 >= f9) {
        cout << "f8 >= f9" << endl;
    }
    if (f8 <= f9) {
        cout << "f8 <= f9" << endl;
    }
    return 0;
}