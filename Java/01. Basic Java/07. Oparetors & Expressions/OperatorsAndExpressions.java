/*
 
Operators are special symbols that perform operations on variables and values.

Expressions:
An expression is a combination of variables, constants, and operators that evaluates to a value.

Operators perform operations (math, comparison, logic) on data.
Expressions are combinations of variables and operators that evaluate to a value.

 */

public class OperatorsAndExpressions {

    public static void main(String[] args) {
        // Arithmetic Operators
        int a = 10, b = 5;
        System.out.println("Addition: " + (a + b));    // Output: 15
        System.out.println("Subtraction: " + (a - b)); // Output: 5
        System.out.println("Multiplication: " + (a * b)); // Output: 50
        System.out.println("Division: " + (a / b));     // Output: 2
        System.out.println("Modulus: " + (a % b));      // Output: 0

        // Relational Operators
        int x = 10, y = 20;
        System.out.println("x == y: " + (x == y)); // Output: false
        System.out.println("x != y: " + (x != y)); // Output: true
        System.out.println("x > y: " + (x > y));   // Output: false
        System.out.println("x < y: " + (x < y));   // Output: true

        // Logical Operators
        boolean condition1 = true;
        boolean condition2 = false;
        System.out.println("condition1 && condition2: " + (condition1 && condition2)); // Output: false
        System.out.println("condition1 || condition2: " + (condition1 || condition2)); // Output: true
        System.out.println("!condition1: " + (!condition1)); // Output: false

        // Assignment Operators
        int num = 10;
        num += 5; // Equivalent to num = num + 5
        System.out.println("num after +=: " + num); // Output: 15
        num -= 3; // Equivalent to num = num - 3
        System.out.println("num after -=: " + num); // Output: 12

        // Unary Operators
        int count = 5;
        System.out.println("Count: " + count++); // Output: 5 (count becomes 6 after this line)
        System.out.println("Count: " + ++count); // Output: 7 (count is incremented before use)

        // Expression Example
        int sum = a + b; // Expression: a + b
        System.out.println("Sum: " + sum); // Output: 15
    }
}
