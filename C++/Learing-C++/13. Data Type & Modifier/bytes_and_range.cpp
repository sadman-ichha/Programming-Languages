#include <iostream>
#include <limits>

using namespace std;

int main() {
    // Data types and modifiers
    int integerVar = 42;
    short shortVar = 32767;
    long longVar = 2147483647;
    long long longLongVar = 9223372036854775807LL;
    float floatVar = 3.14f;
    double doubleVar = 2.71828;
    char charVar = 'A';
    bool boolVar = true;

    // Displaying values and sizes
    cout << "Integer: " << integerVar << " (Size: " << sizeof(integerVar) << " bytes)\n";
    cout << "Short: " << shortVar << " (Size: " << sizeof(shortVar) << " bytes)\n";
    cout << "Long: " << longVar << " (Size: " << sizeof(longVar) << " bytes)\n";
    cout << "Long Long: " << longLongVar << " (Size: " << sizeof(longLongVar) << " bytes)\n";
    cout << "Float: " << floatVar << " (Size: " << sizeof(floatVar) << " bytes)\n";
    cout << "Double: " << doubleVar << " (Size: " << sizeof(doubleVar) << " bytes)\n";
    cout << "Char: " << charVar << " (Size: " << sizeof(charVar) << " bytes)\n";
    cout << "Bool: " << boolVar << " (Size: " << sizeof(boolVar) << " bytes)\n";

    // Limits of integer data types
    cout << "\nLimits of Integer Data Types:\n";
    cout << "Minimum Int: " << numeric_limits<int>::min() << endl;
    cout << "Maximum Int: " << numeric_limits<int>::max() << endl;

    return 0;
}




// Bytes:
// A byte is the basic unit of storage in computer memory.
// In most modern computer systems, a byte is composed of 8 bits.
// Each bit can represent a binary value (0 or 1).
// Bytes are used to represent characters, numbers, and other data in computer systems.


// Data Type Ranges:
// The size of data types in C++ can vary based on the system architecture and compiler 
// implementation. However, the C++ standard specifies minimum size requirements for each data type.
// The sizeof operator in C++ can be used to determine the size of a data type in bytes.