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
    // %s is format spec
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
    // 
    char name[20];
    printf("What's Your Name?");
    scanf("%s", name);
    printf("Thnak You, %s\n", name);

    return 0;
}