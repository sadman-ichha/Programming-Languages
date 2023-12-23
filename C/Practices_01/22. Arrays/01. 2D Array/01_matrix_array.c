#include <stdio.h>

int main()
{
    // Declaring Here [3] is Row..[2] is Column.. and initializing a 3x2 matrix.....
    // int matrix[3][2] = {
    //     {10, 20},
    //     {30, 40},
    //     {50, 60},
    // };

    int matrix[3][2];
    int row, column;

    // Calculating the number of rows in the matrix
    int rows_length = sizeof(matrix) / sizeof(matrix[0]); // Number of rows
    // Calculating the number of columns in the matrix
    int columns_length = sizeof(matrix[0]) / sizeof(matrix[0][0]); // Number of columns

    for (row = 0; row < 3; row++)
    {
        for (column = 0; column < 2; column++)
        {
            printf("Enter 2D array Rows 3 and Column 2 : ");
            scanf("%d", &matrix[row][column]);
        }
    }
    printf("\n");
    printf("2D array  : \n");
    // Looping through each row of the matrix
    for (row = 0; row < rows_length; row++)
    {
        // Looping through each column of the matrix
        for (column = 0; column < columns_length; column++)
        {
            // Printing each element of the matrix
            printf("%d ", matrix[row][column]); // Print the element
        }
        printf("\n"); // Move to the next line after printing each row
    }
    return 0;
}
