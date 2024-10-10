#include <stdio.h>
#include <string.h>

int main()
{
    char string1[15] = "Bangladesh";
    char string2[15] = "India";
    char temp[15];

    printf("Before swapping:\n");
    printf("String 1: %s\n", string1);
    printf("String 2: %s\n", string2);

    // Swapping process using a temporary variable
    
    strcpy(temp, string1);    // Copy string1 to temp
    strcpy(string1, string2); // Copy string2 to string1
    strcpy(string2, temp);    // Copy temp (which holds string1) to string2

    printf("\nAfter swapping:\n");
    printf("String 1: %s\n", string1);
    printf("String 2: %s\n", string2);

    return 0;
}
