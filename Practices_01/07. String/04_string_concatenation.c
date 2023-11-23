#include <stdio.h>
#include <string.h>

int main()
{
   // String concatenation using strcat() method ....
    char name_1[] = "My name is ";
    char name_2[] = "Sadman Ichha..";

    strcat(name_1, name_2);
    printf("String_1: %s\n", name_1);

    return 0;
}
