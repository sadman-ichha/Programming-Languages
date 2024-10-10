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
    printf("Memory Address : %p ", *ptr_ch);

    // Double type pointer
    printf("\n \n---Double type pointer--- \n");
    double cgpa = 3.70;
    double *ptr_cgpa;
    ptr_cgpa = &cgpa;
    printf("Orginal  : %lf \n", cgpa);
    printf("From Ptr : %lf \n", *ptr_cgpa);
    printf("Memory Address : %p ", *ptr_cgpa);

    // Intger type pointer
    printf("\n \n---Intger type pointer--- \n");
    int age = 22;
    int *ptr_age;
    ptr_age = &age;
    printf("Orginal  : %d \n", age);
    printf("From Ptr : %d \n", *ptr_age);
    printf("Memory Address : %p ", *ptr_age);

    // Sum pointer
    printf("\n \n---Sum pointer--- \n");
    int num1 = 10, num2 = 40;
    int *ptr_num1, *ptr_num2;
    ptr_num1 = &num1;
    ptr_num2 = &num2;
    int sum;
    sum = *ptr_num1 + *ptr_num2;
    printf("Sum : %d ", sum);
    return 0;
}