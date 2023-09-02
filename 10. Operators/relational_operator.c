#include <stdio.h>
#include <stdbool.h>

int main()
{
    int a = 10, b = 5;
    // >
    printf("a is greater than b %d \n", a > b); // 1 true
    // <
    printf("a is not greater than b %d \n", a < b); // 0 false
    // ==
    printf("a is b %d \n", a == b); // 0 false
    // !=
    printf("a is not b %d \n", a != b); // 1 true

    return 0;
}
