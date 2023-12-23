#include <stdio.h> // Including standard input-output library

int main()
{
    FILE *file; // Declaring a file pointer variable 'file'

    file = fopen("sadman.txt", "w"); // Attempting to open "sadman.txt" file in write mode

    if (file == NULL)
    {
        // Checking if the file pointer 'file' is NULL, indicating the file opening failed
        printf("Don't Find the File\n"); // Printing a message indicating the file wasn't found
        fclose(file);                    // Closing the file stream (if it was opened)
    }
    else
    {
        // If the file opening was successful
        printf("File is Opened\n"); // Printing a message indicating the file is opened
    }

    return 0; // Returning 0 to indicate successful program execution
}

/*
Note: It's essential to handle file-related operations carefully,
checking for errors while opening, reading, or writing files to ensure proper execution and
avoid unexpected behavior in programs.
*/