#include <stdio.h>

// Define three unions and one structure to analyze memory sizes
union test1
{
    int x, y;
};

union test2
{
    char ch;
    int a;
};

union test3
{
    char name[20];
    double d;
};

struct test4
{
    char name[20];
    double d;
    int x;
};

int main()
{
    // Declare instances of unions and a structure
    union test1 t1;
    union test2 t2;
    union test3 t3;
    struct test4 t4;

    // Print the sizes of each union and the structure
    printf("sizeof(t1) = %d bytes\n", sizeof(t1));        // Size of union test1
    printf("sizeof(t2) = %d bytes\n", sizeof(t2));        // Size of union test2
    printf("sizeof(t3) = %d bytes\n", sizeof(t3));        // Size of union test3
    printf("sizeof struct(t4) = %d bytes\n", sizeof(t4)); // Size of structure test4

    return 0;
}
