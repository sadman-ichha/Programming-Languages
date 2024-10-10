#include <iostream>
using namespace std;

int main() {
    int num;

    // Getting input from the user
    cout << "Enter a number: ";
    cin >> num;

    // Checking the condition
    if (num > 0) {
        cout << "The number is positive." << endl;
    } else if (num < 0) {
        cout << "The number is negative." << endl;
    } else {
        cout << "The number is zero." << endl;
    }

    return 0;
}
