
public class MathMethodsExample {

    public static void main(String[] args) {
        // Maximum of two numbers
        int maxNumber = Math.max(10, 20);
        System.out.println("Max of 10 and 20: " + maxNumber);

        // Minimum of two numbers
        int minNumber = Math.min(10, 20);
        System.out.println("Min of 10 and 20: " + minNumber);

        // Square root of a number
        double sqrtValue = Math.sqrt(64.0);
        System.out.println("Square root of 64: " + sqrtValue);

        // Power of a number (2 raised to the power of 3)
        double powerValue = Math.pow(2, 3);
        System.out.println("2 raised to the power of 3: " + powerValue);

        // Absolute value of a number
        int absValue = Math.abs(-10);
        System.out.println("Absolute value of -10: " + absValue);

        // Generating a random number between 0.0 and 1.0
        double randomValue = Math.random();
        System.out.println("Random number between 0.0 and 1.0: " + randomValue);

        // Generating a random number between 0.0 and 1.0
        double randomValues = Math.random()*101;
        System.out.println("Random number between 0.0 and 100.0: " + randomValues);

        // Trigonometric functions: sine and cosine
        double angle = Math.toRadians(45);  // Convert 45 degrees to radians
        System.out.println("Sine of 45 degrees: " + Math.sin(angle));
        System.out.println("Cosine of 45 degrees: " + Math.cos(angle));

        // Logarithm of a number
        double logValue = Math.log(10);
        System.out.println("Natural logarithm of 10: " + logValue);

        // Exponential of a number (e raised to the power of 2)
        double expValue = Math.exp(2);
        System.out.println("Exponential of 2 (e^2): " + expValue);
    }
}
