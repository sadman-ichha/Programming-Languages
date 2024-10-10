# Dynamic Memory Allocation

## malloc() and free() Function

```c
#include <stdio.h>

int main() {

  int n = 4;
  
  int* ptr;

  ptr = (int*) malloc(n * sizeof(int));

  if (ptr == NULL) {
      printf("Memory cannot be allocated");
      return 0;
  }

  printf("Enter input values:\n");
  for(int i = 0; i < n; ++i) {
      scanf("%d", ptr + i);
  }

  printf("Input Values\n");
  for(int i = 0; i < n; ++i) {
      printf("%d\n", *(ptr + i));
  }

  free(ptr);

  return 0;
}
```
**Output**
```
Enter input values:
12
21
13
9
Input Values
12
21
13
9
```
## realloc() Function

```c
#include <stdio.h>

int main() {

  int n = 4;
  
  int* ptr;

  ptr = (int*) malloc(n * sizeof(int));

  if (ptr == NULL) {
      printf("Memory cannot be allocated");
      return 0;
  }

  printf("Allocated Memory\n");
  for (int i = 0; i < n; ++i) {
      printf("%p\n", ptr + i);
  }

  n = 6;

  ptr = realloc (ptr, n * sizeof(int));

  printf("Newly Allocated Memory\n");
  for(int i = 0; i < n; ++i) {
      printf("%p\n", ptr + i);
  }

  return 0;
}
```
**Output**
```
Allocated Memory
0x559442b682a0
0x559442b682a4
0x559442b682a8
0x559442b682ac
Newly Allocated Memory
0x559442b682a0
0x559442b682a4
0x559442b682a8
0x559442b682ac
0x559442b682b0
0x559442b682b4
```
---

## Programming Task
Create a program that dynamically changes the size of an array. 

- Create a pointer array like this  
 int* ages;
- Allocate 4 spaces for the array using the malloc() function  
- Get 4 input values for the array.  
- Print the array elements using the pointer.  
- Resize the array to store 6 elements using realloc()  
- Assign 32 and 59 as the 5th and 6th elements.  
Hint  
ages[4] = 32;  
ages[5] = 49;  
- Then finally Print all 6 array elements.

**Solution**
```c
#include <stdio.h>

int main() {
    
    int* ages;
    int n = 4;
    
    ages = (int*)malloc(n * sizeof(int));
    
    if(ages == NULL) {
        printf("Memory cannot be allocated");
        return 0;
    }
    
    printf("Enter input values:\n");
    for (int i = 0; i < n; ++i) {
        scanf("%d", ages+i);
    }
    
    printf("Input Values are:\n");
    for (int i = 0; i < n; ++i) {
        printf("%d\n", *(ages + i));
    }
    
    n = 6;
    
    ages[4] = 32;
    ages[5] = 49;
    
    ages = realloc(ages, n * sizeof(int));
    
    printf("After reallocation:\n");
    for(int i = 0; i < n; ++i) {
        printf("%d\n", *(ages+i));
    }
    
    free(ages);
    return 0;
}

```

**Output**
```
Enter input values:
11
14
13
15
Input Values are:
11
14
13
15
After reallocation:
11
14
13
15
32
49

```
---
 
## Programiz Quiz
 
Q. What is the correct way to allocate memory to store 12 double data?

**Options:**
1. malloc(20 * double)
1. (double*) malloc(12 * sizeof(double))
1. (double) malloc(20 * sizeof(double))
1. (double*) malloc( sizeof(20 * int))

**Answer: 2**


