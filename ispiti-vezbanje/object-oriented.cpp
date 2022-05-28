#include <iostream>

using namespace std;

//create class rectangle with private members width and height and public methods getWidth, getHeight, setWidth, setHeight, getArea, getPerimeter
class Rectangle {
private:
    int width;
    int height;
public:
    Rectangle(int w, int h) {
        width = w;
        height = h;
    }
    int getWidth() {
        return width;
    }
    int getHeight() {
        return height;
    }
    void setWidth(int w) {
        width = w;
    }
    void setHeight(int h) {
        height = h;
    }
    int getArea() {
        return width * height;
    }
    int getPerimeter() {
        return 2 * (width + height);
    }
};
//crete main function
int main() {
    Rectangle r(5, 10);
    cout << "Width: " << r.getWidth() << endl;
    cout << "Height: " << r.getHeight() << endl;
    cout << "Area: " << r.getArea() << endl;
    cout << "Perimeter: " << r.getPerimeter() << endl;
    return 0;
}