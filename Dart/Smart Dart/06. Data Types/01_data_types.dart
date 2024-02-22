   // ignore_for_file: unused_local_variable

   void main() {
     // Numbers
     int age = 25;
     double piValue = 3.14;
     num anyNumber = 42; // Can be int or double

     // String
     String name = "John";

     // Boolean
     bool isStudent = true;

     // Collections
     List<int> numbers = [1, 2, 3];
     Set<String> uniqueNames = {"Alice", "Bob"};
     Map<String, dynamic> person = {'name': 'John', 'age': 25};

     // Runes
     Runes myRunes = Runes('\u{1F609}'); // Smiling face emoji

     // Symbol
     Symbol mySymbol = #mySymbol;

     // Dynamic
     dynamic dynamicValue = "Hello";

     // Null
     int? nullableValue;

     // Display values
     print("Age: $age");
     print("Pi Value: $piValue");
     print("Name: $name");
     print("Is Student: $isStudent");
     print("Numbers: $numbers");
     print("Unique Names: $uniqueNames");
     print("Person: $person");
     print("Runes: $myRunes");
     print("Symbol: $mySymbol");
     print("Dynamic Value: $dynamicValue");
     print("Nullable Value: $nullableValue");
   }


/*
   Data Types in Dart:

   Dart is a statically-typed language, meaning variables have a specific type that is known at compile-time. Dart supports a range of built-in data types to handle different kinds of values.

   1. **Numbers:**
      - `int`: Represents integer values, e.g., `int age = 25;`.
      - `double`: Represents double-precision floating-point values, e.g., `double piValue = 3.14;`.
      - `num`: Represents a number, which can be either an `int` or `double`.

   2. **Strings:**
      - `String`: Represents a sequence of characters, e.g., `String name = "John";`.

   3. **Booleans:**
      - `bool`: Represents a boolean value (`true` or `false`), e.g., `bool isStudent = true;`.

   4. **Collections:**
      - `List`: Represents an ordered collection of values, e.g., `List<int> numbers = [1, 2, 3];`.
      - `Set`: Represents an unordered collection of unique values, e.g., `Set<String> uniqueNames = {"Alice", "Bob"};`.
      - `Map`: Represents an unordered collection of key-value pairs, e.g., `Map<String, dynamic> person = {'name': 'John', 'age': 25};`.

   5. **Runes:**
      - `Runes`: Represents a Unicode character sequence, e.g., `Runes myRunes = Runes('\u{1F609}');` for a smiling face emoji.

   6. **Symbol:**
      - `Symbol`: Represents an immutable, interned string used as an identifier, e.g., `Symbol mySymbol = #mySymbol;`.

   7. **Dynamic:**
      - `dynamic`: Represents a type that can change dynamically during runtime, e.g., `dynamic dynamicValue = "Hello";`.

   8. **Null:**
      - `Null`: Represents the absence of a value, e.g., `int? nullableValue;`.
      
*/