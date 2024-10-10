#include <stdio.h>
int main(){
    int array[]={5,10,15,45,69,14,35,78};
    printf("int size = %d bytes\n", sizeof(int));
    printf("array one elements size = %d bytes\n", sizeof(array[0]));
    // 
    int length = sizeof(array) / sizeof(array[0]);
    printf("array length = %d\n", length);


    return 0;
}