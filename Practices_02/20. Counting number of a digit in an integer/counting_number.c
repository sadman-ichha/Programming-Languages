#include <stdio.h>

int main() {
    int num, count = 0;

    // Prompt the user to enter a number
    printf("Enter any Number : ");
    scanf("%d", &num); // Read the input number and store it in 'num'

    // Loop to count the number of digits in 'num'
    while (num != 0) {
        num = num / 10; // Remove the rightmost digit by integer division by 10
        ++count; // Increment the count for each removed digit
    }

    // Print the total number of digits in the original number
    printf("Total Number of digits : %d\n", count);

    return 0;
}
