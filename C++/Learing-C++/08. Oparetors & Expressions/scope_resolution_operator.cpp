// The scope resolution operator (::) in C++ is used to access a class's static members
// or global variables.
#include <iostream>
using namespace std;

// Global variables
int globalVar1 = 10;
int globalVar2 = 20;

int main() {
    // Accessing global variables directly
    cout << "Global variable 1: " << globalVar1 << endl;
    cout << "Global variable 2: " << globalVar2 << endl;

    // Changing the value of globalVar1 using scope resolution operator
    ::globalVar1 = 30;
    
    // Accessing globalVar1 after modification
    cout << "Modified Global variable 1: " << globalVar1 << endl;

    return 0;
}
