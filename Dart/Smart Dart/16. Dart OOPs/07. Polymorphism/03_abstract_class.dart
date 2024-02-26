// Abstract class 'Vehicle'
abstract class Vehicle {
  // Abstract method 'start' without implementation
  void start();
}

// Concrete class 'Car' implementing 'Vehicle'
class Car extends Vehicle {
  // Implementing the abstract method 'start' for 'Car'

  @override
  void start() {
    print('Car started');
  }

  // Additional method specific to 'Car'
  void drive() {
    print('Car is moving');
  }
}

// Concrete class 'Motorcycle' implementing 'Vehicle'
class Motorcycle extends Vehicle {
  // Implementing the abstract method 'start' for 'Motorcycle'
  @override
  void start() {
    print('Motorcycle started');
  }

  // Additional method specific to 'Motorcycle'
  void ride() {
    print('Motorcycle is on the road');
  }
}

void main() {
  // Creating instances of 'Car' and 'Motorcycle'
  Car myCar = Car();
  Motorcycle myMotorcycle = Motorcycle();

  // Calling the 'start' method for both vehicles
  myCar.start();
  myMotorcycle.start();

  // Calling the additional methods specific to each vehicle
  myCar.drive();
  myMotorcycle.ride();
}


/*
  Dart File: abstract_example.dart

  Note:
  This Dart file demonstrates another example of using the 'abstract' keyword.
  It includes an abstract class named 'Vehicle' with an abstract method 'start'.
  Two concrete classes 'Car' and 'Motorcycle' extend the 'Vehicle' class and implement the 'start' method.
  
  Introduction
  In this section, you will learn about dart abstract class. Before learning about abstract class, 
  you should have a basic understanding of class, object, constructor, and inheritance. 
  Previously you learned how to define a class. These classes are concrete classes. 
  You can create an object of concrete classes, but you cannot create an object of abstract classes.

  Abstract Class
  Abstract classes are classes that cannot be initialized. It is used to define the behavior of a class that can be inherited by other classes. 
  An abstract class is declared using the keyword abstract.
*/
