#include <stdio.h>

int main() {
    // Variables
    int num, i, count = 0;

    // Input
    printf("Enter any integer: ");
    scanf("%d", &num);

    // Find prime number
    for (i = 2; i < num; i++) {
        if (num % i == 0) {  // Use the modulo operator for remainder, not division
            count++;
            break;
        }
    }
    
    if (count == 0 && num > 1) {  // Check if count is still 0 and num is greater than 1
        printf("Prime\n");
    } else {
        printf("Not Prime\n");
    }

    // Return  statement
    return 0;
}
