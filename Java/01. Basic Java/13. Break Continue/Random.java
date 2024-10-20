// Write a code for fibbonachi series using break and continue statement
import java.util.Scanner;

public class Random {
    @SuppressWarnings("resource")
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the number of terms you want in the fibbonachi series");
        int n = sc.nextInt();
        int a = 0;
        int b = 1;
        System.out.print(a + " ");
        System.out.print(b + " ");
        for (int i = 0; i < n - 2; i++) {
            int c = a + b;
            if (c > 100) {
                break;
            }
            System.out.print(c + " ");
            a = b;
            b = c;
        }
    }
}




