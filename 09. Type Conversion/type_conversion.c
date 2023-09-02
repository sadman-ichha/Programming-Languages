#include <stdio.h>

int main()
{
    char ch = 'A';

    printf("%c is the character itself"
           "\n",
           ch);

    printf("%d is the decimal ASCII value"
           "\n",
           ch);
    printf("%x is the hexadecimal ASCII value"
           "\n",
           ch);

    return 0;
}
