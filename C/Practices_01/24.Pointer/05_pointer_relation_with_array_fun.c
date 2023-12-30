#include <stdio.h>

// Function prototypes
void swap(int *n1, int *n2); // Swap function prototype
int sum_fun(int *a, int length); // Sum function prototype

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int arr_length = sizeof(arr) / sizeof(arr[0]); // Calculate array length

    int i;
    // Printing array element memory addresses
    for (i = 0; i < 5; i++) {
        printf("Memory Address: %u\n", (void *)&arr[i]);
    }
    
    // Printing the memory address of the array itself
    printf("Memory Address of arr: %u\n", (void *)&arr);

    int sum = 0;
    // Printing array elements and calculating their sum using pointer arithmetic
    for (i = 0; i < 5; i++) {
        printf("%d ", *(arr + i));
        sum = sum + *(arr + i);
    }
    printf("Sum: %d \n", sum);

    int *ptr;
    ptr = &arr[2];
    printf("Array index 2 = %d \n", *(ptr));     // Accessing the value at index 2
    printf("Array index 3 = %d \n", *(ptr + 1)); // Accessing the value at index 3 (next element)
    printf("Array index 0 = %d \n", *(ptr - 2)); // Accessing the value at index 0 (two positions before ptr)

    // Swapping using the swap function
    int num1 = 10, num2 = 20;
    printf("\n--Before Swapping--\n");
    printf("Num1 = %d Num2 = %d \n", num1, num2);
    swap(&num1, &num2); // Call swap function
    printf("--After Swapping--\n");
    printf("Num1 = %d Num2 = %d \n", num1, num2);

    // Calculating sum of the array using sum_fun function
    int result = sum_fun(arr, arr_length);
    printf("Array Sum = %d\n", result);

    return 0;
}

// Swapping Function
void swap(int *n1, int *n2) {
    int temp;
    temp = *(n1);
    *(n1) = *(n2);
    *(n2) = temp;
}

// Sum Function
int sum_fun(int *a, int length) {
    int i, arr_sum = 0;
    for (i = 0; i < length; i++) {
        arr_sum = arr_sum + *(a + i);
    }
    return arr_sum;
}
