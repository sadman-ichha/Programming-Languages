#include <iostream>
using namespace std;

// Base class
class Shape {
public:
    // Virtual function
    virtual void draw() {
        cout << "Drawing a Shape\n";
    }
};

// Derived class 1
class Circle : public Shape {
public:
    // Override the virtual function
    void draw() override {
        cout << "Drawing a Circle\n";
    }
};

// Derived class 2
class Rectangle : public Shape {
public:
    // Override the virtual function
    void draw() override {
        cout << "Drawing a Rectangle\n";
    }
};

int main() {
    // Create objects of different classes
    Shape shape;
    Circle circle;
    Rectangle rectangle;

    // Use the draw function without virtual keyword
    cout << "Without virtual keyword:\n";
    shape.draw();       // Output: Drawing a Shape
    circle.draw();      // Output: Drawing a Circle
    rectangle.draw();   // Output: Drawing a Rectangle

    // Use the draw function with virtual keyword
    cout << "\nWith virtual keyword:\n";
    Shape* ptrShape = &shape;
    Shape* ptrCircle = &circle;
    Shape* ptrRectangle = &rectangle;

    ptrShape->draw();       // Output: Drawing a Shape
    ptrCircle->draw();      // Output: Drawing a Circle
    ptrRectangle->draw();   // Output: Drawing a Rectangle

    return 0;
}
