import java.util.Scanner;

public class WhileLoopExample {
    public static void main(String[] args) {
        // Example 1: Simple while loop to print numbers from 1 to 5
        // int i = 1;
        // while (i <= 5) {
        // System.out.println("Iteration: " + i);
        // i++; // Increment to avoid infinite loop
        // }

        // // Example 2: While loop to print elements of an array
        // int[] numbers = {10, 20, 30, 40, 50};
        // int index = 0;
        // System.out.println("Array elements:");
        // while (index < numbers.length) {
        // System.out.println(numbers[index]);
        // index++;
        // }

        // // Example 3: While loop with a countdown
        // int countdown = 5;
        // System.out.println("Countdown:");
        // while (countdown > 0) {
        // System.out.println(countdown);
        // countdown--;
        // }

        try (Scanner scanner = new Scanner(System.in)) {
            {
                String name;
                System.out.print("Enter your Name:");
                name = scanner.nextLine();
                System.out.println(name);
                scanner.close();
            }
        } catch (Exception e) {
            System.out.println(e);
        }

    }

}
