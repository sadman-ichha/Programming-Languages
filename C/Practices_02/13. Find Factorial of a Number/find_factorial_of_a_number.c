#include <stdio.h>

int main()
{
    // Variables
    int num, i, fact = 1;

    // Input
    printf("Enter any integer: ");
    scanf("%d", &num);

    // Factorial Calculation
    for (i = 1; i <= num; i++)
    {
        fact = fact * i;
    }

    // Output
    printf("%d is Factorial = %d", num, fact);

    // Return statement
    return 0;
}
