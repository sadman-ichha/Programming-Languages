#include <stdio.h>

int main() {
    // Variable declaration
    int fibo, first = 0, second = 1, count = 0, num, i;
    
    // Prompt the user to enter the limit for the Fibonacci series
    printf("Enter the last Number : ");
    scanf("%d", &num); // Read the user input
    
    // Display label for the Fibonacci series
    printf("Fibonacci Series = ");
    
    // Loop to generate Fibonacci series up to the specified limit
    while (count < num) {
        if (count <= 1) {
            fibo = count; // Assign 0 or 1 for the first two numbers
        } else {
            // Calculate the next Fibonacci number based on previous two numbers
            fibo = first + second;
            first = second;
            second = fibo;
        }
        printf("%d ", fibo); // Print the current Fibonacci number
        count++; // Increment count to control the loop
    }

    return 0; // Indicates successful program execution
}
