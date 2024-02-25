class MathOperations {
  // Static variable
  static const double pi = 3.14;

  // Static method
  static double calculateArea(double radius) {
    return pi * radius * radius;
  }
}

void main() {
  // Accessing static variable directly using the class name
  print("Value of pi: ${MathOperations.pi}");

  // Calling static method directly using the class name
  double area = MathOperations.calculateArea(5.0);
  print("Area of the circle: $area");
}


/*
  Static Keyword in Dart:

  This Dart file demonstrates the usage of the 'static' keyword in Dart.
  'static' is used to define class-level members that are shared among all instances of the class.
   
  Key Points To Remember
  Static members are accessed using the class name.
  All instances of a class share static members.
  
*/