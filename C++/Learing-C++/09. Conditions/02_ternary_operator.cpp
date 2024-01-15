// Short Hand If...Else (Ternary Operator)
// There is also a short-hand if else, which is known as the ternary operator because it consists of three operands. 
// It can be used to replace multiple lines of code with a single line. 
// It is often used to replace simple if else statements:

#include <iostream>
using namespace std;

int main() {
    int num;

    // Getting input from the user
    cout << "Enter a number: ";
    cin >> num;

    // Using the ternary operator to check if the number is even or odd
    string result = (num % 2 == 0) ? "even" : "odd";

    // Displaying the result
    cout << "The number is " << result << "." << endl;

    return 0;
}
