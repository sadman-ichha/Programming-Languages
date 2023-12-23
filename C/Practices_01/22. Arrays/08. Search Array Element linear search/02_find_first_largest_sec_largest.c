#include <stdio.h>

// Find First and second largest number from unsorted arrey
// array index still unchanged
int main()
{
    int arrays[] = {5, 12, 32, 10, 15, 100};
    int lenght = sizeof(arrays) / sizeof(arrays[0]); // sizeof method return byts....

    if (lenght < 2)
    {
        printf("arrays should have atleast 2 elements.\n");
    }
    int first, second, i;
    if (arrays[1] > arrays[0])
    {
        first = arrays[1];
        second = arrays[0];
    }
    else
    {
        first = arrays[0];
        second = arrays[1];
    }
    // printf("first = %d \n second = %d\n", first, second);
    for (i = 2; i < lenght; i++)
    {
        if (arrays[i] > first)
        {
            second = first;
            first = arrays[i];
        }
        else if (arrays[i] > second && arrays[i] != first)
        {
            second = arrays[i];
        }
    }

    printf("first large = %d \nsecond large = %d\n", first, second);

    return 0;
}