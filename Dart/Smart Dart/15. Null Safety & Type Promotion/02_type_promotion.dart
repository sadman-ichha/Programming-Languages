void main() {
  // Example 1: Type Promotion through 'is' check
  dynamic myVar1 = "Hello, Dart!";
  
  if (myVar1 is String) {
    // Type promotion: myVar1 is now known to be a String
    print('Example 1: Length of String: ${myVar1.length}');
  }

  // Example 2: Type Promotion through 'as' cast
  dynamic myVar2 = 42;

  if (myVar2 is int) {
    // Type promotion: myVar2 is now known to be an int
    int intValue = myVar2 as int;
    print('Example 2: Double of Int: ${intValue * 2}');
  }

  // Example 3: Type Promotion in 'for' loop
  List<dynamic> myList = ["apple", "banana", "cherry"];

  for (var item in myList) {
    // Type promotion: item is now known to be a String
    print('Example 3: Length of String: ${item.length}');
  }

  // Example 4: Type Promotion in 'if' condition
  Object myObject = "Hello, Dart!";

  if (myObject is String) {
    // Type promotion: myObject is now known to be a String
    String myString = myObject;
    print('Example 4: Length of String: ${myString.length}');
  }
}



/*
 
  Note:
  This Dart file demonstrates the concept of Type Promotion in Dart.
  Type Promotion allows the Dart analyzer to narrow down the type of a variable within a specific code block based on runtime checks.
  
  DEF::Type promotion in dart means that dart automatically converts a value of one type to another type.
  Dart does this when it knows that the value is of a specific type.
  
  Types Promotion in Dart works in the following ways:??
  1. Promoting from general types to specific subtypes.
  2. Promoting from nullable types to non-nullable types.

  Example 1: Type Promotion through is check.
  Example 2: Type Promotion through as cast.
  Example 3: Type Promotion in a for loop.
  Example 4: Type Promotion in an if condition.
*/