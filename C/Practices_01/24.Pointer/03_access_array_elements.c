#include <stdio.h> // Including standard input-output library

int main() {
    int array[5] = {10, 20, 30, 40, 50}; // Initializing an integer array with 5 elements
    int *ptr_array, i; // Declaring an integer pointer ptr_array and an integer i for loop iteration

    ptr_array = &array[0]; // Assigning the memory address of the first element of the array to ptr_array

    for (i = 0; i < 5; i++) {
        printf("Pointer Array Access : %d\n", *ptr_array); // Printing the value pointed by ptr_array
        ptr_array++; // Incrementing the pointer to point to the next element in the array
    }

    return 0; // Returning 0 to indicate successful program execution
}
