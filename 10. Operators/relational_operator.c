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

    //
    int x = 5, y = 5;
    
    printf("x is greater than y %d \n", x>y); // 0 false
    printf("x is equal y %d \n", x>=y); // 1 true



    return 0;
}
