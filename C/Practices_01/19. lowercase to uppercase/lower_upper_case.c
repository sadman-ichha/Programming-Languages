#include <stdio.h>
//#include <string.h> // Include the string.h header for strlen function

int main() {
    int i = 0;
    char name[30]; // Define an array to store the string
    printf("Enter a String : ");
    fgets(name, sizeof(name), stdin);
    
    // Convert the string to uppercase
    while (name[i]) {
        if (name[i] >= 'a' && name[i] <= 'z') {
            name[i] = name[i] - 32;
        }
        i++;
    }
    
    printf("Output : %s \n", name); // Use %s to print a string
    
    return 0;
}
