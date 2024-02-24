class ParentClass {
  String? name;
  int? age;

  void display() {
    print("Name: $name!");
    if (age != null) {
      print("Age: $age");
    } else {
      print("This person does not have an available age!");
    }
  }
}

class ChildClass extends ParentClass {
  void childClassMethod() {
    print("I'm from Child Class!");
  }
}

void main() {
  ParentClass parentInstance = ParentClass()
    ..name = "Sadman"
    ..age = 32;

  parentInstance.display();

  var childInstance = ChildClass();
  childInstance.name = "Ichha";
  childInstance.display();
  childInstance.childClassMethod();
}




/*
  Inheritance is a sharing of behaviour between two classes.
  It allows you to define a class that extends the functionality of another class. 
  The extend keyword is used for inheriting from parent class.

  This Dart file demonstrates different types of inheritance:
  1. Single Inheritance
  2. Multiple Inheritance (using mixins)
  3. Multilevel Inheritance
  4. Hierarchical Inheritance

  Advantages Of Inheritance In Dart
  It promotes reusability of the code and reduces redundant code.
  It helps to design a program in a better way.
  It makes code simpler, cleaner and saves time and money on maintenance.
  It facilitates the creation of class libraries.
  It can be used to enforce standard interface to all children classes.

*/