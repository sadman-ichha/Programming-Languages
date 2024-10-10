# Enumerations in C

## Integral Constants

```c
#include <stdio.h>

enum Size {
  Small, 
  Medium,
  Large,
  ExtraLarge
};

int main() {

  enum Size shoeSize;

  shoeSize = ExtraLarge;

  printf("%d", shoeSize);

  return 0;
}

```
**Output**
```
3

```
**Change value from ExtraLarge to Small**
```c
#include <stdio.h>

enum Size {
  Small, 
  Medium,
  Large,
  ExtraLarge
};

int main() {

  enum Size shoeSize;

  shoeSize = Small;

  printf("%d", shoeSize);

  return 0;
}

```
**Output**
```
0
```
## Change value of Integral Constants

```c
#include <stdio.h>

enum Size {
  Small = 27, 
  Medium = 31,
  Large = 35,
  ExtraLarge = 40
};

int main() {

  enum Size shoeSize1 = Small;
  enum Size shoeSize2 = Medium;
  enum Size shoeSize3 = Large;
  enum Size shoeSize4 = ExtraLarge;

  printf("%d\n", shoeSize1);
  printf("%d\n", shoeSize2);
  printf("%d\n", shoeSize3);
  printf("%d", shoeSize4);

  return 0;
}

```
**Output**
```
27
31
35
40
```

**Create enum variables while defining the num**

```c
#include <stdio.h>

enum Size {
  Small, 
  Medium,
  Large,
  ExtraLarge
} shoeSize;

int main() {
  
  shoeSize = Medium;
  printf("%d", shoeSize);

  return 0;
}

```
**Output**
```
1
```

---

## Programming Task
Create an enum with enum constants Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, and Saturday.  

Inside the main function()  

- Create two enum variables named weekend1 and weekend2.  
- Assign values Sunday and Saturday to the variables respectively.  
- Print the values of weekend1 and weekend2.

**Solution**
```c
#include <stdio.h>

enum Day {
    Sunday,
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday
};

int main() {
    
    enum Day weekend1 = Sunday;
    enum Day weekend2 = Saturday;
    
    printf("%d \n%d", weekend1, weekend2);
    
    return 0;
}
```

**Output**
```
0
6
```
---
 
## Programiz Quiz
 
Q. What is the name of the variable in the following enum? 

enum Weekends {  
    Friday,  
    Saturday,  
    Sunday  
    } currentDay;

**Options:**
1. enum
1. Weekends
1. currentDay
1. Friday

**Answer: 3**


