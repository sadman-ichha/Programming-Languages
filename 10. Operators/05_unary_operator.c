#include <stdio.h>

int main(){
    int a = 5;
     //post increment
     a++;
     printf("Post Increment - %d \n", a);
     //pre increment
     int b = 10;
     ++b;
     printf("Pre Increment - %d \n",b);

     int c = 10;
     int result = c + ++c + c++; // 10 + 11 + 12;
     printf("result - %d \n",c);
    return 0;
}