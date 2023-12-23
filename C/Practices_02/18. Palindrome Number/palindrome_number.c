#include <stdio.h>

int main()
{
    int num, reversedNum = 0, temp, rem;

    printf("Enter Any Number : ");
    scanf("%d", &num);

    // Store the number in a temporary variable
    temp = num;

    // Loop to extract digits and calculate the reversedNum
    while (temp != 0)
    {
        rem = temp % 10;                        // Extract the rightmost digit
        reversedNum = (reversedNum * 10) + rem; // Add the extracted digit to the running reversedNum
        temp /= 10;                             // The temp /= 10; line is equivalent to temp = temp / 10; and it's a shorthand operator in C that combines division (/) with assignment (=). It divides the value of temp by 10 and stores the result back into temp. This operation effectively moves to the next digit from right to left in the number during each iteration of the loop until there are no more digits left (when temp becomes zero).
    }

    if (reversedNum == num)
    {
        printf("%d is Palindrime Number\n", num);
    }
    else
    {
        printf("%d is Not Palindrime Number\n", num);
    }
    return 0;
}