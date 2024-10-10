#include <stdio.h>

int main()
{
    // Define an enum named 'Weekdays' with constants representing days of the week
    enum Weekdays
    {
        SATURDAY,
        SUNDAY,
        MONDAY,
        TUESDAY,
        WEDNESDAY,
        THURSDAY,
        FRIDAY,

    };
    // Declare variables of type 'Weekdays' and assign values
    enum Weekdays today = WEDNESDAY;
    enum Weekdays tomorrow = THURSDAY;

    // Use enums to represent days of the week
    printf("Today is day %d\n", today);       // Output: Today is day 3 (Wednesday is represented as 3)
    printf("Tomorrow is day %d\n", tomorrow); // Output: Tomorrow is day 4 (Thursday is represented as 4)

    return 0;
}
