public class DoWhileLoopExample {
    public static void main(String[] args) {
        int i = 1;

        // Do-while loop: Print numbers from 1 to 5
        do {
            System.out.println("Iteration: " + i);
            i+=1; // Increment the counter
        } while (i <= 5);

        // Example: Continue adding numbers until the sum reaches or exceeds 15
        int sum = 0;
        int num = 1; // Starting number
        do {
            sum += num;
            System.out.println("Added " + num + ", Sum: " + sum);
            num++;
        } while (sum < 15);
    }
}
