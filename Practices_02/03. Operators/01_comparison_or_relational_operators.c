#include <stdio.h>

int main() {
    int num;
    printf("Enter an Integer: ");
    scanf("%d", &num);

    if (num % 2 == 0) {
        printf("Your number is Even\n");
    } else {
        printf("Your number is Odd\n"); // odd means 1,3,5
    }

    return 0;
}
