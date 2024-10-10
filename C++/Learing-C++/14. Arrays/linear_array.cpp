#include <iostream>

using namespace std;

int main() {
    int arraySize;
    cout << "Enter Size of Array: ";
    cin >> arraySize;

    // Declare and initialize an array
    int numbers[arraySize];
    
    // Input elements into the array
    for (int i = 0; i < arraySize; i++) {
        cout << "Enter value for index " << i + 1 << ": ";
        cin >> numbers[i];
    }

    // Display array elements
    cout << "Array Elements: ";
    for (int i = 0; i < arraySize; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    // Modify an array element
    int modifiedIndex;
    cout << "Enter the index to modify: ";
    cin >> modifiedIndex;
    
    if (modifiedIndex >= 1 && modifiedIndex <= arraySize) {
        numbers[modifiedIndex - 1] = 10;

        // Display the modified array
        cout << "\nModified Array: ";
        for (int i = 0; i < arraySize; i++) {
            cout << numbers[i] << " ";
        }
    } else {
        cout << "Invalid index for modification." << endl;
    }

    // Find the size of the array
    int sizeOfArray = sizeof(numbers) / sizeof(numbers[0]);
    cout << "\nSize of the Array: " << sizeOfArray << " elements\n\n";

    return 0;
}
