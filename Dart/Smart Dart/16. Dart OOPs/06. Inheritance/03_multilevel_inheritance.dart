// Base/Super/prent class
class Vehicle {
  void start() {
    print("Vehicle started");
  }

  void stop() {
    print("Vehicle stopped");
  }
}

// Intermediate class inheriting from Vehicle
class Car extends Vehicle {
  void drive() {
    print("Car is being driven");
  }
}

// Derived class inheriting from Car
class SportsCar extends Car {
  void accelerate() {
    print("Sports car is accelerating");
  }
}

void main() {
  // Creating an instance of the derived class
  SportsCar mySportsCar = SportsCar();

  // Accessing methods from different levels of inheritance
  mySportsCar.start();     // Output: Vehicle started
  mySportsCar.drive();     // Output: Car is being driven
  mySportsCar.accelerate(); // Output: Sports car is accelerating
  mySportsCar.stop();      // Output: Vehicle stopped
}



/*
  Multilevel Inheritance in Dart:

  In object-oriented programming, multilevel inheritance is a concept where a class inherits properties and behavior from another class,
  and then another class inherits from the derived class. This forms a chain or hierarchy of classes.

  Example:
  Consider three classes: Vehicle, Car, and SportsCar.
  - Vehicle is the base class with common methods like start and stop.
  - Car inherits from Vehicle and adds a drive method.
  - SportsCar inherits from Car and adds an accelerate method.

  This hierarchy allows SportsCar to have access to methods from both Car and Vehicle, creating a multilevel inheritance structure.

  Advantages of Multilevel Inheritance:
  - Code Reusability: Methods from the base class can be reused in derived classes.
  - Hierarchical Structure: Provides a clear hierarchy of classes with shared functionalities.

  Note: While multilevel inheritance can be useful, it's essential to design class hierarchies carefully to avoid potential issues like the diamond problem.

*/
