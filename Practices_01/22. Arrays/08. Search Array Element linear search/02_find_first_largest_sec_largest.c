#include <stdio.h>

int main()
{
    int arrays[] = {5, 12, 32, 10, 15};
    int lenght = sizeof(arrays) / sizeof(arrays[0]); // sizeof method return byts....

    if (lenght < 2)
    {
        printf("arrays should have atleast 2 elements.\n");
    }
    return 0;
}