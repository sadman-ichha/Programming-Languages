/*
  
  ----Introduction Interface----
  In this section, you will learn the dart interface and how to implement an interface with the help of examples. 
  In Dart, every class is implicit interface. Before learning about the interface in dart, 
  you should have a basic understanding of the class and objects, inheritance and abstract class in Dart.
  
  ----Interface In Dart----
  An interface defines a syntax that a class must follow. It is a contract that defines the capabilities of a class. 
  It is used to achieve abstraction in the Dart programming language. When you implement an interface,
  you must implement all the properties and methods defined in the interface. Keyword implements is used to implement an interface.
  
  ----Interface In Dart----
  An interface defines a syntax that a class must follow. It is a contract that defines the capabilities of a class. 
  It is used to achieve abstraction in the Dart programming language. When you implement an interface, 
  you must implement all the properties and methods defined in the interface. Keyword implements is used to implement an interface.
  
  ----Implementing Interface In Dart----
  You must use the implements keyword to implement an interface. 
  The class that implements an interface must implement all the methods and properties of the interface.


  Note:
  This Dart file provides another example of using interfaces.
  It defines an interface 'Sound' with a method 'makeSound'.
  Two classes 'Dog' and 'Cat' implement the 'Sound' interface, providing their own implementations for the 'makeSound' method.
  
  ---Key Points To Remember---
  An interface is a contract that defines the capabilities of a class.
  Dart has no keyword interface, but you can use class or abstract class to declare an interface.
  Use abstract class to declare an interface.
  A class can extend only one class but can implement multiple interfaces.
  Using the interface, you can achieve multiple inheritance in Dart.
  It is used to achieve abstraction.
*/

// Interface 'Sound' with a method 'makeSound'
abstract class Sound {
  void makeSound();
}

// Class 'Dog' implementing the 'Sound' interface
class Dog implements Sound {
  @override
  void makeSound() {
    print('Dog barks: Woof! Woof!');
  }

  // Additional method specific to 'Dog'
  void fetch() {
    print('Dog is fetching a ball');
  }
}

// Class 'Cat' implementing the 'Sound' interface
class Cat implements Sound {
  @override
  void makeSound() {
    print('Cat meows: Meow! Meow!');
  }

  // Additional method specific to 'Cat'
  void climbTree() {
    print('Cat is climbing a tree');
  }
}

void main() {
  // Obj/instances of 'Dog' and 'Cat'
  Dog myDog = Dog();
  Cat myCat = Cat();

  // Calling the 'makeSound' method for both animals
  myDog.makeSound();
  myCat.makeSound();

  // Calling additional methods specific to each animal
  myDog.fetch();
  myCat.climbTree();
}
