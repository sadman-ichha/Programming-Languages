#include <iostream>
using namespace std;

// Base class
class Shape {
public:
    // Function overloading (Compile-time polymorphism)
    void draw() {
        cout << "Drawing a generic shape\n";
    }

    // Virtual function for run-time polymorphism
    virtual void display() {
        cout << "Displaying a generic shape\n";
    }
};

// Derived class 1
class Circle : public Shape {
public:
    // Overriding the virtual function
    void display() override {
        cout << "Displaying a circle\n";
    }
};

// Derived class 2
class Square : public Shape {
public:
    // Overriding the virtual function
    void display() override {
        cout << "Displaying a square\n";
    }
};

int main() {
    // Create objects of different types
    Shape genericShape;
    Circle circle;
    Square square;

    // Function overloading (Compile-time polymorphism)
    genericShape.draw();
    cout << "\n";

    // Virtual function (Run-time polymorphism)
    // Displaying objects through a base class pointer
    Shape* shapePtr;

    shapePtr = &genericShape;
    shapePtr->display();

    shapePtr = &circle;
    shapePtr->display();

    shapePtr = &square;
    shapePtr->display();

    return 0;
}
