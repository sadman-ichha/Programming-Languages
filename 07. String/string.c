#include <stdio.h>

int main(){
    char myName[10];
    myName[0]= 'S'; 
    myName[1]='A';
    myName[2]='D';
    myName[3]='M';
    myName[4]='A';
    myName[5]='N';
    // %s is char Indentifier
    printf("%s \n", myName);

    return 0;
}