#include <stdio.h>
int main()
{
    int num1, num2, a = 1, b = 2, sum = 0;
    printf("Enter Num1 and Num2: ");
    scanf("%d %d", &num1, &num2);
    printf("1*2 + 2*3 + 3*4 ......... + %d*%d", num1, num2);

    while (a <= num1 && b <= num2)
    {
        sum = sum + a * b;
        a += 1;
        b += 1;
    }

    printf("= %d", sum);
    return 0;
}
