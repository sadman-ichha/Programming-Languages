#include <stdio.h>

int main()
{
    int day_num;
    printf("Enter day Number: ");
    scanf("%d", &day_num);

    switch (day_num)
    {
        // (0 - 5) case same out that's why (0 - 5) case step by step
    case 0:
    case 1:
    case 3:
    case 4:
    case 5:
        printf("Work day\n");
        break;
        // (6 - 7) case same out that's why (6 - 7) case step by step
    case 6:
    case 7:
        printf("Off Day \n");
        break;
    default:
        printf("Wrong Number\n");
        break;
    }

    return 0;
}