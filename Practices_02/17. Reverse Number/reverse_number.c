// #include <stdio.h>

// int main() {
//     int num, reversedNum = 0, remainder;

//     // Input the number to be reversed
//     printf("Enter a number: ");
//     scanf("%d", &num);

//     // Reversing the number
//     while (num != 0) {
//         remainder = num % 10;
//         reversedNum = reversedNum * 10 + remainder;
//         num /= 10;
//     }

//     // Printing the reversed number
//     printf("Reversed number: %d\n", reversedNum);

//     return 0;
// }

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
        temp = temp / 10;                       // Remove the rightmost digit from the number
    }
    printf("Reverse Number = %d\n", reversedNum);

    return 0;
}
