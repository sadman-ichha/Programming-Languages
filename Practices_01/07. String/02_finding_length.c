#include <stdio.h>
#include <string.h>

int main()
{
    // finding length of String using strlen() function
    char name[] = "Sadman Ichha";
    int name_length = strlen(name);
    printf("%s\n", name);                                        // Use %s to print the string
    printf("Length of the name with strlen: %d\n", name_length); // Print the length separately

    // finding length of String without strlen() function

    int i = 0, len = 0;
    while (name[i] != '\0')
    {
        i++;
        len++;
    }
    printf("Length of the name without strlen: %d\n", len);

    return 0;
}
