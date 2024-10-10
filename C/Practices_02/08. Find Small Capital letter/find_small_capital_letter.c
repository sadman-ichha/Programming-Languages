#include <stdio.h>

int main()
{
    char ch;
    printf("Enter any Letter: ");
    scanf("%c", &ch);
    if (ch >= 'A' && ch <= 'Z')
    {
        printf("Capital Letter");
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        printf("Small Letter");
    }
    else
    {
        printf("Not a Letter \n");
    }

    return 0;
}