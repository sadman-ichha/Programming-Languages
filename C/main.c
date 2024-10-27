#include <stdio.h>

int main(void)
{
    int alive = 1;
    int hisNeed = 0;

    if (alive)
        if (!hisNeed)
            printf("Don't remember me\n");
        else
            printf("He always pokes me!\n");
    else
        printf("He was a good person\n");

    return 0;                    //sadman-ichha
}
