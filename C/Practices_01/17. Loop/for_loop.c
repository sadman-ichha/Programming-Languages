#include <stdio.h>

int main(void){
    // How to find odd e.g 1,3,5 numbers from 1 to 100
    int i;
    for (i = 1; i <= 100; i++){
        if (i % 2 == 1){
            printf("%d is Odd \n", i);
        }
    }

    // How to find even e.g 2,4,6 numbers from 1 to 100
    int j;
    for (j = 2; j <= 100; j+=2){
        if (j % 2 == 0){
            printf("%d is even \n", j);
        }
    }

    return 0;
}