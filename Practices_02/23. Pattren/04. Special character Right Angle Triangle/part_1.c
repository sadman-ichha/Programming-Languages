#include <stdio.h>
// Special character Right angle Triangle 
// * 
// * * 
// * * * 
// * * * * 
// * * * * * 
int main() {
    int num, row, column;
    char sp_char; // Change the type to char for storing a single character

    printf("Choice Special Character: ");
    scanf(" %c", &sp_char); // Include a space before %c to consume any whitespace/newline left in the input buffer
    
    printf("Enter a number: ");
    scanf("%d", &num);

    // Loop to print the pattern
    for (row = 1; row <= num; row++) {
        // Inner loop to print characters in each row
        for (column = 1; column <= row; column++) {
            printf("%c ", sp_char); // Print the specified character
        }
        printf("\n"); // Move to the next line after each row
    }

    return 0;
}
