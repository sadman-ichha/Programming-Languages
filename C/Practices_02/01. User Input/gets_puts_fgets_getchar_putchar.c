#include <stdio.h>

int main()
{

    char name[50];
    printf("Enter your name: ");
    gets(name);
    printf("Hello ");
    puts(name);
    
    // get char
    char character;
    printf("Enter any charcater: ");
    character = getchar();
    printf("You entered: ");
    putchar(character);

    return 0;
}