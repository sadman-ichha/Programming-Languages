
/**
 * This program demonstrates how to get user input in Java using the Scanner class.
 *
 * Steps to get user input:
 * 1. Import the Scanner class from the java.util package.
 * 2. Create a Scanner object to read input from the standard input stream (System.in).
 * 3. Use the Scanner methods to read different types of user input.
 * 4. Close the Scanner object to free up resources.
 */
import java.util.Scanner; // Import the Scanner class

public class UserInput {

    public static void main(String[] args) {
        // Prompt the user for different types of input
        try ( 
            // Create a Scanner object
                Scanner scanner = new Scanner(System.in)) {

                    
            // Prompt the user for different types of input
            System.out.print("Enter your name: ");
            String name = scanner.nextLine(); // Read a line of text (String)
            System.out.print("Enter your age: ");
            int age = scanner.nextInt(); // Read an integer
            System.out.print("Enter your height (in meters): ");
            double height = scanner.nextDouble(); // Read a double
            System.out.print("Do you like programming? (true/false): ");
            boolean likesProgramming = scanner.nextBoolean(); // Read a boolean
            // Display the input received from the user
            System.out.println("\nUser Input:");
            System.out.println("Name: " + name);
            System.out.println("Age: " + age);
            System.out.println("Height: " + height);
            System.out.println("Likes Programming:" + likesProgramming);
            // Close the scanner to free up resources
            scanner.close();
        }
    }
}
