#include <stdio.h>

int main()
{
    FILE *file;
    char name[100];

    file = fopen("sadman_name.txt", "a"); // mode a,w,r

    if (file == NULL)
    {
        printf("Unable to open the file\n");
    }
    else
    {
        printf("File is Opened\n");
        printf("Enter your university name: ");

        // Using fgets() to safely get input from the user
        if (fgets(name, sizeof(name), stdin) != NULL)
        {
            // Writing user input to the file
            fputs(name, file);
            fputs("\n", file);
            printf("File written successfully\n");
        }
        else
        {
            printf("Error reading input\n");
        }

        fclose(file); // Closing the file
    }

    return 0;
}
