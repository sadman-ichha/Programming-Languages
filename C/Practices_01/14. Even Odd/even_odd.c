#include <stdio.h>
int main(){
    int a;
    printf("Enter a int Number : ");
    scanf("%d", &a);

    if(a %2==0){
      printf("%d is Even \n", a); // Even 2,4,6
    }else{
      printf("%d is Odd \n", a); // Odd 1,3,5
    }
    
    return 0;
}