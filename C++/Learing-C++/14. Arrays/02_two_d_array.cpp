#include <iostream>

using namespace std;

int main() {
    // Define the size of the 2D array
    const int rows = 3;
    const int cols = 4;

    // Declare a 2D array
    int twoDArray[rows][cols];

    // Input values into the 2D array
    cout << "Enter values for the 2D array:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << "Enter value for element at position [" << i << "][" << j << "]: ";
            cin >> twoDArray[i][j];
        }
    }

    // Display the 2D array
    cout << "\n2D Array:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << twoDArray[i][j] << " ";
        }
         cout << "\n";
    }
cout << "\n \n";
    return 0;
}
