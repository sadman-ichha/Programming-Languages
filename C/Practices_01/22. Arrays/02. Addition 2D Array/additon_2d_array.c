#include <stdio.h>

int main()
{
    // Declaring Here [3] is Row..[2] is Column.. and initializing a 3x2 matrix.....

    int matrix_A[3][2], matrix_B[3][2], matrix_C[3][2];
    int row, column;
    int rows_length = sizeof(matrix_A) / sizeof(matrix_A[0]);          // Number of rows
    int columns_length = sizeof(matrix_A[0]) / sizeof(matrix_A[0][0]); // Number of columns

    // Inputs for MatrixA
    for (row = 0; row < 3; row++)
    {
        for (column = 0; column < 2; column++)
        {
            printf("Enter 2D array Rows [%d] [%d] : ", row, column);
            scanf("%d", &matrix_A[row][column]);
        }
    }
    // Prints Matrix_A
    for (row = 0; row < rows_length; row++)
    {
        for (column = 0; column < columns_length; column++)
        {
            printf("%d ", matrix_A[row][column]);
        }
        printf("\n");
    }
    // Inputs for Matrix_B
    for (row = 0; row < 3; row++)
    {
        for (column = 0; column < 2; column++)
        {
            printf("Enter 2D array Inputs_B [%d] [%d] : ", row, column);
            scanf("%d", &matrix_B[row][column]);
        }
    }
    // Prints Matrix_B
    for (row = 0; row < rows_length; row++)
    {
        for (column = 0; column < columns_length; column++)
        {
            printf("%d ", matrix_B[row][column]);
        }
        printf("\n");
    }

    // addition matrix_C = Matrix_A + Matrix_B
    for (row = 0; row < 3; row++)
    {
        for (column = 0; column < 2; column++)
        {
            matrix_C[row][column] = matrix_B[row][column] + matrix_B[row][column];
        }
    }
    // Prints Matrix_B
    printf("Matrix_A + Matrix_B :\n");
    for (row = 0; row < rows_length; row++)
    {
        for (column = 0; column < columns_length; column++)
        {
            printf("%d ", matrix_C[row][column]);
        }
        printf("\n");
    }

    return 0;
}
