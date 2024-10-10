#include <stdio.h>
#include <stdlib.h>

int main()
{ // Dynamically allocate memory using malloc()
    printf("---Memory Allocation using calloc--- \n");
    int *maloc_ptr;
    maloc_ptr = (int *)malloc(5 * sizeof(int));
    if (maloc_ptr == NULL)
    {
        printf("Memory not Allocation using malloc \n");
        exit(0);
    }
    else
    {
        printf("Memory Allocation Successful using malloc.\n");
        maloc_ptr = (int *)realloc(maloc_ptr, 10 * sizeof(int));
        printf("Memory successfully re-allocated using realloc.\n");
    }

    // Dynamically allocate memory using calloc()
    printf("\n---Memory Allocation using calloc--- \n");
    float *caloc_ptr;
    caloc_ptr = (float *)calloc(25, sizeof(float));
    if (caloc_ptr == NULL)
    {
        printf("Memory not Allocation using calloc \n");
        exit(0);
    }
    else
    {
        printf("Memory Allocation Successful using calloc.\n");
        // Some work bla bla
        free(caloc_ptr); // Free the memory
        printf("Calloc Memory successfully freed.\n");
    }
    return 0;
}