#include <iostream>
using namespace std;

int main() {
        try {
            int numerator, denominator;
            cout << "Enter The First Number: ";
            cin >> numerator;
            cout << "Enter The Second Number: ";
            cin >> denominator;

            if (denominator == 0) {
                // Throw an exception for division by zero
                throw runtime_error("Division by zero is undefined ");
            }

            double result = double(numerator) / denominator; 
            cout << "Result of division: " << result << endl;

        } catch (const runtime_error & e) {
            // Catch and handle the exception
            cout << "Error: " << e.what() << endl;
        } catch (...) {
            // Catch any other exceptions that might occur
            cout << "An unexpected error occurred." << endl;
        }

    return 0;
}
