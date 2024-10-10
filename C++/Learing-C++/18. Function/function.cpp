#include <iostream>
using namespace std;


// Function Prototype
int add(int a, int b);
double add(double a, double b) ;
int multiply(int a, int b) ;
double multiply(double a, double b);



int main() {
    // Call the overloaded add function with integers
    int sumInt = add(5, 7);
    cout << "Sum of Integers: " << sumInt << endl;

    // Call the overloaded add function with doubles
    double sumDouble = add(3.5, 4.2);
    cout << "Sum of Doubles: " << sumDouble << endl;

    // Call the overloaded multiply function with integers
    int productInt = multiply(3, 4);
    cout << "Product of Integers: " << productInt << endl;

    // Call the overloaded multiply function with doubles
    double productDouble = multiply(2.5, 1.5);
    cout << "Product of Doubles: " << productDouble << endl;

    return 0;
}


// Function to add two integers
int add(int a, int b) {
    return a + b;
}

// Function to add two doubles
double add(double a, double b) {
    return a + b;
}

// Function to multiply two integers
int multiply(int a, int b) {
    return a * b;
}

// Function to multiply two doubles
double multiply(double a, double b) {
    return a * b;
}