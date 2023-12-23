#include <stdio.h>

int main()
{
    while (1) // The program enters an infinite loop using while (1) (equivalent to while (true)), which means that the loop will run indefinitely.
    {
        int num, i, result;
        printf("Enter Your Digit: ");
        scanf("%d", &num);
        for (i = 1; i <= 10; i++)

        {
            result = num * i;
            printf("%d * %d = %d  \n", num, i, result);
        }
    }

    return 0;
}
