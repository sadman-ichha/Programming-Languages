#include <stdio.h>

int main(void)
{
    int a = 10;
    int b = 5;
    int result , result2;
    printf("Addition: %d \n", a + b);
    printf("Subtraction: %d \n", a - b);
    printf("Multiplication: %d \n", a * b);
    printf("Division: %d \n", a / b);
    
    //Remaider int from user input numbers
    printf("Enter the first Numbers:");
    scanf("%d", &result);
    printf("Enter the second Numbers:");
    scanf("%d", &result2);
    printf("Reminder: %d \n", result % result2);
}