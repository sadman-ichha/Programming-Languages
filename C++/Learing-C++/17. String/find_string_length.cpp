#include <iostream>
using namespace std;

int main()
{

    string ch = "Hello Github!";
    cout << ch << endl;

    // Calculate string length without using length() function
    int length = 0;

    // Iterate through the characters until the null terminator '\0' is found
    while (ch[length] != '\0')
    {
        length++; // Increment the length for each character
    }

    cout << "String Length: " << length << endl;

    // Output the string length using the length() function
    cout << "Length of Name: " << ch.length() << " characters\n";

    return 0;
}
