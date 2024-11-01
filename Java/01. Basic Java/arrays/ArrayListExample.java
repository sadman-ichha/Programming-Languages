import java.util.ArrayList;

public class ArrayListExample {
    public static void main(String[] args) {
        // Creating an ArrayList
        ArrayList<Integer> numbersList = new ArrayList<>();

        // Adding elements
        numbersList.add(1);
        numbersList.add(2);
        numbersList.add(3);

        // Inserting an element
        numbersList.add(1, 10); // Insert 10 at index 1

        // Accessing elements
        System.out.println("Element at index 1: " + numbersList.get(1));

        // Modifying an element
        numbersList.set(2, 20); // Change value at index 2 to 20
        System.out.println("Modified element at index 2: " + numbersList.get(2));

        // Looping through the ArrayList for each loop
        System.out.println("All elements in the ArrayList:");
        for (int number : numbersList) {
            System.out.println(number);
        }
        int[] myInt = { 1, 5, 4, 6, 10, 12 };
        for (int i = 0; i < myInt.length; i += 1) {
            System.out.print(myInt[i] + " ");
        }

        // ArrayList size
        System.out.println("\nSize of the ArrayList: " + numbersList.size());
    }
}
