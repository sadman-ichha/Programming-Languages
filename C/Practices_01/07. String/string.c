#include <stdio.h>

int main()
{
    // approach one
    char myName[10];
    myName[0] = 'S';
    myName[1] = 'A';
    myName[2] = 'D';
    myName[3] = 'M';
    myName[4] = 'A';
    myName[5] = 'N';
    // %s is format spec String
    printf("myName:  %s \n", myName);

    // approach two
    char myName2[20] = {'S', 'A', 'D', 'M', 'A', 'N'};
    printf("myName two: %s \n", myName2);
    // approach three
    char myName3[20] = "Sadman";
    printf("myName three: %s \n", myName3);
    // myName three indexing
    printf("myName three index 0 = %c \n", myName3[0]);
    printf("myName three index 3 = %c \n", myName3[3]);

    // Display string character-wise ***************************
    char sadman_name[] = "SADMAN";
    int i = 0;
    // using for loop
    for (i = 0; sadman_name[i] != '\0'; i++)
    {
        printf("%c\n", sadman_name[i]);
    }
    // USING WHILE LOOP
    // Iterate through each character of the string until the null terminator ('\0') is encountered
    while (sadman_name[i] != '\0')
    {
        printf("%c\n", sadman_name[i]);
        i++;
    }
    // USER INPUTS
    char name[20];
    printf("What's Your Name?\n");
    gets(name);
    printf("Thnak You, %s\n", name);

    return 0;
}