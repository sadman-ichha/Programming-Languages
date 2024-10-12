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
