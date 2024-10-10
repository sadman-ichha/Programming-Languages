#include <stdio.h>

int main()
{
    char a;
    printf("Enter a character: ");
    scanf("%c", &a);

    if (a >= 48 && a <= 57)
    {
        printf("%c is a digit.\n", a);
    }
    else if (a >= 65 && a <= 90)
    {
        printf("%c is an uppercase letter.\n", a);
    }
    else if (a >= 97 && a <= 122)
    {
        printf("%c is an lowercase letter.\n", a);
    }
    else
    {
        printf("Something else.\n");
    }
    // Uppercase to Lowercase && lowercase to Uppercase convert

    char ch;
    printf("Enter second character: ");
    scanf("%c", &ch);

    if (ch >= 'A' && ch <= 'Z')
    {
        printf("Lowercase is %c is %c \n", ch, ch + 32);
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        printf("Lowercase is %c is %c \n", ch, ch - 32);
    }
    else
    {
        printf("Invalid Number");
    }

    return 0;
}
