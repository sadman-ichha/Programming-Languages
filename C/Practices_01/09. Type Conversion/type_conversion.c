#include <stdio.h>

int main() {
    char ch = 'A'; // Declare a char variable and set it to 'A'

    printf("%c is the character itself\n", ch); // Print the character 'A'
    printf("%d is the decimal ASCII value\n", ch); // Print the decimal ASCII value of 'A'
    printf("%x is the hexadecimal ASCII value\n", ch); // Print the hexadecimal ASCII value of 'A'
    
    int x = 4/2+8*4-(5+2)%3; // Explain Downs
    printf("x = %d\n", x);
    


    return 0;
}


//Given the expression: int x = 4/2+8*4-(5+2)%3; 
//Explain:

//1=== Parentheses ( ) have the highest precedence:
// (5+2) is evaluated first, resulting in 7.

//2==== Multiplication * and Division / have the same precedence, evaluated from left to right:
//. 4/2 is evaluated, resulting in 2.
// 8*4 is evaluated, resulting in 32.

//3==== Modulo % has the same precedence as multiplication and division:
// (5+2)%3 is evaluated, resulting in 7%3 = 1.

//4==== Addition + and Subtraction - have the same precedence, evaluated from left to right:
// Putting it all together based on the above evaluations:
// 4/2 + 8*4 - (5+2)%3 becomes 2 + 32 - 1.
// 2 + 32 - 1 equals 33 - 1, which equals 32.
// So, the correct value of x should be x = 33, not x = 32.
