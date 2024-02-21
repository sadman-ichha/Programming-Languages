// ignore_for_file: dead_code, unused_local_variable

// Required and Late Initialization
class Person {
  late String name; // Late initialization for non-nullable variable
  Person({required String this.name});
}

void main() {
  // Nullable and Non-Nullable Types
  String? nullableString; // Nullable
  String nonNullableString = 'Hello, Dart!'; // Non-Nullable

  // Null-aware Operators (?)
  int? nullableValue;
  int result = nullableValue ?? 10;

  // Late Keyword
  late String lateInitializedString;
  lateInitializedString = 'Late Initialization';

  // Creating a Person instance
  Person person = Person(name: 'John Doe');

  // Null Safety in Functions
  String? getName() => 'John Doe';
  String greet(String name) => 'Hello, $name';

  // Accessing results using null-aware operators
  print('Result: $result');
  print('Late Initialized String: $lateInitializedString');
  print('Greeting: ${greet(getName() ?? "Guest")}');

  // Nullable Collections
  List<int>? nullableList;
  Map<String, int>? nullableMap;

  // Migrating to Sound Null Safety
  // Use the --no-sound-null-safety flag during gradual migration

  // Null Safety with Async/Await
  Future<String?> fetchData() async {
    return 'Async Data';
  }

  // Handling nullable collections
  print('Nullable List Length: ${nullableList?.length}');
  print('Nullable Map Keys: ${nullableMap?.keys}');

  // Creating a Person instance with a required parameter
  Person person2 = Person(name: 'John Doe');
  print('Person\'s Name: ${person2.name}');

  // Using async/await with null safety
  Future<String?> asyncResult = fetchData();
  print('Async Result: $asyncResult');

  // Accessing properties using null-aware operators
  print('Nullable String Length: ${nullableString?.length}');
  print('Result: $result');
  print('Late Initialized String: $lateInitializedString');
  print('Person\'s Name: ${person.name}');
}

/*
  Note:
  This Dart file demonstrates the features of Null Safety in Dart.
  It covers nullable and non-nullable types, null-aware operators, the late keyword,
  required and late initialization, showcasing how null safety improves code reliability.
  
  This Dart file demonstrates the features of Null Safety in Dart.
  It covers the following expressions:

  1. Nullable and Non-Nullable Types:
     - `String?`: Declares a nullable String variable.
     - `String`: Declares a non-nullable String variable.

  2. Null-aware Operators:
     - `int?`: Declares a nullable int variable.
     - `result`: Uses the null-aware operator `??` to provide a default value if `nullableValue` is null.

  3. Late Keyword:
     - `late String`: Declares a non-nullable String variable to be initialized later.
     - `lateInitializedString`: Initializes the late-initialized variable.

  4. Required and Late Initialization:
     - `class Person`: Defines a class with a late-initialized, non-nullable String variable.
     - `Person({required String initialName})`: Constructor ensures a required, non-null value.

  5. Accessing Properties using Null-aware Operators:
     - `nullableString?.length`: Accesses the length only if `nullableString` is not null.
     - `result`: Prints the result obtained from the null-aware operator.
     - `lateInitializedString`: Prints the late-initialized String.
     - `person.name`: Accesses the non-nullable, late-initialized variable.

  Author: [Sadman Ichha]
*/
