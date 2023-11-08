#include <stdio.h>
int main()
{
    int i = 0;
    out:
    printf("%d /t", i);
    i++;
    if (i < 5)
    {
        goto out;
    }

   
}