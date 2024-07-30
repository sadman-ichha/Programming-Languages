
public class EscapeSequences {

    public static void main(String[] args) {
        // Newline (\n)
        // Moves the cursor to the next line.
        System.out.println("This is the first line.\nThis is the second line.");

        // Carriage Return (\r)
        // Moves the cursor to the beginning of the current line.
        System.out.println("Carriage return example.\rOverwritten");

        // Tab (\t)
        // Inserts a horizontal tab space..
        System.out.println("Column1\tColumn2\tColumn3");

        // Backspace (\b)
        // Moves the cursor back one space.
        System.out.println("Backspace\b example");

        // Form Feed (\f)
        // Moves the cursor to the start of the next logical page.
        // This escape sequence may not have a visible effect in some consoles.
        System.out.println("Form feed\fexample");

        // Single Quote (\')
        // Inserts a single quote character.
        System.out.println("Single quote example: \'");

        // Double Quote (\")
        // Inserts a double quote character.
        System.out.println("Double quote example: \"");

        // Backslash (\\)
        // Inserts a backslash character.
        System.out.println("Backslash example: \\");
    }
}


public class VariableExample {
    public static void main(String[] args) {
        // Integer variable
        int age = 25;
        System.out.println("Age: " + age);

        // Double variable
        double height = 5.9;
        System.out.println("Height: " + height + " feet");

        // Character variable
        char initial = 'A';
        System.out.println("Initial: " + initial);

        // String variable
        String name = "Alice";
        System.out.println("Name: " + name);

        // Boolean variable
        boolean isStudent = true;
        System.out.println("Is student: " + isStudent);

        // Performing operations
        int a = 10;
        int b = 20;
        int sum = a + b;
        int difference = b - a;
        int product = a * b;
        double quotient = (double) b / a;

        System.out.println("Sum of " + a + " and " + b + " is: " + sum);
        System.out.println("Difference between " + b + " and " + a + " is: " + difference);
        System.out.println("Product of " + a + " and " + b + " is: " + product);
        System.out.println("Quotient of " + b + " divided by " + a + " is: " + quotient);
    }
}
