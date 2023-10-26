#include <stdio.h>

int main()
{

    int a = 5; // a = a +5; long from

    a += 10;   // short from
    printf("%d \n", a); //  15
    a -= 10; 
    printf("%d \n", a); // 5
    a *= 10; 
    printf("%d \n", a);//50
    a /= 10; 
    printf("%d \n", a); //5
    a %= 10; 
    printf("%d \n", a); 
    return 0;
}