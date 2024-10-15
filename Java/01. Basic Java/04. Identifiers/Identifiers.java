/**
 * This program demonstrates the use of different types of identifiers in Java.
 * Identifiers are names given to various elements in a program such as classes, methods, variables, etc.
 * 
 * Rules for Identifiers in Java:
 * 1. Must Begin with a Letter, Dollar Sign, or Underscore:
 *    - Identifiers cannot begin with a digit. The first character must be a letter (A-Z or a-z), a dollar sign ($), or an underscore (_).
 * 2. Subsequent Characters Can Be Letters, Digits, Dollar Signs, or Underscores:
 *    - After the first character, identifiers can include any combination of letters, digits (0-9), dollar signs, or underscores.
 * 3. Case-Sensitive:
 *    - Identifiers in Java are case-sensitive, which means `myVariable` and `myvariable` are considered different identifiers.
 * 4. Cannot Be a Keyword:
 *    - Identifiers cannot be the same as Java keywords (e.g., `class`, `public`, `void`).
 * 5. No White Spaces:
 *    - Identifiers cannot contain spaces.
 * 
 * Examples of Valid Identifiers:
 * - myVariable
 * - my_variable
 * - $myVariable
 * - _myVariable
 * - myVariable1
 * 
 * Examples of Invalid Identifiers:
 * - 1myVariable (starts with a digit)
 * - my Variable (contains a space)
 * - class (reserved keyword)
 */

public class Identifiers { // Class identifier

    // Instance variable (identifier)
    private String instanceVar = "I am an instance variable";

    // Static variable (identifier)
    private static int staticVar = 100;

    // Constant variable (identifier)
    private static final double PI = 3.14159;

    public static void main(String[] args) { // Method identifier
        // Local variables (identifiers)
        int localVar = 25;
        String greeting = "Hello, World!";

        // Creating an instance of IdentifiersExample to access instance variables
        Identifiers example = new Identifiers();

        // Displaying the instance variable
        System.out.println("Instance Variable: " + example.instanceVar);

        // Displaying the static variable
        System.out.println("Static Variable: " + Identifiers.staticVar);

        // Displaying the constant variable
        System.out.println("Constant Variable PI: " + Identifiers.PI);

        // Displaying local variables
        System.out.println("Local Variable (int): " + localVar);
        System.out.println("Local Variable (String): " + greeting);

        // Calling a method with parameters (identifiers)
        example.displayMessage("This is a method parameter");
    }

    // Method with a parameter (identifier)
    public void displayMessage(String message) {
        // Method-level variable (identifier)
        String localMessage = "Method Local Variable: " + message;
        System.out.println(localMessage);
    }

    // Example of a method with a return type and an identifier
    public int addNumbers(int num1, int num2) {
        return num1 + num2;
    }
}



