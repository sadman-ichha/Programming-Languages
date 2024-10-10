
#include <stdio.h> // Including standard input-output library

int main()
{
    int x = 10, y = 20, temp; // Declaring two integer variables x and y and an additional temp variable
    int *ptr1, *ptr2;         // Declaring two integer pointer variables ptr1 and ptr2

    ptr1 = &x; // Assigning the memory address of variable x to ptr1 using the address-of operator (&)
    ptr2 = &y; // Assigning the memory address of variable y to ptr2 using the address-of operator (&)

    printf("x = %d\n", x);   // Printing the value of x
    printf("y = %d\n\n", y); // Printing the value of y with additional new line for formatting

    // Swapping the values of x and y using pointers
    temp = *ptr1;  // temp == 10 or ptr1 == null  // Storing the value pointed by ptr1 (value of x) in temp
    *ptr1 = *ptr2; // ptr1 == 20 or ptr2 == null // Assigning the value pointed by ptr2 (value of y) to ptr1 (x)
    *ptr2 = temp;  // ptr2 == 10 or temp == null  // Assigning the value in temp (initial value of x) to ptr2 (y)

    printf("After swapping\n");
    printf("x = %d\n", *ptr1); // Printing the value pointed by ptr1 (new value of x)
    printf("y = %d\n", *ptr2); // Printing the value pointed by ptr2 (new value of y)

    return 0; // Returning 0 to indicate successful program execution
}
