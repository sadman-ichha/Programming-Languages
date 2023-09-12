#include <stdio.h>
#include <stdbool.h>
int main()
{
    int age;
    printf("Enter your age : ");
    scanf("%d" , &age);
    bool has_nid = false;
    bool has_passport = false;

    if (age >= 18){
        // this called nested condition
        if (has_nid || has_passport){
            printf("Okey Let's go \n");
        }
        else{
            printf("You're Not Accepted \n");
        }
    }
    else{
        printf("You're Not Allowed \n");
    }

    return 0;
}