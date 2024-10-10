#include <stdio.h>
#include <string.h>

int main()
{
    char my_string[] = "madam";
    int length = strlen(my_string);

    printf("String Length : %d\n", length);
    printf("Original String: %s\n", my_string);

    int start = 0;
    int end = length - 1;
    char temp[length + 1]; // Declare temp to store the reversed string

    // Reverse the string
    while (start < length)
    {
        temp[start] = my_string[end];
        start++;
        end--;
    }
    temp[start] = '\0'; // Add null terminator to mark the end of the reversed string

    printf("Reversed String: %s\n", temp);

    // Compare the original string with the reversed string to check for palindrome
    int compare_result = strcmp(my_string, temp);
    if (compare_result == 0)
    {
        printf("String is a Palindrome\n");
    }
    else
    {
        printf("String is not a Palindrome\n");
    }

    return 0;
}
