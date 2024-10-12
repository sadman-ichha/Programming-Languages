
/*  In Java, there are two types of casting:

 Widening Casting (automatically) - converting a smaller type to a larger type size
 byte -> short -> char -> int -> long -> float -> double

 Narrowing Casting (manually) - converting a larger type to a smaller size type
 double -> float -> long -> int -> char -> short -> byte

Widening Casting
Widening casting is done automatically when passing a smaller size type to a larger size type:

 Narrowing Casting
Narrowing casting must be done manually by placing the type in parentheses () in front of the value:
 */

 
public class TypeCastingAndConversion {

    public static void main(String[] args) {

        // Widening Casting (Automatic Conversion)
        int intVal = 100;
        double doubleVal = intVal; // Implicit casting from int to double
        System.out.println("Widening Casting:");
        System.out.println("Int value: " + intVal);
        System.out.println("Double value (after widening casting): " + doubleVal);

        // Narrowing Casting (Explicit Conversion)
        double doubleNum = 9.78;
        int intNum = (int) doubleNum; // Explicit casting from double to int
        System.out.println("\nNarrowing Casting:");
        System.out.println("Double value: " + doubleNum);
        System.out.println("Int value (after narrowing casting): " + intNum);

        // Type Conversion using Wrapper Classes
        // Convert String to int
        String str = "123";
        int convertedInt = Integer.parseInt(str);
        System.out.println("\nType Conversion:");
        System.out.println("String value: " + str);
        System.out.println("Converted int value: " + convertedInt);

        // Convert int to String
        int anotherInt = 456;
        String convertedString = Integer.toString(anotherInt);
        System.out.println("Int value: " + anotherInt);
        System.out.println("Converted String value: " + convertedString);

        // Convert String to double
        String doubleStr = "45.67";
        double convertedDouble = Double.parseDouble(doubleStr);
        System.out.println("String value: " + doubleStr);
        System.out.println("Converted double value: " + convertedDouble);

        // Convert double to String
        double anotherDouble = 12.34;
        String doubleToStr = Double.toString(anotherDouble);
        System.out.println("Double value: " + anotherDouble);
        System.out.println("Converted String value: " + doubleToStr);
    }
}
