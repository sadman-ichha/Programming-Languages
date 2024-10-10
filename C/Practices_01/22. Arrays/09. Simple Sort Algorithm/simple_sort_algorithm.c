#include <stdio.h>

int main(){
    int numbers[] = {1, 11, 2, 10, 13, 18, 21, 3, 3, 5, 7, 7, 2, 66};
    int i, j, temp;
    int length = sizeof(numbers) / sizeof(numbers[0]); // 

    // Sorting array using the bubble sort algorithm
    for(i = 0; i < length; i++){
        for(j = 0; j < length; j++){
            if(numbers[i] < numbers[j]){
                // Swap the elements if they are in the wrong order
                temp = numbers[i];
                numbers[i] = numbers[j];
                numbers[j] = temp;
            }
        }
    }

    // Printing the sorted array
    for(i = 0; i < length; i++){
        printf("%d ",numbers[i]);
    }

    return 0;
}

