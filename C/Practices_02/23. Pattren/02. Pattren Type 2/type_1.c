#include <stdio.h>
// 1 2 3 4 5
// 1 2 3 4
// 1 2 3
// 1 2
// 1
int main()
{
    int num, row, column;

    printf("Enter a number: ");
    scanf("%d", &num);

    // Loop to print the pattern
    for (row = num; row >= 1; row--)
    {
        for (column = 1; column <= row; column++)
        {
            printf("%d ", column); // Print the specified character
        }
        printf("\n"); // Move  to to the next line after each row
    }

    return 0;
}
