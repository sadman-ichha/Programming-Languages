#include <stdio.h>
#include <string.h>

int main()
{
    // String concatenation using strcat() method ....
    char name_1[] = "My name is ";
    char name_2[] = "Sadman Ichha";

    strcat(name_1, name_2);
    printf("String_1: %s\n", name_1);

    // String concatenation using loop....
    // Define two strings to be concatenated
    char name_3[] = "This is ";
    char name_4[] = "Programming C\n";

    // Initialize variables for iteration and length calculation
    int i = 0, len = 0, j = 0;

    // Calculate the length of the first string (name_3)
    while (name_3[i] != '\0')
    {
        i++;   // Increment i to move through each character
        len++; // Increment len to keep track of the length of name_3
    }

    // Iterate through the second string (name_4) to concatenate it to name_3
    while (name_4[j] != '\0')
    {
        name_3[len + j] = name_4[j]; // Append each character of name_4 to name_3
        j++;                         // Move to the next character in name_4
    }

    // Print the concatenated string
    printf("%s\n", name_3);

    return 0;
}
