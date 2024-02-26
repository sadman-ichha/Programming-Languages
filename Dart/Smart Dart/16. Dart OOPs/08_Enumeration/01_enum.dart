// Defining an enum named 'Color' with a set of constant values
enum Color {
  red,
  green,
  blue,
  yellow,
}

void main() {
  // Using enum values
  Color myColor = Color.blue;

  // Switch statement with enums
  switch (myColor) {
    case Color.red:
      print("Selected color: Red");
      break;
    case Color.green:
      print("Selected color: Green");
      break;
    case Color.blue:
      print("Selected color: Blue");
      break;
    case Color.yellow:
      print("Selected color: Yellow");
      break;
    default:
      print("Invalid color");
  }
}


/*
  Enums in Dart: Example

  This Dart file provides an example illustrating the usage of enums in Dart.
  Enums are used to represent a fixed number of constant values.
  
  Advantages Of Enum In Dart-----
  It is used to define a set of named constants.
  Makes your code more readable and maintainable.
  It makes the code more reusable and makes it easier for developers.

  Characteristics Of Enum-------
  It must contain at least one constant value.
  Enums are declared outside the class.
  Used to store a large number of constant values.
*/