// C++ User Input?
// You have already learned that cout is used to output (print) values.
// Now we will use cin to get user input.
// cin is a predefined variable that reads data from the keyboard with the extraction operator (>>).

#include <iostream>
using namespace std;

int main()
{
    // Declare variables to store user input
    int userNumber;
    string userName;

    // Get user input for an integer
    cout << "Enter a number: ";
    cin >> userNumber;

    // Get user input for a string
    cout << "Enter your name: ";
    // Using cin.ignore() to clear the newline character left in the input buffer
    cin.ignore();
    getline(cin, userName);

    // Display the user input
    cout << "You entered the number: " << userNumber << "\n";
    cout << "You entered the name: " << userName << "\n";

    return 0;
}

// Note: It's good practice to use cin.ignore() before getline() to clear
// any remaining newline character in the input buffer. This ensures that getline() works as expected.
