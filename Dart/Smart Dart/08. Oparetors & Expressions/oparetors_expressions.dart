// ignore_for_file: dead_code

void main() {
  // Arithmetic Operators
  int operand1 = 10;
  int operand2 = 3;
  print("----Arithmetic Operators----");
  print("Addition: ${operand1 + operand2}");
  print("Subtraction: ${operand1 - operand2}");
  print("Multiplication: ${operand1 * operand2}");
  print("Division: ${operand1 / operand2}");
  print("Remainder: ${operand1 % operand2}");

  // Relational Operators
  print("\n----Relational Operators----");
  print("Greater Than: ${operand1 > operand2}");
  print("Equal To: ${operand1 == operand2}");
  print("Not Equal To: ${operand1 != operand2}");

  // Logical Operators
  print("\n----Logical Operators----");
  bool isTrue = true;
  bool isFalse = false;
  print("Logical AND: ${isTrue && isFalse}");
  print("Logical OR: ${isTrue || isFalse}");
  print("Logical NOT: ${!isTrue}");

  // Assignment Operators
  print("\n----Assignment Operators----");
  int result = 0;
  result += 5; // result = 0 + 5 = 5;
  result *= 3; // result = 5 * 3 = 15;
  print("Result: $result");

  // Conditional (Ternary) Operator
  print("\n----Conditional (Ternary) Operator----");
  int number = 42;
  String resultString = (number % 2 == 0) ? "Even" : "Odd";
  print("Number is $resultString");

  // Type Test Operators
  print("\n-----Type Test Operators----");
  Object myObject = "Hello Dart!";
  print("Is a String? ${myObject is String}");
  print("Is not an int? ${myObject is! int}");

  // Bitwise Operators
  print("\n-----Bitwise Operators----");
  int num1 = 5; // Binary: 101
  int num2 = 3; // Binary: 011
  print("Bitwise AND: ${num1 & num2}");
  print("Bitwise OR: ${num1 | num2}");
  print("Bitwise XOR: ${num1 ^ num2}");
  print("Bitwise NOT: ${~num1}");
  print("Left Shift: ${num1 << 1}");
  print("Right Shift: ${num1 >> 1}");

  // Unary Operators
  print("\n----Unary Operators----");
  int unaryOperand = 42;
  print("Negation: ${-unaryOperand}");
  bool isFlag = true;
  print("Logical NOT: ${!isFlag}");
  int binaryValue = 1010; // Binary: 1010
  print("Bitwise NOT: ${~binaryValue}");
  int preIncrement = ++unaryOperand;
  print("Pre-increment: $preIncrement");
  int postIncrement = unaryOperand++;
  print("Post-increment: $postIncrement");

  // Cascade Notation (.. double dot) Operator
  print("\n---Cascade Notation (.. double dot) Operators----");
  String concatenatedResult = (StringBuffer()
        ..write("Dart ")
        ..write("is ")
        ..write("awesome!"))
      .toString();
  print("Cascade Notation: $concatenatedResult");

  // Null-aware Operators
  print("\n---Null-aware Operators----");
  int? nullableValue;
  int defaultValue = nullableValue ?? 10;
  print("Null-aware Coalescing: $defaultValue");
  String? nullableString = "";
  int length = nullableString.length;
  print("Null-aware Access: $length");

  // Member Access Operators
  print("\n---Member Access(.) Operators----");
  String greeting = "Hello, Dart!";
  print("Length: ${greeting.length}");
  String? nullableGreeting = null;
  print("Nullable Length: ${nullableGreeting?.length}");
}



/*
   Operators and Expressions in Dart:

   Dart provides a variety of operators for performing operations on variables and values. 
   Expressions are combinations of variables, values, and operators that produce a result.

   1. **Arithmetic Operators:**
      - `+`: Addition
      - `-`: Subtraction
      - `*`: Multiplication
      - `/`: Division
      - `%`: Remainder (Modulo)
      - `++`: Increment
      - `--`: Decrement

   2. **Relational Operators:**
      - `==`: Equal to
      - `!=`: Not equal to
      - `>`: Greater than
      - `<`: Less than
      - `>=`: Greater than or equal to
      - `<=`: Less than or equal to

   3. **Logical Operators:**
      - `&&`: Logical AND
      - `||`: Logical OR
      - `!`: Logical NOT

   4. **Assignment Operators:**
      - `=`: Assign
      - `+=`, `-=`, `*=`, `/=`: Compound assignment operators

   5. **Conditional (Ternary) Operator:**
      - `condition ? expr1 : expr2`: If the condition is true, evaluates `expr1`; otherwise, evaluates `expr2`.

   6. **Type Test Operators:**
      - `is`: True if the object has the specified type.
      - `is!`: True if the object does not have the specified type.

   7. **Bitwise Operators:**
      - `&`: Bitwise AND
      - `|`: Bitwise OR
      - `^`: Bitwise XOR
      - `~`: Bitwise NOT
      - `<<`: Left shift
      - `>>`: Right shift

   8. **Unary Operators:**
      - `-expr`: Negation
      - `!expr`: Logical NOT
      - `~expr`: Bitwise NOT
      - `++expr`, `expr++`: Pre-increment and post-increment
      - `--expr`, `expr--`: Pre-decrement and post-decrement

   9. **Cascade Notation (`..` double dot) Operator:**
      - Allows you to make a sequence of operations on the same object.

   10. **Null-aware Operators:**
       - `??`: If the expression on the left is non-null, it returns it; otherwise, it evaluates and returns the expression on the right.
       - `?.`: Conditional access; used to call a method/getter on an object if it is non-null.

   11. **Member Access Operators:**
       - `.`: Access a member of an object.
       - `?.`: Conditional member access; used to call a method/getter on an object if it is non-null.
   
 */