
# Escape Sequences in Java

Escape sequences in Java are special characters used in strings to perform tasks that otherwise would be difficult or impossible to do with standard character literals. They are used to represent characters that are not easily typed into a program, such as newlines, tabs, or quotation marks. Each escape sequence begins with a backslash (`\`).

## Common Escape Sequences

1. **Newline (`\n`)**
   - Moves the cursor to the next line.
   - Example: 
     ```java
     System.out.println("Hello\nWorld!");
     ```
     Output:
     ```
     Hello
     World!
     ```

2. **Carriage Return (`\r`)**
   - Moves the cursor to the beginning of the current line.
   - Example:
     ```java
     System.out.println("Hello\rWorld!");
     ```
     Output:
     ```
     World!
     ```

3. **Tab (`\t`)**
   - Inserts a horizontal tab space.
   - Example:
     ```java
     System.out.println("Hello\tWorld!");
     ```
     Output:
     ```
     Hello   World!
     ```

4. **Backspace (`\b`)**
   - Moves the cursor back one space.
   - Example:
     ```java
     System.out.println("Hello\bWorld!");
     ```
     Output:
     ```
     HellWorld!
     ```

5. **Form Feed (`\f`)**
   - Moves the cursor to the start of the next logical page.
   - Example:
     ```java
     System.out.println("Hello\fWorld!");
     ```

6. **Single Quote (`\'`)**
   - Inserts a single quote character.
   - Example:
     ```java
     System.out.println("Hello\'World!");
     ```
     Output:
     ```
     Hello'World!
     ```

7. **Double Quote (`\"`)**
   - Inserts a double quote character.
   - Example:
     ```java
     System.out.println("Hello\"World!");
     ```
     Output:
     ```
     Hello"World!
     ```

8. **Backslash (`\\`)**
   - Inserts a backslash character.
   - Example:
     ```java
     System.out.println("Hello\\World!");
     ```
     Output:
     ```
     Hello\World!
     ```

## Example Program

Here's an example program demonstrating some of these escape sequences:

```java
public class EscapeSequencesExample {
    public static void main(String[] args) {
        System.out.println("Line1\nLine2");          // Newline
        System.out.println("Column1\tColumn2");      // Tab
        System.out.println("Quote: \"Hello\"");   // Double Quote
        System.out.println("Backslash: \\");        // Backslash
    }
}
```

### Explanation:
- `\n` moves to a new line, so "Line1" and "Line2" appear on separate lines.
- `\t` inserts a tab space, so "Column1" and "Column2" are separated by a tab space.
- `\"` inserts a double quote character in the output.
- `\\` inserts a backslash character in the output.

### Output:

When you run this program, the output will be:

```
Line1
Line2
Column1    Column2
Quote: "Hello"
Backslash: \
```

## Summary

Escape sequences are a powerful way to include special characters in your strings. They allow you to format your output and include characters that are otherwise difficult to insert directly into your strings. Understanding and using escape sequences effectively is an important skill in Java programming.
