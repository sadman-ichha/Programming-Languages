# break and continue in C Programming

### break inside the loop
```c
#include <stdio.h>

int main() {

  for (int i = 1; i <= 5; i++) {
    printf("%d \n", i);
    break;
  }

  return 0;
}

```

**Output**
```
1

```

### break statement with decision making statement
```c
#include <stdio.h>

int main() {

  for (int i = 1; i <= 5; i++) {

    if (i == 3) {
      break;
    }

    printf("%d \n", i);
  }

  return 0;
}

```

**Output**
```
1
2
```
## break with while loop

```c
#include <stdio.h>

int main() {

  while (1) {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    
    if (number < 0) {
      break;
    }
    
    printf("%d \n", number);
  }

  return 0;
}

```
**Output**
```
Enter a number: 5
5
Enter a number: 9
9
Enter a number: -4

```

## continue Statement
```c
#include <stdio.h>

int main() {

  for (int i = 1; i <= 5; i++) {

    if (i == 3) {
      continue;
    }

    printf("%d \n", i);
  }

  return 0;
}

```
**Output**
```
1
2
4
5

```
## Example: break and continue
```c
#include <stdio.h>

int main() { 

  while (1) { 
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    
    if (number <= 0) {
      break;
    }
    
    if ((number % 2) != 0) {
      continue;
    }

    printf("%d \n", number);
  }

  return 0;
}
```
**Output**
```
Enter a number: 4
4
Enter a number: 7
Enter a number: 32
32
Enter a number: -3

```


---

## Programming Task

Q. Can you write a program that takes an input from the user and prints it if the value is a negative odd number? 
- if the input value is positive, end the loop with message, Positive Value.
- And, if the input value is negative even, skip the value with message, Negative Even.

So, our output will look like :

Enter a number: -23  
-23  
Enter a number: -22  
Negative Even  
Enter a number: 23


## Solution :
```c
    #include <stdio.h>

    int main() {
    
        while(1) {
            
            int number;
            printf("\nEnter any number: ");
            scanf("%d", &number);
            
            if (number < 0 && number % 2 != 0) {
                printf("%d", number);
            }
            
            else if (number >= 0) {
                printf("Positive Value");
                break;
            }

            else {
                printf("Negative Even");
                continue;
            }
        }

    return 0;
}
```
**Output**
```
Enter any number: -8
Negative Even
Enter any number: -3
-3
Enter any number: 8
Positive Value
```
---

## Programiz Quiz

Q. Which of the following keywords is used to skip the current iteration of a loop ? 


**Options:**
1. skip 

1. continue 

1. break

1. loop

**Answer: 2**