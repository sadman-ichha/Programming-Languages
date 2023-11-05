#include <stdio.h>

int main()
{
    int num1, num2, num3;
    printf("Enter three integers: ");
    scanf("%d %d %d", &num1, &num2, &num3); // Corrected scanf format and added & before num1 and num2

    if (num1 > num2 && num1 > num3)
    {
        printf("First number is larger: %d\n", num1);
    }
    else if (num2 > num1 && num2 > num3)
    {
        printf("Second number is larger: %d\n", num2);
    }
    else if (num3 > num1 && num3 > num2)
    {
        printf("Third number is larger: %d\n", num3);
    }

    else
    {
        printf("Numbers are equal\n");
    }

    return 0;
}
