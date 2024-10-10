#include <stdio.h>
int main(){
// break statement 
    int i;
    for(i = 0; i<100; i++){
        if(i == 10){
            break;
        }  
      printf("i = %d\n", i); 
    };

    printf("\n \n");

 // continue statement 
   int j;
    for (j = 0; j < 100; j++) {
        if (j % 3 == 0 || j % 5 == 0 || j % 6 == 0) {
            continue; // Skip the rest of the loop body for j divisible by 3, 5, or 6
        }
        printf("j = %d\n", j);
    }


    return 0;
}