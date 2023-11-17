#include <stdio.h>

int main()
{
    int num, i, sum = 0;
    printf("Enter The Last Number of the Series : ");
    scanf("%d", &num);
    printf("1+2+3+....+%d", num);
    // Loop to calculate the sum of the series from 1 to 'num'
    for (i = 1; i <= num; i ++)
    {
        sum = sum + i; // Add 'i' to 'sum' in each iteration
    }

    // Print the total sum of the series
    printf(" = %d", sum);

    return 0;
}
