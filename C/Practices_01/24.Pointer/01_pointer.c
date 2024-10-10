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
    ptr = &ch;                              // pointer point ch value
    printf("ch variable value = %c\n", ch); // outputs ch variable value
    printf("%c\n", *ptr);                   // outputs ch variable value

    // *********Intger type************

   int x = 10, y = 20; // Declaring two integer variables x and y, and assigning values 10 and 20 respectively
    int *ptr1, *ptr2; // Declaring two integer pointer variables ptr1 and ptr2

    ptr1 = &x; // Assigning the memory address of variable x to ptr1 using the address-of operator (&)
    ptr2 = &y; // Assigning the memory address of variable y to ptr2 using the address-of operator (&)

    int sum; // Declaring an integer variable sum
    sum = *ptr1 + *ptr2; // Dereferencing ptr1 and ptr2 (getting values at the addresses they point to) and adding them, then assigning the result to sum

    printf("Sum : %d \n", sum); // Printing the value of sum using %d format specifier

    // Printing the memory address of ptr1
    printf("Address of ptr1 : %d \n", (void *)&ptr1); // Using %p format specifier to print the address of ptr1 (casted to void *)
    
    return 0;
}