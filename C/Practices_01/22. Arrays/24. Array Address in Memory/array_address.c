#include <stdio.h>

int main(){
    char my_array[5];
    my_array[0] = 5;
    my_array[1] = 10;
    my_array[2] = 15;
    my_array[3] = 20;
    my_array[4] = 25;

    printf("Memory address = %u\n", (unsigned int)&my_array); // type cast (unsigned int)
    printf("Memory address = %u\n", (unsigned int)&my_array[0]);
    printf("Memory address = %u\n", (unsigned int)&my_array[1]);
    printf("Memory address = %u\n", (unsigned int)&my_array[2]);
    printf("Memory address = %u\n", (unsigned int)&my_array[3]);
    printf("Memory address = %u\n", (unsigned int)&my_array[4]);
    return 0;
}