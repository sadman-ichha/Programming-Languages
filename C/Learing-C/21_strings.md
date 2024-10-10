# C Strings

```c
#include <stdio.h>

int main() {

  char str[] = "Programiz";
  printf("%s", str);

  return 0;
}
```
**Output**
```
Programiz
```

## String Input
**Example 1:**
```c
#include <stdio.h>

int main() {

  char str[20];

  printf("Enter your name: ");
  scanf("%s", str);

  printf("%s", str);

  return 0;
}
```
**Output**
```
Enter your name: Padma Manandhar
Padma
```
**Example 2:**
```c
#include <stdio.h>

int main() {

  char str[20];

  printf("Enter your name: ");
  fgets(str, sizeof(str), stdin);

  printf("%s", str);

  return 0;
}
```

**Output**
```
Enter your name: Padma Manandhar
Padma Manandhar

```
## Access Characters of a String 

```c
#include <stdio.h>

int main() {
  char str[] = "Programiz";

  printf("%c\n", str[0]);
  printf("%c\n", str[1]);
  printf("%c\n", str[2]);
  printf("%c", str[3]);

  return 0;
}
```
**Output**
```
P
r
o
g
```

## Change Characters of String
```c
#include <stdio.h>

int main() {
  char str[] = "Programiz";

  str[2] = 'O';
  str[4] = 'R';

  printf("%s", str);

  return 0;
}

```
**Output**
```
PrOgRamiz
```

## Programming Task
Create a program that takes your full name as input and prints your name. Then, change the first letter of your name to X.  
- If your name is John Williams, it will become Xohn Williams.  
- If your name is Julie Bing, it will become Xulie Bing.

**Solution**
```c
#include <stdio.h>

int main() {
    char name[30];
    
    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);
    
    name[0] = 'X';
    printf("%s", name);
    
    return 0;
}
```

**Output**
```
Enter your full name: John Williams
Xohn Williams

```
---
 
## Programiz Quiz
 
Q.  What will be the value of the name variable if we provide Jack Sparrow as input value?

```c
char name[20];
scanf("%s", &name);
```

**Options:**
1. Jack Sparrow
1. Sparrow  
1. Jack  
1. Error


**Answer: 3**


