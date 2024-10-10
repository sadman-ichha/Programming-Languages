#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    // Declare variables
    int num = 42;
    double dbl = 3.14;
    char ch = 'A';

    // Declare pointers and assign addresses
    int *numPtr = &num;
    double *dblPtr = &dbl;
    char *chPtr = &ch;

    // Display values and addresses using pointers
    cout << "Value of num: " << num << ", Address of num: " << numPtr << endl;
    cout << "Value of dbl: " << dbl << ", Address of dbl: " << dblPtr << endl;
    cout << "Value of ch: " << ch << ", Address of ch: " << (void *)chPtr << endl;

    // Modify values using pointers
    *numPtr = 99;
    *dblPtr = 2.71;
    *chPtr = 'B';

    // Display modified values
    cout << "\nModified values:" << endl;
    cout << "Value of num: " << num << endl;
    cout << "Value of dbl: " << dbl << endl;
    cout << "Value of ch: " << ch << endl;

    return 0;
}
