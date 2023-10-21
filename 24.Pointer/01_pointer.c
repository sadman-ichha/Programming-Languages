#include <stdio.h>

int main()
{
    int myAge = 43; // an int variable

    printf("Value: %d\n", myAge);                // Outputs the value of myAge (43)
    printf("decimal Address: %u\n", &myAge);     // Outputs the decimal memory address
    printf("Hexadecimal Address: %x\n", &myAge); // Outputs the hexadecimal memory address
                                                 // ************************

    char ch = 'a';
    char *ptr;
    ptr = &ch;
    printf("%c\n", ch);   // outputs ch variable value
    printf("%c\n", *ptr); // outputs ch variable value

    // *********Intger type************

    int x = 10, y = 20;
    int *ptr1,*ptr2;
    ptr1 = &x;
    ptr2 = &y;
    int sum ;
    sum = *ptr1 + *ptr2;

    printf("Sum : %d \n", sum);

    return 0;
}