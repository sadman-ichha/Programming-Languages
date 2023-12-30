#include <stdio.h>

int main()
{
    // int type pointer
    printf("---Char  type pointer--- \n");
    char ch = 'X';
    char *ptr_ch;
    ptr_ch = &ch;
    printf("Orginal  : %c \n", ch);
    printf("From Ptr : %c \n", *ptr_ch);
    printf("Ptr Address : %p ", *ptr_ch);

    // Double type pointer
    printf("\n \n---Double type pointer--- \n");
    double cgpa = 3.70;
    double *ptr_cgpa;
    ptr_cgpa = &cgpa;
    printf("Orginal  : %lf \n", cgpa);
    printf("From Ptr : %lf \n", *ptr_cgpa);
    printf("Ptr Address : %p ", *ptr_cgpa);

    // Intger type pointer
    printf("\n \n---Intger type pointer--- \n");
    int age = 22;
    int *ptr_age;
    ptr_age = &age;
    printf("Orginal  : %d \n", age);
    printf("From Ptr : %d \n", *ptr_age);
    printf("Ptr Address : %p ", *ptr_age);
    return 0;
}