import 'person.dart';

void main() {
  // Creating a new Person object & using cascade notation (..) to set the 'name' property
  Person person = Person()..name = "Sadman";

  // Accessing public field and method
  print("Name: ${person.name}");

  // Using setter to update private field
  person.setAge = 20;

  // Accessing private field and using getter
  print("Age: ${person.getAge}");

  // Calling the introduceYourself method to display information about the person
  person.introduceYourself();
}


/*

  In Dart, encapsulation is achieved through the use of access modifiers to control
  the visibility of class members. This example demonstrates encapsulation without
  using explicit getter and setter methods.

  Author: [Your Name]
  Date: [Current Date]

  [Class: Person]
  - The 'Person' class encapsulates a person's information with private instance variables:
    'String? _name' and 'int? _age'.
  - The constructor initializes the private variables.
  - Public methods are provided to access and update the private information.

  [Main Function]
  - In the 'main' function, an instance of the 'Person' class is created.
  - The public methods are used to access and update the person's information.

  This example illustrates how encapsulation helps protect the internal state of
  an object by restricting direct access to its private members, promoting data integrity.
  
*/


