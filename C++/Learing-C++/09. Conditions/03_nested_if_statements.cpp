#include <iostream>
using namespace std;

int main() {
    int num;

    // Getting input from the user
    cout << "Enter a number: ";
    cin >> num;

    // Checking the conditions using nested if statements
    if (num > 0) {
        cout << "The number is positive." << endl;

        if (num % 2 == 0) {
            cout << "It is also an even number." << endl;
        } else {
            cout << "It is an odd number." << endl;
        }
    } else if (num < 0) {
        cout << "The number is negative." << endl;
    } else {
        cout << "The number is zero." << endl;
    }

    return 0;
}
