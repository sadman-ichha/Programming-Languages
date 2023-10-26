#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    // c language int/short variable declear bool variable binary 0 =true either 1=false

    short is_logged_in = 0;
    if (is_logged_in == 0)
    {
        printf("Logged In \n");
    }
    else
    {
        printf("Logged out\n");
    }
    // with header file <stdbool.h>
    bool is_logged_out = false;
    if (is_logged_out)
    {
        printf("Logged In \n");
    }
    else
    {
        printf("Logged out\n");
    }

    return 0;
}