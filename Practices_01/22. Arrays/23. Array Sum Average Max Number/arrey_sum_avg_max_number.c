#include <stdio.h>

int main()
{
    int scores[5];  // Declare an array of integers to store scores.
    scores[0] = 45; // Initialize the elements of the array with sample scores.
    scores[1] = 56;
    scores[2] = 89;
    scores[3] = 96;
    scores[4] = 33;

    // Find the sum of scores
    int sum = 0; // Initialize a variable to store the sum.
    int i;
    for (i = 0; i < 5; i++)
    {
        sum = sum + scores[i]; // Add each score to the sum.
    }
    printf("Sum = %d\n", sum); // Print the sum of the scores.

    // Find the average score
    printf("Average = %d \n", sum / 5); // Calculate and print the average by dividing the sum by the number of scores.

    // Find the maximum score
    int max = scores[0]; // Initialize a variable to store the maximum score, initially set to the first score.

    for (i = 1; i < 5; i++)
    {
        if (scores[i] > max)
        {
            max = scores[i]; // Update max if a higher score is found.
        }
    }
    printf("Max = %d\n", max); // Print the maximum score.

    // Find the minimum score
    int minimum = scores[0]; // Initialize a variable to store the minimum score, initially set to the first score.

    for (i = 1; i < 5; i++)
    {
        if (minimum > scores[i])
        {
            minimum = scores[i]; // Update minimum if a higher score is found.
        }
    }
    printf("Minimum = %d\n", minimum); // Print the minimum score.

    return 0;
}
