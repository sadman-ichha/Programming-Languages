# C Multidimensional Arrays

### Declaration multidimensional array

```
int arr[2][3];

```
### Initialization of multidimensional array
```
int arr[2][3] = { {1, 3, 5}, {2, 4, 6} };


```

## Access Array Elements

```c
#include <stdio.h>

int main() {

  int arr[2][3] = { {1, 3, 5}, {2, 4, 6} };

  printf("%d\n", arr[0][0]);
  printf("%d", arr[1][2]);

  return 0;
}

```
**Output**
```
1
6
```

## Change Array Indexes
```c
#include <stdio.h>

int main() {

  int arr[2][3] = { {1, 3, 5}, {2, 4, 6} };

  arr[0][2] = 7;
  arr[1][1] = 8;

  printf("%d\n", arr[0][2]);
  printf("%d", arr[1][1]);

  return 0;
}

```
**Output**
```
7
8 
```

## Multidimensional Array and for loop

```c
#include <stdio.h>

int main() {

  int arr[2][3] = { {1, 3, 5}, {2, 4, 6} };

  for (int i = 0; i < 2; ++i) {
    for(int j = 0; j < 3; ++j) {
      printf("%d    ", arr[i][j]);
    }
    printf("\n");
  }

  return 0;
}


```
**Output**
```
1    3    5    
2    4    6
```
---

---
 
## Programiz Quiz
 
Q. Which value will we get when we print arr[1][4] from the following array?
```c
int arr[1][4] = { {3, 6, 9, 12}, {2, 4, 6, 8} };
```

**Options:**
1. 82 
1. 5  
1. 0  
1. Random Value


**Answer: 4**


