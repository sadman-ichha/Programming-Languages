#include <iostream>

// Function to calculate the sum of two numbers
int addNumbers(int num1, int num2)
{
    return num1 + num2;
}

// Class identifier (class definition)
class Car
{
public:
    std::string model;
    int year;
};

int main(){
    // Variable identifiers
    int firstNumber = 10;
    int secondNumber = 20;

    // Function identifier
    int sum = addNumbers(firstNumber, secondNumber);

    // Object identifiers (instances of the Car class)
    Car myCar;
    myCar.model = "Toyota";
    myCar.year = 2022;

    // Outputting information using identifiers
    std::cout << "Sum of numbers: " << sum << "\n";
    std::cout << "Car Model: " << myCar.model << "\n";
    std::cout << "Car Year: " << myCar.year << "\n";

    return 0;
}

// All C++ variables must be identified with unique names.

// In identifiers example::
// Variable identifiers include firstNumber and secondNumber.
// Function identifier is addNumbers.
// Class identifier is Car.
// Object identifiers (instances of the Car class) include myCar.



// Good
// int minutesPerHour = 60;

// OK, but not so easy to understand what m actually is
// int m = 60;