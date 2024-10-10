// Base/Super/Preant class
class Vehicle {
  String? brand;
  String? model;

  Vehicle(this.brand, this.model);

  void displayInfo() {
    print('$brand $model');
  }
}

// Derived class 1
class Car extends Vehicle {
  int? numberOfDoors;

  Car(String brand, String model, this.numberOfDoors) : super(brand, model);

  void displayCarInfo() {
    displayInfo();
    print('Doors: $numberOfDoors');
  }
}

// Derived class 2
class Bike extends Vehicle {
  String? suspensionType;

  Bike(String brand, String model, this.suspensionType) : super(brand, model);

  void displayBikeInfo() {
    displayInfo();
    print('Suspension: $suspensionType');
  }
}

void main() {
  // instances/obj of derived classes
  var sedanCar = Car('Toyota', 'Camry', 4);
  var mountainBike = Bike('Giant', 'Trance', 'Front and Rear');

  // Accessing shared method and property from the base class
  sedanCar.displayInfo();
  mountainBike.displayInfo();

  // Accessing specific methods and properties from derived classes
  sedanCar.displayCarInfo();
  mountainBike.displayBikeInfo();
}



/*
  Hierarchical Inheritance in Dart:

  In this example, consider three classes: Vehicle (base class), Car, and Bike (derived classes).
  - Vehicle has common properties like brand and model.
  - Car and Bike inherit from Vehicle and add specific features like the number of doors and type of suspension, respectively.

  This creates a hierarchical structure where Car and Bike share common properties from Vehicle while having their own unique characteristics.

*/
