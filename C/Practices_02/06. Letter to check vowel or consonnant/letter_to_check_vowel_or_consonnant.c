#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;

    printf("Enter a letter: ");
    scanf("%c", &ch);

    // Convert the character to lowercase to handle both uppercase and lowercase vowels.
    ch = tolower(ch);

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
        printf("Letter is a vowel\n");
    } else {
        printf("Letter is a consonant\n");
    }

    return 0;
}
