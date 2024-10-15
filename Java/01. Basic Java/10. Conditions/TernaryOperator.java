/*
There is also a short-hand if else, which is known as the ternary operator because it consists of three operands.
It can be used to replace multiple lines of code with a single line, and is most often used to replace simple if else statements:

variable = (condition) ? expressionTrue :  expressionFalse;

*/


public class TernaryOperator {
    public static void main(String[] args) {
        int number = 75;

        // Ternary operator to check if a number is greater than 60
        String result = (number > 60) ? "Passed" : "Failed";
        System.out.println("Result: " + result); // Outputs: Passed

        // Ternary operator for even or odd number check
        int num = 10;
        String evenOdd = (num % 2 == 0) ? "Even" : "Odd";
        System.out.println(num + " is " + evenOdd); // Outputs: 10 is Even

        // Nested ternary operator
        int score = 85;
        String grade = (score > 90) ? "A" : (score > 75) ? "B" : "C";
        System.out.println("Grade: " + grade); // Outputs: B
    }
}
