#include <stdio.h>

int main(){
    int scores [5];
    scores[0]= 45;
    scores[1]= 56;
    scores[2]= 89;
    scores[3]= 96;
    scores[4]= 33;

    // Find sum of scores
    int sum =0, i;
    for(i=0; i<5; i++){
       sum =sum +scores[i]; 
    }
    printf("Sum = %d\n",sum);
    // Find average scores
    printf("Average = %d \n", sum/5);

    // Find max scores
    int max = scores[0];

    for(i =1 ; i<5; i++){
        if(scores[i] > max){
         max = scores[i];
      } 
    }
    printf("Max = %d\n",max);
    
    return 0;
}