#include <stdio.h>

// Called By Value...
void changeValueByValue(int a) {
    a = a + 2;
    printf("Inside function using Call by value: %d\n", a);
}

// Called By Reference...
void changeValueByReference(int *a) {
    *a = *a + 2;
    printf("Inside function using Call by reference: %d\n", *a);
}

int main() {
    int num = 5;

    changeValueByValue(num);
    printf("After Call by Value: %d\n", num); // Output: 5 (unchanged)

    changeValueByReference(&num);
    printf("After Call by Reference: %d\n", num); // Output: 7 (5 + 2)

    return 0;
}
