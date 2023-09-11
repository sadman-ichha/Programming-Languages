#include <stdio.h>

int main(void){
    int width = 7, height = 5, i, j;

    for (j = 0; j <= height; j++){
        for (i = 1; i <= width; i++){
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}