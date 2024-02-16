void main() {
  // 1. Declaring variables with 'var'
  var age = 25;
  var name = "John";

  // 2. Type annotations
  int count = 10;
  double piValue = 3.14;
  String greeting = "Hello, Dart!";
  bool isStudent = true;

  // 3. Dynamic type
  dynamic dynamicVariable = "Dart is dynamic!";
  dynamicVariable = 43; // Can change type dynamically

  // 4. Final and Const
  final finalVariable = "I am final"; // Value cannot be changed
  const constantValue = 100; // Compile-time constant

  // 5. Null Safety
  String? nullableString; // Nullable variable
  String nonNullableString = "I am not null!";

  // 6. Variable Interpolation
  print("Name: $name, Age: $age");

  // 7. Scope
  if (true) {
    var localVar = "I'm local!";
    print(localVar);
  }
  // localVar is not accessible here.

  // 8. List and Map
  List<String> fruits = ["Apple", "Banana", "Orange"];
  Map<String, int> ages = {"John": 25, "Alice": 30, "Bob": 28};

  // Print the values
  print("Age: $age");
  print("Count: $count");
  print("Pi: $piValue");
  print("Greeting: $greeting");
  print("Is Student: $isStudent");
  print("Dynamic Variable: $dynamicVariable");
  print("Final Variable: $finalVariable");
  print("Constant Value: $constantValue");
  print("Nullable String: $nullableString");
  print("Non-Nullable String: $nonNullableString");

  // Print List and Map
  print("Fruits: $fruits");
  print("Ages: $ages");
}
