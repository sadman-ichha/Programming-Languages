#include <stdio.h>
int main()
{
    int i = 1; // initialize it with the value 1. This variable will be used to control the loop.

    while (i <= 10) // The loop will continue executing the code inside its body as long as the condition i <= 10 is true.
    {
        printf("i= %d \n", i);
        i++;
    }

    return 0;
}