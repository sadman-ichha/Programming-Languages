// This program demonstrates variables, and data types in C++

#include <iostream>
#include <iomanip> // Include the header for setprecision

int main()
{
    // Variable declaration and initialization
    int age = 25;
    double height = 5.8;
    char gender = 'M';
    std::string name = "John";

    // Output information using variables
    std::cout << "Name: " << name << "\n";
    std::cout << "Age: " << age << "\n";
    std::cout << "Height: " << height << " feet\n";
    std::cout << "Gender: " << gender << "\n";

    // ********** Declare and initialize a double variable *******
    double doubleValue = 3.14159;
    std::cout << "Double Value: " << doubleValue << std::endl;
    // You can also set precision using std::setprecision
    std::cout << "Double Value with std::Precision: " << std::fixed << std::setprecision(2) << doubleValue << std::endl;

    // Using std::boolalpha
    bool myBool = true;

    // Without std::boolalpha
    std::cout << "Without std::boolalpha: " << myBool << "\n";

    // With std::boolalpha
    std::cout << "With std::boolalpha: " << std::boolalpha << myBool << "\n";

    // Arithmetic operation using variables
    int yearsLater = age + 5;
    std::cout << "Age in 5 years: " << yearsLater << "\n";

    // Boolean variable
    bool isAdult = (age >= 18);
    std::cout << "Is adult? " << std::boolalpha << isAdult << "\n";

    return 0;
}
