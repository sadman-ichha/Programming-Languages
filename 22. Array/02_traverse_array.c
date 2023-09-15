#include <stdio.h>

int main(){

    int my_array[5];
    my_array[0] = 5;
    my_array[1] = 10;
    my_array[2] = 15;
    my_array[3] = 20;
    my_array[4] = 25;

    printf("My Array is value = %d \n", my_array[2*2/4]); // we can [] calculation +-*/ 
     int index = 2*2/2+1;
    printf("My Array is value = %d \n", my_array[index]);
    printf("\n");

    // using for loop 
    int i ;
    for(i =0; i<=4; i++){
      printf("My array %d index %d\n",i, my_array[i]);
    }
    
    
    return 0;
}