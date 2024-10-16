/*
It is also possible to place a loop inside another loop. This is called a nested loop.

The "inner loop" will be executed one time for each iteration of the "outer loop":

Nested loops are loops placed inside another loop. The inner loop will run completely for every iteration of the outer loop.
This is useful for tasks that involve iterating over multi-dimensional data structures, such as 2D arrays or matrices.
 

The outer loop runs first, and for each iteration of the outer loop, the inner loop completes all of its iterations.
Example: In the multiplication table, the outer loop controls the rows, while the inner loop handles the columns.


*/

public class NestedLoopExample {

    public static void main(String[] args) {
        // Outer loop (rows)
        for (int i = 1; i <= 3; i++) {
            // Inner loop (columns)
            for (int j = 1; j <= 3; j++) {
                System.out.println("i = " + i + ", j = " + j);
            }
        }

        // Example: Printing a multiplication table
        System.out.println("Multiplication Table:");
        for (int i = 1; i <= 5; i++) {
            for (int j = 1; j <= 5; j++) {
                System.out.print(i * j + "\t");
            }
            System.out.println(); // Move to the next line after each row
        }
    }
}
