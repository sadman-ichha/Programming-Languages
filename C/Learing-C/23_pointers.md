# C Pointers

## Pointer Variables

```c
#include <stdio.h>

int main() {

  int age = 25;

  printf("%p", &age);

  int* ptr = &age;

  printf("\n%p", ptr);

  return 0;
}

```
**Output**
```
0x7ffc875fe0ec
0x7ffc875fe0ec
```

## Access Value using Pointer
```c
#include <stdio.h>

int main() {

  int age = 25;

  int* ptr = &age;

  printf("Address: %p\n", ptr); 

  printf("Value: %d", *ptr);

  return 0;
}

```
**Output**
```
Address: 0x7fff7e4319bc
Value: 25


```
## Change Value using Pointer

```c
#include <stdio.h>

int main() {

  int age = 25;

  int* ptr = &age;

  *ptr = 31;

  printf("%d", age);

  return 0;
}

```
**Output**
```
31
```
---

## Programming Task
Create a program to change the value of a variable using a pointer. Here's how the program should work:  
- Get input value for a double variable salary.
- Assign the address of salary to a double pointer. 

Now use the pointer to  
- print the value of salary,  
- increase the salary by 2 times,  
- print the new salary.

**Solution**
```c
#include <stdio.h>

int main() {
    double salary;
    
    printf("Enter your salary: ");
    scanf("%lf", &salary);
    
    double* ptr = &salary;
    
    printf("Your Salary: %.2lf\n", *ptr);
    
    double new_salary = *ptr * 2;
    
    printf("Your double salary: %.2lf", new_salary);
}
```

**Output**
```
Enter your salary: 28000.5
Your Salary: 28000.50
Your double Salary: 56001.00
```
---
 
## Programiz Quiz
 
Q. Which of the following is valid for variable a and pointer p?

**Options:**
1. *p = &a
1. p = a
1. *p = a
1. p = *a


**Answer: 3**


