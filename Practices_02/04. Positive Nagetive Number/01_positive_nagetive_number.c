#include <stdio.h>
int main(){
    int num;
    printf("Enter any Integer Number: ");
    scanf("%d", &num);
    if(num>0){
        printf("Your Number is %d == Positive Number..", num);
    }else if(num<0){
        printf("Your Number is %d == Nagetive Number..", num);
    }else {
        printf("Your Number is 0.\n");
    }
    return 0;
}