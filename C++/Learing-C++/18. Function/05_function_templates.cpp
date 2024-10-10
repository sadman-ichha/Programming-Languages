#include <iostream>
using namespace std;

// Function template for finding the maximum of two values
template <typename T>
T findMax(T a, T b) {
    return (a > b) ? a : b; // ternary operations
}

int main() {
    // Example with integers
    int num1 = 5, num2 = 10;
    cout << "Max of " << num1 << " and " << num2 << " is: " << findMax(num1, num2) << endl;

    // Example with doubles
    double double1 = 3.14, double2 = 6.28;
    cout << "Max of " << double1 << " and " << double2 << " is: " << findMax(double1, double2) << endl;

    // Example with characters
    char char1 = 'X', char2 = 'A';
    cout << "Max of " << char1 << " and " << char2 << " is: " << findMax(char1, char2) << endl;

    return 0;
}
