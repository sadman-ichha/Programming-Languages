#include <stdio.h>

// Function defined for Call By Value
void changeValueByValue(int a) {
    a = a + 2;
    printf("Inside function using Call by value: %d\n", a);
}

// Function defined for Call By Reference
void changeValueByReference(int *a) {
    *a = *a + 2;
    printf("Inside function using Call by reference: %d\n", *a);
}

int main() {
    int num = 5;

    printf("---Call by Value---\n");
    changeValueByValue(num); // Calling function using Call By Value
    printf("After Call by Value: %d\n", num); // Output: 5 (unchanged)

    printf("\n---Call by Reference---\n");
    changeValueByReference(&num); // Calling function using Call By Reference
    printf("After Call by Reference: %d\n", num); // Output: 7 (5 + 2)

    return 0;
}
