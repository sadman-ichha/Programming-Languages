#include <stdio.h>
int main()
{
    int i = 1;

out:{
    printf("%d \t", i);
    i++;
}

    if (i < 5){
        goto out; // goto statement level here
    }
}