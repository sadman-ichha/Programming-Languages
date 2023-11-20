#include <stdio.h>

int main()
{
    int num, row, column;

    // Prompt the user to enter a number
    printf("Enter a number: ");
    scanf("%d", &num); // Read the user input

    // Loop to print the pattern
    for (row = 1; row <= num; row++)
    {
        // Inner loop to print numbers in each row
        for (column = 1; column <= row; column++)
        {
            printf("%d ", column); // Print the current column number
        }
        printf("\n"); // Move to the next line after each row
    }

    return 0; // Indicates successful program execution
}
