#include <stdio.h>

// Define a structure 'Person' with members 'age' and 'cgpa'
struct Person {
    int age;
    float cgpa;
};

// Create an array 'person' of type 'struct Person' with 3 elements
struct Person person[3];

int main() {
    int i;

    // Loop to get information for each person
    for (i = 0; i < 3; i++) {
        printf("Enter information for person %d:\n", i + 1);
        printf("Enter Age: ");
        scanf("%d", &person[i].age); // Read user input for age
        printf("Enter CGPA: ");
        scanf("%f", &person[i].cgpa); // Read user input for CGPA
    }

    // Loop to display information for each person
    for (i = 0; i < 3; i++) {
        printf("\nInformation for person %d:\n", i + 1);
        printf("Age: %d\n", person[i].age); // Display age
        printf("CGPA: %.2f\n", person[i].cgpa); // Display CGPA
    }

    return 0;
}
