#include <iostream>
#include <limits> // For numeric_limits

using namespace std;

int main() {
    // Integer data types
    int integerVariable = 42;
    short shortVariable = 32767;
    long longVariable = 2147483647;
    long long longLongVariable = 9223372036854775807;

    // Displaying integer variables
    cout << "Integer Variable: " << integerVariable << endl;
    cout << "Short Variable: " << shortVariable << endl;
    cout << "Long Variable: " << longVariable << endl;
    cout << "Long Long Variable: " << longLongVariable << endl;

    // Floating-point data types
    float floatVariable = 3.14f;
    double doubleVariable = 3.14159265359;

    // Displaying floating-point variables
    cout << "Float Variable: " << floatVariable << endl;
    cout << "Double Variable: " << doubleVariable << endl;

    // Character data type
    char charVariable = 'A';

    // Displaying character variable
    cout << "Character Variable: " << charVariable << endl;

    // Boolean data type
    bool boolVariable = true;

    // Displaying boolean variable
    cout << "Boolean Variable: " << boolalpha << boolVariable << endl;

    // Modifiers
    signed int signedIntVariable = -42;
    unsigned int unsignedIntVariable = 42;
    long double longDoubleVariable = 3.14159265359;

    // Displaying variables with modifiers
    cout << "Signed Int Variable: " << signedIntVariable << endl;
    cout << "Unsigned Int Variable: " << unsignedIntVariable << endl;
    cout << "Long Double Variable: " << longDoubleVariable << endl;

    // Limits of data types
    cout << "\nLimits of Integer Data Types:\n";
    cout << "Minimum Int: " << numeric_limits<int>::min() << endl;
    cout << "Maximum Int: " << numeric_limits<int>::max() << endl;
    cout << "Maximum Unsigned Int: " << numeric_limits<unsigned int>::max() << endl;

    return 0;
}
