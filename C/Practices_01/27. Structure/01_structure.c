#include <stdio.h>

// Define the structure before it's used
struct person
{
    int age;
    double cgpa;
};

int main()
{
    // Declare variables of type 'struct person'
    struct person person1, person2; // local variable

    // Assign values to the members of 'person1'
    person1.age = 22;
    person1.cgpa = 3.48;

    // Print information about 'person1'
    printf("Person1 age: %d\n", person1.age);
    printf("Person1 cgpa: %lf\n", person1.cgpa);

    // Assign values to the members of 'person2'
    person2.age = 50;
    person2.cgpa = 4.00;

    // Print information about 'person2 '
    printf("Person2 age: %d\n", person2.age);
    printf("Person2 cgpa: %lf\n", person2.cgpa);

    return 0;
}
