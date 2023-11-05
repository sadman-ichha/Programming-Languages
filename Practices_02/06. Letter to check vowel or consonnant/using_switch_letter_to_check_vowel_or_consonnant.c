#include <stdio.h>
#include <ctype.h>

int main()
{
    char ch;

    printf("Enter a letter: ");
    scanf("%c", &ch);

    // Convert the character to lowercase to handle both uppercase and lowercase vowels.
    ch = tolower(ch);

    switch (ch)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        printf("Letter is Vowel \n", ch);
        break;
    default:
        printf("Letter is Consonnat \n", ch);
    }
    return 0;
}