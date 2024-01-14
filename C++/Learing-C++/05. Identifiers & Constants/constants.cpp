// What is Constants?
// When you do not want others (or yourself) to change existing variable values, use the const keyword
// (this will declare the variable as "constant", which means unchangeable and read-only):

#include <iostream>
#include <conio.h>
using namespace std;

// Define constant values and this variable called global variable
const int MAX_VALUE = 100;
const double PI = 3.14159;
const string GREETING = "Hello, Constants!";

int main()
{

    // Output constant values
    cout << "Maximum Value: " << MAX_VALUE << "\n";
    cout << "PI: " << PI << "\n";
    cout << "Greeting: " << GREETING << "\n";

    // Attempting to modify a constant will result in a compilation error
    // MAX_VALUE = 200; // Uncommenting this line will cause a compilation error

    getch();
}