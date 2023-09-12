#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
    time_t t;
    srand((unsigned)time(&t));
    int chosen_number, lucky_number;
    lucky_number = rand() % 10 + 1; // Use rand() for random number generation

    while (1) {
        printf("Guess the lucky Number : ");
        scanf("%d", &chosen_number); // Remove the space after %d

        if (lucky_number == chosen_number) {
            printf("Congratulations! You have chosen the correct number.\n");
            break;
        } else {
            printf("Sorry, try again.\n");
        }
    }

    return 0;
}
