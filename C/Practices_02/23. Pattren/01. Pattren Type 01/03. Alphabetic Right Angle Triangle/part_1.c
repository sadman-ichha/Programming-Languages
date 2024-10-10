#include <stdio.h>
// 03. Alphabetic Right Angle Triangle
// A
// A B
// A B C
// A B C D
// A B C D E

int main()
{
    int num, row, column;

    printf("Enter a number (up to 26): ");
    scanf("%d", &num);

    if (num > 26)
    {
        printf("Please enter a number up to 26.\n");
        return 1; // Exit the program if the input is more than 26
    }

    for (row = 1; row <= num; row++)
    {
        // Inner loop to print letters in each row
        for (column = 1; column <= row; column++)
        {
            printf("%c ", column + 64); // Print the corresponding letter ('A' to 'Z')
        }
        printf("\n"); // Move to the next line after each row
    }

    return 0;
}
