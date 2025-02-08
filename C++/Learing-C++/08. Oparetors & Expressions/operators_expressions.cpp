// Assignment Operators ???
// Assignment operators are used to assign values to variables.
// In the example below, we use the assignment operator (=) to assign the value 10 to a variable called x:

#include <iostream>
using namespace std;

int main()
{
    // Arithmetic operators
    int operand1 = 10;
    int operand2 = 5;

    int additionResult = operand1 + operand2;
    int subtractionResult = operand1 - operand2;
    int multiplicationResult = operand1 * operand2;
    int divisionResult = operand1 / operand2;
    int modulusResult = operand1 % operand2;

    cout << "Arithmetic Operators:\n";
    cout << "Addition: " << additionResult << "\n";
    cout << "Subtraction: " << subtractionResult << "\n";
    cout << "Multiplication: " << multiplicationResult << "\n";
    cout << "Division: " << divisionResult << "\n";
    cout << "Modulus: " << modulusResult << "\n\n";

    // Assignment operators
    int a = 5;
    int b = 7;

    cout << "Assignment Operators:\n";
    cout << "Original values - a: " << a << ", b: " << b << "\n";

    // Assignment operators: += and -=
    a += b; // Equivalent to a = a + b
    cout << "After a += b, a: " << a << "\n";

    a -= b; // Equivalent to a = a - b
    cout << "After a -= b, a: " << a << "\n";

    // Additional assignment operators: *=, /=, %=
    a *= b; // Equivalent to a = a * b
    cout << "After a *= b,a: " << a << "\n";

    a /= b; // Equivalent to a = a / b
    cout << "After a /= b, a: " << a << "\n";

    a %= b; // Equivalent to a = a % b
    cout << "After a %= b, a: " << a << "\n\n";

    // Comparison operators
    bool isEqual = (a == b);
    bool isNotEqual = (a != b);
    bool isGreater = (a > b);
    bool isLess = (a < b);

    cout << "Comparison Operators:\n";
    cout << "Equal: " << isEqual << "\n";
    cout << "Not Equal: " << isNotEqual << "\n";
    cout << "Greater Than: " << isGreater << "\n";
    cout << "Less Than: " << isLess << "\n\n";

    // Logical operators
    bool logicalAnd = (a > 0) && (b > 0);
    bool logicalOr = (a > 0) || (b > 0);
    bool logicalNotA = !(a > 0);
    bool logicalNotB = !(b > 0);

    cout << "Logical Operators:\n";
    cout << "Logical AND: " << logicalAnd << "\n";
    cout << "Logical OR: " << logicalOr << "\n";
    cout << "Logical NOT for a: " << logicalNotA << "\n";
    cout << "Logical NOT for b: " << logicalNotB << "\n\n";

    // Bitwise operators
    int bitwiseAnd = a & b;
    int bitwiseOr = a | b;
    int bitwiseXor = a ^ b;
    int bitwiseNotA = ~a;

    cout << "Bitwise Operators:\n";
    cout << "Bitwise AND: " << bitwiseAnd << "\n";
    cout << "Bitwise OR: " << bitwiseOr << "\n";
    cout << "Bitwise XOR: " << bitwiseXor << "\n";
    cout << "Bitwise NOT for a: " << bitwiseNotA << "\n";


   
    return 0;
}
