/**
 * This program demonstrates the use of variables in Java.
 */
public class Variable {

    // Instance variable
    private final String instanceVariable = "I am an instance variable";

    // Static variable
    private  static final String staticVariable = "I am a static variable";

    public static void main(String[] args) {
        // Local variables
        int localVariableInt = 10;
        double localVariableDouble = 20.5;
        boolean localVariableBoolean = true;
        byte localByteVariable = 1;

        // Creating an instance of VariablesExample to access instance variables
        Variable example = new Variable();

        // Displaying the instance variable
        System.out.println(example.instanceVariable);

        // Displaying the static variable
        System.out.println(Variable.staticVariable);

        // Displaying local variables
        System.out.println("Integer local variable: " + localVariableInt);
        System.out.println("Double local variable: " + localVariableDouble);
        System.out.println("Boolean local variable: " + localVariableBoolean);
        System.out.println("Byte local variable: "+ localByteVariable);
    }

    // Instance method to demonstrate method-level variable
    public void methodExample() {
        // Method-level variable
        String methodVariable = "I am a method-level variable";
        System.out.println(methodVariable);
    }
}


/*
This code covers different types of variables in Java:

Instance Variables: Defined inside the class but outside any method. They are associated with objects of the class.

Static Variables: Defined with the static keyword. They belong to the class rather than any object instance.

Local Variables: Defined inside a method or block. They are only accessible within that method or block.

Method-level Variables: Local variables specific to a method, also demonstrated within the methodExample() method.

 */