#include <iostream>
using namespace std;

// Function to receive and print an array
void passArray(int arr[], int length);

int main()
{

    int arr[] = {1, 2, 3, 4, 5, 6};
    int length = sizeof(arr) / sizeof(arr[0]);

    // Call the function to pass and print the array
    passArray(arr, length);

    return 0;
}

// Function to receive and print an array
void passArray(int arr[], int length)
{
    // Print the received array
    cout << "Print Array: ";
    for (int i = 0; i < length; i++)
    {
        cout << arr[i];
        if (i < length - 1)
        {
            cout << ", ";
        }
    }
    cout << endl;
}
