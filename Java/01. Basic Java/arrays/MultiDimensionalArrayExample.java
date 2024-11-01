public class MultiDimensionalArrayExample {
    public static void main(String[] args) {
        // Declaring and initializing a 2D array
        int[][] matrix = {
            {1, 2, 3},
            {4, 5, 6},
            {7, 8, 9}
        };

        // Accessing elements
        System.out.println("Element at row 1, column 2: " + matrix[1][2]); // Output: 6

        // Modifying an element
        matrix[0][1] = 20; // Change value at row 0, column 1 to 20
        System.out.println("Modified element at row 0, column 1: " + matrix[0][1]); // Output: 20

        // Looping through the 2D array
        System.out.println("All elements in the matrix:");
        for (int i = 0; i < matrix.length; i++) { // Iterate through rows
            for (int j = 0; j < matrix[i].length; j++) { // Iterate through columns
                System.out.print(matrix[i][j] + " ");
            }
            System.out.println(); // New line after each row
        }
    }
}
