#include <stdio.h>
int main()
{
    int i, j, rows = 5;

    for (i = 0; i < rows; i++){
        for (j = 0; j <= i; j++){
            printf("* ");
        }
        printf("\n");
    }

    // Full pyramid
    for (i = 0; i < rows; i++){
        for (j = i; j < rows; j++){
            printf(" ");
        }

        for (j = 0; j < (2 * i) - 1; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}