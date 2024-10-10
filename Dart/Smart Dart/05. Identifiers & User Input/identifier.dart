void main() {
  // Variable identifier
  String firstName = "John";
  int age = 25;
  double piValue = 3.14;

  // Function identifier
  void printDetails() {
    print("Name: $firstName");
    print("Age: $age");
    print("Pi Value: $piValue");
  }

  // Create instances and use identifiers
  printDetails();

  Person person1 = Person("Alice", 30);
  Person person2 = Person("Bob", 28);

  person1.displayDetails();
  person2.displayDetails();
}

// Class identifier
class Person {
  String name;
  int age;

  Person(this.name, this.age);

  void displayDetails() {
    print("Person: $name, Age: $age");
  }
}



/*
   Identifiers in Dart:

   Identifiers are names given to various entities in Dart, including variables, functions, classes, and more. Dart has a set of rules for creating valid identifiers:

   Rules for Dart Identifiers:
   1. Must start with a letter (a-z, A-Z) or an underscore (_).
   2. Subsequent characters can include letters, digits (0-9), or underscores.
   3. Dart identifiers are case-sensitive.
   4. Should not be a reserved word (keywords used by Dart).

   Best Practices for Identifiers:
   - Choose meaningful and descriptive names for better code readability.
   - Follow camelCase naming convention for variables and functions (e.g., myVariable, calculateTotal).
   - Follow UpperCamelCase naming convention for classes (e.g., MyClass).
   - Avoid using single-character names unless they are commonly accepted (e.g., i, j for loop indices).

   Examples of Identifiers in Dart:

   // Variable identifier
   String firstName = "John";

   // Function identifier
   void calculateTotal(int quantity, double price) {
     // Function logic here
   }

   // Class identifier
   class MyPerson {
     String name;
     int age;

     MyPerson(this.name, this.age);
   }

   // Usage of identifiers
   void main() {
     String myVariable = "Hello, Dart!";
     calculateTotal(5, 10.5);

     MyPerson person1 = MyPerson("Alice", 30);
     print("Person: ${person1.name}, Age: ${person1.age}");
   }

   Remember, clear and well-chosen identifiers contribute to the maintainability and readability of your Dart code.

   Happy coding!
*/