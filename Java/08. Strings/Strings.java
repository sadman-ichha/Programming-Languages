/*
 Strings are used for storing text.

A String variable contains a collection of characters surrounded by double quotes
 */

public class Strings {
    public static void main(String[] args) {
        // Creating Strings
        String greeting = "Hello, World!";
        String name = "Sadman";

        // String concatenation using the + operator
        String welcomeMessage = greeting + " Welcome " + name + "!";
        System.out.println("Concatenated String (+ operator): " + welcomeMessage);
        // Outputs: Hello, World! Welcome Sadman!

        // String concatenation using the concat() method
        String welcomeMessage2 = greeting.concat(" Welcome ").concat(name).concat("!");
        System.out.println("Concatenated String (concat() method): " + welcomeMessage2);
        // Outputs: Hello, World! Welcome Sadman!

        // Getting the length of a String
        int length = welcomeMessage.length();
        System.out.println("Length of the string: " + length); // Outputs: 29

        // Accessing individual characters
        char firstChar = greeting.charAt(0);
        System.out.println("First character: " + firstChar); // Outputs: H

        // Extracting a substring
        String extracted = greeting.substring(7, 12);
        System.out.println("Extracted substring: " + extracted); // Outputs: World

        // Comparing Strings
        String anotherGreeting = "Hello, World!";
        boolean isEqual = greeting.equals(anotherGreeting);
        System.out.println("Are the strings equal? " + isEqual); // Outputs: true
    }
}
