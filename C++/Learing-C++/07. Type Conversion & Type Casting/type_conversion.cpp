// two types of type conversion in C++.
// Implicit Conversion (This type of conversion is also known as automatic conversion.)

// Explicit Conversion (also known as Type Casting)
// C style Casting ------:: (data_type)expression;
// Function-style Casting:: data_type(expression);

#include <iostream>
using namespace std;

int main()
{
    // Implicit type conversion (Widening Conversion)
    int intValue = 42;
    double doubleValue = intValue; // Implicitly converts int to double

    cout << "Implicit Type Conversion (Widening):\n";
    cout << "int value: " << intValue << "\n";
    cout << "double value: " << doubleValue << "\n\n";

    // Explicit type conversion (Narrowing Conversion)
    double anotherDoubleValue = 3.14;
    int intFromDouble = static_cast<int>(anotherDoubleValue); // Explicitly converts double to int

    cout << "Explicit Type Conversion (Narrowing):\n";
    cout << "double value: " << anotherDoubleValue << "\n";
    cout << "int value (after conversion): " << intFromDouble << "\n\n";

    // Type conversion between different data types
    char charValue = 'A';
    int intFromChar = static_cast<int>(charValue); // Converts char to int --- Print the ASCII Value

    cout << "Type Conversion Between Different Data Types:\n";
    cout << "char value: " << charValue << "\n";
    cout << "int value (after conversion): " << intFromChar << "\n";

    return 0;
}
