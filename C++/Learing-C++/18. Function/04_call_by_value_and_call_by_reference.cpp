#include <iostream>
using namespace std;

void callByValue(int num);
void callByReference(int &num);

int main(){
    int value = 10;

    cout << "Original value: " << value << "\n\n";

    // Call the function using call by value
    callByValue(value);
    cout << "Value after callByValue function: " << value << "\n\n";

    // Call the function using call by reference
    callByReference(value);
    cout << "Value after callByReference function: " << value << "\n";

    return 0;
}

// Function to demonstrate call by value
void callByValue(int num)
{
    cout << "Inside callByValue function (before modification):\n";
    cout << "Value received: " << num << "\n";
    num = 20; // Modify the local copy of the parameter
    cout << "Value modified inside callByValue function: " << num << "\n";
}

// Function to demonstrate call by reference
void callByReference(int &num)
{
    cout << "Inside callByReference function (before modification):\n";
    cout << "Value received: " << num << "\n";
    num = 30; // Modify the original value through reference
    cout << "Value modified inside callByReference function: " << num << "\n";
}