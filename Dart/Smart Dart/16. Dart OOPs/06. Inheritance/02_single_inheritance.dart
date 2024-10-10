class Parent {
  String? name;

  Parent(this.name);

  void display() {
    print("Parent Class - Name: $name");
  }
}

// Child Class inheriting from Parent Class
class Child extends Parent {
  int? age;

  // Constructor for Child class
  Child(String name, this.age):super(name) ;

  // Method specific to the Child class
  void displayChild() {
    print("Child Class - Name: $name, Age: $age");
  }
}

void main() {
  // Instance/obj of the Child class
  Child childInstance = Child("John Doe", 25);

  // Accessing methods from both Parent and Child classes
  childInstance.display();      // Calls the display method from the Parent class
  childInstance.displayChild(); // Calls the displayChild method from the Child class
}





/*

  Note:
  Dart supports single inheritance, meaning a class can inherit from only one superclass.
  In this example, we have a Parent class and a Child class.

  - Parent Class:
    - Has a 'name' property.
    - Includes a 'display' method to showcase basic information.

  - Child Class:
    - Inherits from the Parent class using the 'extends' keyword.
    - Adds an 'age' property.
    - Includes a 'displayChild' method specific to the Child class.

  The main function demonstrates creating an instance of the Child class,
  accessing methods from both the Parent and Child classes.

  This example illustrates the simplicity of single inheritance in Dart,
  where a subclass can extend the functionality of a single superclass.

*/
