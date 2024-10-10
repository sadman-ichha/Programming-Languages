void main() {
  // Code demonstrating various aspects of functions in Dart

  // 1. Function Declaration
  void greet(String name) {
    print('Hello, $name!');
  }

  // 2. Function Parameters
  void printDetails(String name, int age, {String country = 'Unknown'}) {
    print('Name: $name, Age: $age, Country: $country');
  }

  // 3. Return Types
  String getMessage() {
    return 'Dart functions are powerful!';
  }

  // 4. Arrow Functions (Short Syntax)
  int multiply(int a, int b) => a * b;

  // 5. Anonymous Functions
  var addNumbers = (int x, int y) {
    return x + y;
  };

  // 6. Higher-Order Functions
  int operate(int x, int y, int Function(int, int) operation) {
    return operation(x, y);
  }

  // 7. Lexical Closures
  Function makeMultiplier(int factor) {
    return (int number) => number * factor;
  }

  // 8. Named Parameters
  void printProfile(
      {required String name, required int age, String country = 'Unknown'}) {
    print('Name: $name, Age: $age, Country: $country');
  }

  // 9. Function Expressions
  var square = (int number) => number * number;

  // 10. Optional Parameters
  void printMessage(String message, [String? prefix, String suffix = '']) {
    print('$prefix$message$suffix');
  }

  // Invoking functions
  print("---Function Declaration---");
  greet('Alice');
  print("\n---Function Parameters---");
  printDetails('Bob', 40, country: 'Bangladesh');
  print("\n---Return Types---");
  print(getMessage());
  print("\n---Arrow Functions---");
  print('Product: ${multiply(3, 4)}');
  print("\n---Anonymous Functions---");
  print('Sum: ${addNumbers(5, 7)}');
  print("\n---Higher-Order Functions---");
  print('Operation Result: ${operate(10, 2, (a, b) => a ~/ b)}');
  print("\n---Lexical Closures---");
  var doubleFunction = makeMultiplier(2);
  print('Doubled: ${doubleFunction(5)}');
  print("\n---Named Parameters---");
  printProfile(name: 'Charlie', age: 30);
  print("\n---Function Expressions---");
  print('Square: ${square(4)}');
  print("\n---Optional Parameters---");
  printMessage('Hello', 'Prefix: ', ' !!!');
}




/*

  Note:
  This Dart file provides a comprehensive overview of functions in Dart.
  It covers the following aspects:

  1. Function Declaration:
     - Syntax: `returnType functionName(parameters) { // code }`

  2. Function Parameters:
     - Required Parameters: `void greet(String name) { // code }`
     - Default Parameters: `void printDetails(String name, int age, {String country = 'Unknown'}) { // code }`

  3. Return Types:
     - Specifying the type of value a function returns.

  4. Arrow Functions (Short Syntax):
     - Using `=>` for concise one-liner functions.

  5. Anonymous Functions:
     - Functions without a name.

  6. Higher-Order Functions:
     - Functions that take other functions as parameters.

  7. Lexical Closures:
     - Functions that can access variables from their lexical scope.

  8. Named Parameters:
     - Assigning values to parameters by name.

  9. Function Expressions:
     - Defining functions without explicitly declaring a function.

  10. Optional Parameters:
      - Making function parameters optional.

*/