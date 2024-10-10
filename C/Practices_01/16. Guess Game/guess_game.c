#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    int given_number, picked_number;
    time_t t;
    srand((unsigned)time(&t)); // pc random number picked this line
    picked_number = rand() % 10 + 1; // 0-10 number picked & store picked_number variable
    printf("Enter your choosen number : ");
    scanf("%d", &given_number);

    if (picked_number == given_number)
    {
        printf("You Win!");
    }
    else
    {
        printf("You lose, Picked Number was %d \n", picked_number);
    }

    return 0;
}