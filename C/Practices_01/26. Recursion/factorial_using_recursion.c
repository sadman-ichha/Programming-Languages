#include <stdio.h>
// Function declaration
int fact(int num);
int main()
{
    int result = fact(4);
    printf("Factorial of 4 = %d\n", result);
    return 0;
}

int fact(int num)
{
    if (num == 1)
    {
        return 1;
    }
    else
    {
        return num * fact(num - 1);
    }
}