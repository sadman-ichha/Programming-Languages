public class EscapeSequences {

    public static void main(String[] args) {
        // Newline (\n)
        // Moves the cursor to the next line.
        System.out.println("This is the first line.\nThis is the second line.");

        // Carriage Return (\r)
        // Moves the cursor to the beginning of the current line.
        System.out.println("Carriage return example.\rOverwritten");

        // Tab (\t)
        // Inserts a horizontal tab space..
        System.out.println("Column1\tColumn2\tColumn   3");

        // Backspace (\b)
        // Moves the cursor back one space.
        System.out.println("Backspace\b example");

        // Form Feed (\f)
        // Moves the cursor to the start of the next logical page.
        // This escape sequence may not have a visible effect in some consoles.
        System.out.println("Form feed\fexample");

        // Single Quote (\')
        // Inserts a single quote character.
        System.out.println("Single quote example: \'");

        // Double Quote (\")
        // Inserts a double quote character.
        System.out.println("Double quote example: \"");

        // Backslash (\\)
        // Inserts a backslash character.
        System.out.println("Backslash example: \\");
    }
}
