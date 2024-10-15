/*Java has the following conditional statements:

Use if to specify a block of code to be executed, if a specified condition is true
Use else to specify a block of code to be executed, if the same condition is false
Use else if to specify a new condition to test, if the first condition is false
Use switch to specify many alternative blocks of code to be executed
*/

public class IfElse {
    public static void main(String[] args) {
        int number = 75;

        // If-else statement
        if (number > 90) {
            System.out.println("Excellent");
        } else if (number > 75) {
            System.out.println("Very Good");
        } else if (number > 60) {
            System.out.println("Good");
        } else {
            System.out.println("Needs Improvement");
        }

        // Simple If-else
        boolean isPassed = number >= 60;
        if (isPassed) {
            System.out.println("You passed the test!");
        } else {
            System.out.println("You did not pass the test.");
        }
    }
}
