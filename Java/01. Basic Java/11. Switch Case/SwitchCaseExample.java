/*
The switch-case statement allows you to execute one block of code among many options based on the value of an expression.
It’s a cleaner alternative to multiple if-else statements when you have multiple values to check.

The switch-case compares the value of a variable (or expression) to multiple case labels.
Each case ends with a break statement to avoid fall-through.
The default block runs if no case matches.
 */

public class SwitchCaseExample {

    public static void main(String[] args) {
        String name = "Sadman";
        switch (name) {
            case "x":
                System.out.println("This is x");
                break;
            case "y":
                System.out.println("This is y");
                break;
            case "Sadman":
                System.out.println("This is Sadman");
                break;
            default:
                System.out.println("Unknown");
        }
    }
}