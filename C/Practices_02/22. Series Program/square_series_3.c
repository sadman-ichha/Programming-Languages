#include <stdio.h>

int main()
{
    int num, i, sum = 0;

    // Prompt the user to enter the last number
    printf("Enter last number : ");
    scanf("%d", &num); // Read the input number and store it in 'num'
    printf("1^1 + 2^2.... + %d^%d ", num, num);
    // Loop to calculate the sum of squares from 1 to 'num'
    for (i = 1; i <= num; i++)
    {
        sum = sum + i * i; // Add the square of 'i' to 'sum' in each iteration
    }

    // Print the total sum of squares
    printf("= %d", sum);

    return 0;
}
