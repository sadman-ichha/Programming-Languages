#include <stdio.h>

int main()
{
    int num, sum = 0, temp, rem;


    printf("Enter Any Number : ");
    scanf("%d", &num);

    // Store the number in a temporary variable
    temp = num;

    // Loop to extract digits and calculate the sum
    while (temp != 0)
    {
        rem = temp % 10; // Extract the rightmost digit
        sum = sum + rem; // Add the extracted digit to the running sum
        temp = temp / 10; // Remove the rightmost digit from the number
    }
    printf("Sum of Digits = %d\n", sum);

    return 0;
}
