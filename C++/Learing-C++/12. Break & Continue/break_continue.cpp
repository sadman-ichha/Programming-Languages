#include <iostream>

using namespace std;

int main() {
    // Example of break statement
    cout << "Example of break statement:\n";
    for (int i = 1; i <= 10; ++i) {
        if (i == 5) {
            cout << "Breaking out of the loop at i = 5\n";
            break; // Exit the loop when i equals 5
        }
        cout << i << " ";
    }

    // Example of continue statement
    cout << "\n\nExample of continue statement:\n";
    for (int j = 1; j <= 10; ++j) {
        if (j % 2 == 0) {
            cout << "Skipping even number: " << j << "\n";
            continue; // Skip the rest of the loop for even numbers
        }
        cout << j << " ";
    }

    return 0;
}
