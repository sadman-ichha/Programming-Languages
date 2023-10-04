#include <stdio.h>

// Function prototype
// void my_func();

int age = 10;

int main(void) {
    printf("Hello World\n");
    my_func();
    printf("My name is Sadman & my age is: %d\n", age);
    return 0;
}

void my_func() {
    int age = 21;
    printf("My age is %d\n", age);
}
