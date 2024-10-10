import 'person_for_function.dart';

void main() {
  // Creating an instance of the Person class
  Person person = Person();

  // Setting name using the user-defined setter method
  person.setName("John Doe");

  // Setting age using the user-defined setter method
  person.setAge(30);

  // Getting and displaying information using user-defined getter methods
  print("Name: ${person.getName}!\nAge: ${person.getAge}");
}


/*
In Dart, encapsulation is achieved through the use of access modifiers to control
  the visibility of class members. This example demonstrates encapsulation using
  user-defined getter and setter methods.

  [Class: Person]
  - The 'Person' class encapsulates a person's information with private instance variables:
    'String? _name' and 'int? _age'.
  - User-defined getter and setter methods are provided to access and update the private information.

  [Main Function]
  - In the 'main' function, an instance of the 'Person' class is created.
  - The user-defined getter and setter methods are used to access and update the person's information.

  This example illustrates how encapsulation helps protect the internal state of
  an object by restricting direct access to its private members, promoting data integrity.
*/
