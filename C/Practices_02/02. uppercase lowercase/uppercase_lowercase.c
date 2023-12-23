#include <stdio.h>

int main() {
    char lower;
    char upper;
    printf("Enter any lowercase letter: ");
    scanf(" %c", &lower); // Added a space before %c to consume any leading whitespace.

    if (lower >= 'a' && lower <= 'z') { // Check if the input is a lowercase letter
        upper = lower - 32; // Convert to uppercase by subtracting 32
        printf("The Uppercase letter: %c\n", upper);
    } else {
        printf("Not a lowercase letter.\n");
    }

    return 0;
}
