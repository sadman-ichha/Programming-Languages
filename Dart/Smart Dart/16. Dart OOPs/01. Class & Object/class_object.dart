// File: class_and_object_no_constructor.dart

// 1. Class
class Person {
  // 2. Properties (Attributes)
  String? name;
  int? age;

  // 3. Method
  void displayInfo() {
    print('$name, $age years old');
  }
}

void main() {
  // 4. Creating Objects without Constructor
  Person person1 = Person()
    ..name = 'Alice'
    ..age = 25;

  Person person2 = Person();
  person2.name = 'Bob';
  person2.age = 30;

  // 5. Accessing Properties and Methods
  print('Person 1:');
  person1.displayInfo();

  print('\nPerson 2:');
  person2.displayInfo();
}


/*
  Note:
  This Dart file provides a simple example of classes and objects without using a separate constructor.

  1. **Class:**
     - A class is a blueprint for creating objects. It defines the properties (attributes) and
       behavior (methods) that the objects will have.

  2. **Object:**
     - An object is an instance of a class. It represents a specific entity created based on the
       blueprint provided by the class.

*/