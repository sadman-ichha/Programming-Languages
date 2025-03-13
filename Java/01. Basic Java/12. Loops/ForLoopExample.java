public class ForLoopExample {
    public static void main(String[] args) {
        int[] x = { 1, 2 };
        for (int i = 1; i <= x.length; i += 1) {
            System.err.println("Outer Loop: \n" + i);
            for (int j = 1; j <= 5; j += 1) {
                System.out.println("Inner loop: " + j);
            }
        }

    }
}
