#include <stdio.h>

int main()
{
    int choice;
    float temp, convertTemp;
    printf("Temperature Conversion Menu:\n");
    printf("1 Press for Fahrenheit To Celsius\n");
    printf("2 Press for Celsius Fahrenheit\n");
    printf("Enter Your Choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("Enter Your Fahrenheit Temperature: ");
        scanf("%f", &temp);
        convertTemp = (temp - 32) / 1.8;
        printf("The Temperature in Celsius is : %f", convertTemp);
        break;

    case 2:
        printf("Enter Your Celsius Temperature: ");
        scanf("%f", &temp);
        convertTemp = (1.8 * temp) + 32;
        printf("The Temperature in Fahrenheit is : %f", convertTemp);
        break;

    default:
        printf("Not a Correct Option\n");
    }
    return 0;
}
