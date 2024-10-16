public class BreakContinueExample {
    public static void main(String[] args) {
        int i = 1;

        while (true) {
            if (i == 3) {
                i+=1;
                continue;
            }
            System.out.println(i);
            i += 1;
            if (i == 6) {
                break;
            }
        }
    }
}
