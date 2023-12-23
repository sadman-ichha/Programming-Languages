#include <stdio.h>
#include <string.h>

int main()
{
    char ch_1[] = "Sadman Ichha";
    char ch_2[] = "Sadman Ichha";
    int compare_result = strcmp(ch_1, ch_2);
    if (compare_result == 0)
    {
        printf("Strings Are Equal\n");
    }
    else
    {
        printf("Strings Are Not Equal\n");
    }

    return 0;
}