#include <stdio.h>

int main()
{
    char operator;
    double num1, num2;
    printf("Choose Your Operator (+, -, *, /): ");
    scanf(" %c", &operator); // Added a space before %c to consume leading whitespace
    printf("Enter Two Numbers: ");
    scanf("%lf %lf", &num1, &num2); // Used space to separate format specifiers

    switch (operator)
    {
    case '+':
    {
        printf("%.2lf + %.2lf = %.2lf\n", num1, num2, num1 + num2);
        break;
    }

    case '-':
    {
        printf("%.2lf - %.2lf = %.2lf\n", num1, num2, num1 - num2);
        break;
    }

    case '*':
    {
        printf("%.2lf * %.2lf = %.2lf\n", num1, num2, num1 * num2);
        break;
    }

    case '/':
    {
        if (num2 == 0)
        {
            printf("Division by zero is not allowed.\n");
        }
        else
        {
            printf("%.2lf / %.2lf = %.2lf\n", num1, num2, num1 / num2);
        }
        break;
    }

    default:
    {
        printf("Invalid operator is Chosen!\n");
    }
    }

    return 0;
}
