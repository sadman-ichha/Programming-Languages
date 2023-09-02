#include <stdio.h>

int main(){
    //approach one
    char myName[10];
    myName[0]= 'S'; 
    myName[1]='A';
    myName[2]='D';
    myName[3]='M';
    myName[4]='A';
    myName[5]='N';
    // %s is char Identifier
    printf("myName:  %s \n", myName);

    //approach two
    char myName2[20]={'S','A','D','M','A','N'};
    printf("myName two: %s \n",myName2);
   //approach three
    char myName3[20]="Sadman";
    printf("myName three: %s \n",myName3);

    return 0;
}