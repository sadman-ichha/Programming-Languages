#include <stdio.h>

// Binary Right Angle Triangle
// 1 
// 1 0 
// 1 0 1 
// 1 0 1 0 
// 1 0 1 0 1 
// 1 0 1 0 1 0 
// 1 0 1 0 1 0 1 
// 1 0 1 0 1 0 1 0 
// 1 0 1 0 1 0 1 0 1 
// 1 0 1 0 1 0 1 0 1 0

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
            printf("%d ", column % 2); // Print whether the column number is odd or even
        }
        printf("\n");
    }

    return 0;
}
