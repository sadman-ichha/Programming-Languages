#include <stdio.h>


int main(){
    greet(2000);

    return 0;
}

void greet(int birth_year){
   int age= calculate_age(birth_year);
    printf("hi, I'm Sadman %d\n",age);
}

int calculate_age( {int birth_year}){
    int current_year =2023;
    int age = current_year-birth_year;
return age;
}