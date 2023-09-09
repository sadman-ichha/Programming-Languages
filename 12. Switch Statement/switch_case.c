#include <stdio.h>

int main()
{
    int day_num;
    printf("Enter day Number: ");
    scanf("%d", &day_num);

    switch (day_num)
    {
    case 0:
    case 1:
    case 3:
    case 4:
    case 5:
        printf("Work day\n");
    case 6:
    case 7:
        printf("Off Day \n");
    default:
        printf("Wrong Number\n");
    }

    return 0;
}