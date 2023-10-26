#include <stdio.h>

int main() {
    int i,size, sum, avg, max;

    printf("Enter array length:");
    scanf("%d",&size);
    int nums[size];

    printf("Input numbers: \n");
    for (i = 0; i < size; i++) {
      scanf("%d", &nums[i]);
    }

    sum = 0;
    max = nums[0];
    for (int i = 0; i < size; i++) {
        sum = sum + nums[i];
        if (max < nums[i]) {
            max = nums[i];
        }
    }

    avg = sum / size; // avg value
    printf("Sum : %d\n", sum);
    printf("Avg : %d\n", avg);
    printf("Max : %d\n", max);

    return 0;
}
