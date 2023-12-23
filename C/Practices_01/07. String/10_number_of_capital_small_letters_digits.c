#include <stdio.h>
#include <string.h>
int main()
{
    char my_string[120];
    int i, small, capital, digit;

    printf("Please Enter a String: ");
    gets(my_string);
    i = small = capital = digit = 0;

    while (my_string[i] != '\0')
    {
        if (my_string[i] >= 65 && my_string[i] <= 90)
        {
            capital++;
        }
        else if (my_string[i] >= 97 && my_string[i] <= 122)
        {
            small++;
        }
        else if (my_string[i] >= 48 && my_string[i] <= 57)
        {
            digit++;
        }

        i++;
    }

    printf("Number of Capital= %d\n", capital);
    printf("Number of small= %d\n", small);
    printf("Number of digit= %d\n", digit);

    return 0;
}