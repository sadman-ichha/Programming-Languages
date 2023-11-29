#include <stdio.h>

// Define a union named 'test1' containing two members 'x' and 'y'
union test1
{
    int x, y;
};

int main()
{
    union test1 t1; // Declare a variable 't1' of type 'union test1'

    t1.x = 5; // Assign value 5 to 'x'

    // Print the value of 'x' and 'y' (Note: accessing 'y' after setting 'x' might lead to unexpected results)
    printf("%d\n", t1.x); // Print the value of 'x' (which is 5)
    printf("%d\n", t1.y); // Print the value of 'y' (this may produce unpredictable results)

    t1.y = 10; // Assign value 10 to 'y'

    // Print the updated values of 'x' and 'y'
    printf("%d\n", t1.x); // Print the value of 'x' (which might have changed due to sharing memory with 'y')
    printf("%d\n", t1.y); // Print the value of 'y' (which is 10)

    return 0;
}

/*
t1.x = 5;: Assigns 5 to t1.x.
printf(" %d\n", t1.x);: Prints the value of t1.x, which is 5.
printf(" %d\n", t1.y);: Prints the value of t1.y,
but this might give unpredictable results since t1.y was not initialized directly,
and its value is not guaranteed to be the same as t1.x due to sharing the same memory.
*/