#include <iostream>
using namespace std;

int main()
{

    // Unary Minus (-) - Negates the value
    int y = -x;
    cout << "Unary Minus (-):" << y << endl;

    // Unary Plus (+) - Represents  the value itself (rarely  used)
    int z = +x;
    cout << "Unary Plus (+): " << z << endl;

    // Increment (++) - Increases the value by one
    int a = 10;
    cout << "Original Value: " << a << endl;
    cout << "After Increment (++a): " << ++a << endl;

    // Decrement (--) -Decreases the value by 1
    int b = 8;
    cout << "Original Value: " << b << endl;
    cout << "After Decrement (--b): " << --b << endl;

    // Logical NOT (!) - Inverts the truth value (true becomes false, and vice versa)
    bool isTrue = true;
    cout << "Logical NOT (!): " << !isTrue << endl;

    // Addressof operator (&) - Returns the memory address of a variable
    cout << "Addressof operator (&): " << &a << endl;

    // sizeof() operator - Returns the size of a data type or variable in bytes
    cout << "Size of int: " << sizeof(int) << " bytes" << endl;
    return 0;
}
