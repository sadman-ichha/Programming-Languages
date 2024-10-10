# C Pointers and Arrays

## C Pointers and Array

```c
##include <stdio.h>

int main() {

  int numbers[5] = {1, 3, 5, 7, 9};

  for (int i = 0; i < 5; ++i) {
    printf("%d = %p\n", numbers[i], &numbers[i]);
  }
  
  return 0;
}

```
**Output**
```
1 = 0x7ffce02ace30
3 = 0x7ffce02ace34
5 = 0x7ffce02ace38
7 = 0x7ffce02ace3c
9 = 0x7ffce02ace40

```
## Using name of  the  array to print the address
```c
#include <stdio.h>

int main() {

  int numbers[5] = {1, 3, 5, 7, 9};

  for (int i = 0; i < 5; ++i) {
    printf("%d = %p\n", numbers[i], numbers+i);
  }

  return 0;
}

```
**Output**
```
1 = 0x7fff55603c30
3 = 0x7fff55603c34
5 = 0x7fff55603c38
7 = 0x7fff55603c3c
9 = 0x7fff55603c40

```
## Access array elements using pointer

```c
#include <stdio.h>

int main() {

  int numbers[5] = {1, 3, 5, 7, 9};

  for (int i = 0; i < 5; ++i) {
    printf("%d = %p\n", *(numbers+i), numbers+i);
  }

  return 0;
}

```
**Output**
```
1 = 0x7ffd2398cc80
3 = 0x7ffd2398cc84
5 = 0x7ffd2398cc88
7 = 0x7ffd2398cc8c
9 = 0x7ffd2398cc90

```

## Change array elements using pointers

```c
#include <stdio.h>

int main() {

  int numbers[5] = {1, 3, 5, 7, 9};

  *numbers = 2;
  *(numbers+4) = 11;

  printf("First Element: %d\n", *numbers);
  printf("Last Element: %d", *(numbers+4));

  return 0;
}

```
**Output**
```
First Element: 2
Last Element: 11

```
---

## Programming Task
Create a program to find the largest element of an array using pointers.

int arr[] = {34, 12, 21, 54, 48};

- assign the first element of the array to a largest variable using pointer  
int largest = *arr

- Run a for loop to access each element of the array.
- Compare largest with each array element using pointer  
largest < *(arr + i)  
- If the largest variable is smaller than a element, assign the array value to largest  
largest = *(arr + i)

**Solution**
```c
#include <stdio.h>

int main() {
    int arr[5] = {34, 12, 21, 54, 48};
    
    int largest = *arr;
    
    for(int i = 1; i < 5; i++) {
        if(largest < *(arr + i)) {
            largest = *(arr + i);
        }
    }
     printf("The largest number is: %d", largest);
    
    return 0;
}
```

**Output**
```
The largest number is: 54
```
---
 
## Programiz Quiz
 
Q. In an array, int ages[5], what does ages represent?

**Options:**
1. ages[4]
1. ages[0]
1. &ages[4]
1. &ages[0]

**Answer: 4**


