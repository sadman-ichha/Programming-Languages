# Take Input in C

## Take Input
```c
#include <stdio.h>

int main() {
  
  int age;
  
  scanf("%d", &age);

  printf("Age = %d", age);
  
  return 0;
}
```

**Output**

```
22
Age = 22
```


#### Show message to ask for input

```c
#include <stdio.h>

int main() {
  
  int age;
  
  printf("Enter input value: ");
  scanf("%d", &age);

  printf("Age = %d", age);
  
  return 0;
}
```

**Output**

```
Enter input value: 22
Age = 22
```

---
## Take double input

```c
#include <stdio.h>

int main() {
  
  double number;
  char alphabet;
  
  printf("Enter double value: ");
  scanf("%lf", &number);

  printf("Enter character value: ");
  scanf("\n%c", &alphabet);

  printf("Number: %lf", number);
  printf("\nCharacter: %c", alphabet);
  
  return 0;
}
```

**Output**

```
Enter double value: 22.1
Enter character value: z
Number: 22.100000
Character: z
```

---
## Take multiple Input

```c
#include <stdio.h>

int main() {
  
  double number;
  char alphabet;
  
  printf("Enter input values: ");
  scanf("%lf %c", &number, &alphabet);
  
  printf("Number: %lf", number);
  printf("\nCharacter: %c", alphabet);
  
  return 0;
}
```

**Output**

```
Enter input values: 30.6
c
Number: 30.600000
Character: c
```

---
## Programiz Quiz
Q. What is the correct way to take double input?

**Options**
1. scanf("%d", &input);
2. scanf("%f", &input);
3. scanf("%lf", &input);
4. scanf("%c", &input);

**Answer: 3**