#include <stdio.h>

int main()
{
    FILE *file;
    char name[100] = "I'm Sadman Ichha. We're learing C..";
    int i = 0, length = 0;
    while (name[i] != '\0')
    {
        i++;
        length++;
    }
    printf("length = %d\n", length);

    file = fopen("sadman_name.txt", "w");

    if (file == NULL)
    {
        printf("Don't Find the File\n");
    }
    else
    {
        printf("File is Opened\n");
        for (i = 0; i < length; i++)
        {
            fputc(name[i], file);
        }
        printf("File Written successfully\n");
        fclose(file);
    }

    return 0;
}
