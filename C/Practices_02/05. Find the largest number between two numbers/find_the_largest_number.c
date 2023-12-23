#include <stdio.h>

int main() {
    int num1, num2;
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2); // Corrected scanf format and added & before num1 and num2

    if (num1 > num2) {
        printf("First number is larger: %d\n", num1);
    } else if (num1 < num2) {
        printf("Second number is larger: %d\n", num2);
    } else {
        printf("Numbers are equal\n");
    }

    return 0;
}


