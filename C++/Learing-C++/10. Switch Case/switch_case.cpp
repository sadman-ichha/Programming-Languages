#include <iostream>
using namespace std;

int main() {
    char grade;

    // Getting input from the user
    cout << "Enter your grade (A, B, C, D, or F): ";
    cin >> grade;

    // Switch statement to check the grade
    switch (grade) {
        case 'A':
        case 'a': {
            cout << "Excellent!" << endl;
            // Additional statements for grade 'A'
            break;
        }

        case 'B':
        case 'b': {
            cout << "Good job!" << endl;
            // Additional statements for grade 'B'
            break;
        }

        case 'C':
        case 'c': {
            cout << "Satisfactory." << endl;
            // Additional statements for grade 'C'
            break;
        }

        case 'D':
        case 'd': {
            cout << "Needs improvement." << endl;
            // Additional statements for grade 'D'
            break;
        }

        case 'F':
        case 'f': {
            cout << "Failed. Please try again." << endl;
            // Additional statements for grade 'F'
            break;
        }

        default: {
            cout << "Invalid grade. Please enter A, B, C, D, or F." << endl;
            // Additional statements for default case
            break;
        }
    }

    return 0;
}
