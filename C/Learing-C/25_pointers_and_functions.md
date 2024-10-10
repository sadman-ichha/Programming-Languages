# C Pointers and Functions

## C Pointers and Functions

```c
#include <stdio.h>

void findValue(int* num) {

  *num = 39;
}

int main() {

  int number = 21;

  findValue(&number);
  
  printf("Number: %d", number);

  return 0;
}

```
**Output**
```
Number: 39

```
## Find the square of a number
```c
#include <stdio.h>

void findSquare(int* number) {
  
  int square = *number * *number;

  *number = square;
}

int main() {

  int number = 21;

  findSquare(&number);
  
  printf("Square is %d", number);

  return 0;
}

```
**Output**
```
Square is 441

```
## Return pointers from a function

```c
#include <stdio.h>

int* findSquare(int* number) {
  
  int square = *number * *number;

  *number = square;

  return number;
}

int main() {

  int number = 21;

  int* result = findSquare(&number);
  
printf("Result is %d", *result);

  return 0;
}

```
**Output**
```
Result is 441

```
## Add two numbers

```c
#include <stdio.h>

int* addNumbers(int* num1, int* num2, int* sum) {

  *sum = *num1 + *num2;

  return sum;
}

int main() {

  int number1 = 32;
  int number2 = 18;
  
  int sum;

  int* result = addNumbers(&number1, &number2, &sum);
  
  printf("Sum is %d", *result);

  return 0;
}

```
**Output**
```
Sum is 50

```
---

## Programming Task
Create a program to find the multiplication of two numbers using a function and pointers. 

Here's how your program should work:

- Create a function that accepts three pointers.

- Inside the function multiply values represented by two pointers and assign the result to the address of the third pointer.

- Inside the main function, create three variables, two variables with values 13 and 9 and the third variable to store their product.

- Call the function with addresses of the 3 variables as arguments.  

- Store the returned value inside a pointer and print the value pointed by the returned address.

**Solution**
```c
#include <stdio.h>

int* multiplication (int* a, int* b, int* c) {
    *c = *a * *b;
    return c;
}

int main() {
    
    int num1 = 13;
    int num2 = 9;
    int multiple;
    
    int* result = multiplication(&num1, &num2, &multiple);
    
    printf("The multiplication is: %d", *result);
    
    return 0;
}
```

**Output**
```
The multiplication is: 117
```
---
 
## Programiz Quiz
 
Q. What type of value does the following function return?

**Options:**
1. Integer value
1. Address of integer variable
1. Double value
1. Address of double variable

**Answer: 4**


