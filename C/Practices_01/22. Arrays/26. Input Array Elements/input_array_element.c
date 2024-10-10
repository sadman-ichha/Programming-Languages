#include <stdio.h>

int main() {
    int size = 5;
    int nums[size];
    int i, sum, avg, max;

    printf("Input 5 numbers: \n");
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
