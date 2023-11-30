#include <stdio.h>
#include <string.h>

// Define a structure named 'laptop' with members 'name' and 'price'
struct laptop {
    char name[50];
    int price;
};

int main() {
    // Define a new name 'LAPTOP' for the 'struct laptop' type using typedef
    typedef struct laptop LAPTOP;

    // Declare and initialize a variable 'laptop_1' of type 'LAPTOP'
    LAPTOP laptop_1 = {"ASUS", 350};

    // Print the name and price of the laptop_1 variable
    printf("Laptop Name = %s\n", laptop_1.name);
    printf("Laptop Price = %d\n", laptop_1.price);

    // Define a new name 'LETTER' for the 'char' data type using typedef
    typedef char LETTER;

    // Declare and initialize a variable 'ch' of type 'LETTER' (char)
    LETTER ch = 'X';

    // Print the value of the 'ch' variable
    printf("Print LETTER = %c\n", ch);

    return 0;
}
