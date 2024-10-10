# File Handling

## Open a File
```c
#include <stdio.h>

int main() {

  FILE* fptr;

  fptr = fopen("test.txt", "r");

  if (fptr != NULL) {
    printf("File Open Successful");
  }
  else {
    printf("File Open Unsuccessful");
  }

  return 0;
}

```
**Output**
```
File Open Successful
```
## Read File Content

```c
#include <stdio.h>

int main() {

  FILE* fptr;

  fptr = fopen("file.txt", "r");

  char content[1000];
  
  if(fptr != NULL) {

    while (fgets(content, 1000, fptr)) {
      printf("%s", content);
    }
    
  }
  else {
    printf("File opening is unsuccessful");
  }

  return 0;
}
```
**Output**
```
This is the text file.
C Programming File Handling is awesome.

```

## Closing File

```c
#include <stdio.h>

int main() {

  FILE* fptr;

  fptr = fopen("file.txt", "r");

  char content[1000];
  
  if(fptr != NULL) {

    while (fgets(content, 1000, fptr)) {
      printf("%s", content);
    }
    
  }
  else {
    printf("File opening is unsuccessful");
  }

  fclose(fptr);

  return 0;
}
```
**Output**
```
This is the text file.
C Programming File Handling is awesome.

```
## Write Content to File

```c
#include <stdio.h>

int main() {

  FILE* fptr;

  fptr = fopen("newFile.txt", "w");

  fputs("New message 1\n", fptr);
  fputs("New message 2", fptr);

  fclose(fptr);

  return 0;
}
```
**Output**
```
You can see the content of the file is replaced by new content.

```
---

## Programming Task

- Create a new file in write mode and add content  
  - C is a fun programming language.  
  - And, I love using C language  
- Close the file
- Again open the file in read mode and read the content of the file

**Solution**
```c
#include <stdio.h>

int main() {

    FILE* fileptr;

    fileptr = fopen("file.txt", "w");
        fputs("C is a fun programming language\n", fileptr);
        fputs("I love using C language", fileptr);

    fclose(fileptr);

    fileptr = fopen("file.txt", "r");
    char content[1000];

    if(fileptr != NULL) {
        while(fgets(content, 1000, fileptr)) {
        printf("%s", content);
        }
    }

    else {
        printf("File reading is unsuccessful");
    }

    fclose(fileptr);

    return 0;
}

```

**Output**
```
C is a fun programming language
I love using C language
```
---
 
## Programiz Quiz
 
Q. What is the correct way to declare the file pointer in C Programming?

**Options:**
1. file* pointer;
1. FILE* pointer;
1. int* pointer;
1. FILE pointer;

**Answer: 2**


