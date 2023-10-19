#include <stdio.h>

int main()
{
    int myAge = 43; // an int variable

    printf("Value: %d\n", myAge ); // Outputs the value of myAge (43)
    printf("decimal Address: %u\n", &myAge); // Outputs the decimal memory address 
    printf("Hexadecimal Address: %x\n", &myAge); // Outputs the hexadecimal memory address 
    return 0;
}