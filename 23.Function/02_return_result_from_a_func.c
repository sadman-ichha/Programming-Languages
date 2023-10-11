#include <stdio.h>

void greet(char name[], int birth_year); // Function Prototype
int calculate_age(int birth_year); // Function Prototype

int main()
{
    greet("Sadman",2000);
    greet("Jon",1995);

    return 0;
}

void greet(char name[], int birth_year)
{
    int ages = calculate_age(birth_year);
    printf("hi, I'm a %s & My age is %d\n", name, ages);
}

int calculate_age(int birth_year)
{
    int current_year = 2023;
    int age = current_year  - birth_year;
    return age;
}