#include <iostream>
using namespace std;

// Base class
class Shape
{
public:
    double dim1, dim2;

    // Constructor
    Shape(double dim1, double dim2)
    {
        this->dim1 = dim1;
        this->dim2 = dim2;
    }

    // Virtual function for calculating area
    virtual double area()
    {
        return 0; // Default implementation for the base class
    }
};

// Derived class for rectangles
class Rectangle : public Shape
{
public:
    // Constructor using the base class constructor
    Rectangle(double dim1, double dim2) : Shape(dim1, dim2)
    {
    }

    // Override the virtual function to calculate rectangle area
    double area() override
    {
        return dim1 * dim2;
    }
};

// Derived class for triangles
class Triangle : public Shape
{
public:
    // Constructor using the base class constructor
    Triangle(double dim1, double dim2) : Shape(dim1, dim2)
    {
    }

    // Override the virtual function to calculate triangle area
    double area() override
    {
        return 0.5 * dim1 * dim2;
    }
};

int main()
{
    // Create objects of derived classes
    Triangle t = Triangle(10, 20);
    Rectangle r = Rectangle(10, 20);

    // Use a pointer to the base class to achieve polymorphism
    Shape *s;

    // Point the base class pointer to the Triangle object
    s = &t;
    cout << "Triangle Area: " << s->area() << endl;

    // Point the base class pointer to the Rectangle object
    s = &r;
    cout << "Rectangle Area: " << s->area() << endl;

    return 0;
}
