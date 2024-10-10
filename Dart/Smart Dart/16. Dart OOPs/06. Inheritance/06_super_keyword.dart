/*
  Super Keyword in Dart:

  The 'super' keyword in Dart is used to refer to the superclass (parent class) from within a subclass (child class).
  It is often used to access members (fields or methods) of the superclass or to call the constructor of the superclass.

  This example demonstrates the use of 'super' in a scenario where a base class (Vehicle) has properties,
  and two derived classes (Car and Bike) extend the base class and add their own specific properties.
  The 'super' keyword is used to call the constructor of the superclass.
  
  Key Points To Remember:
  The super keyword is used to access the parent class members.
  The super keyword is used to call the method of the parent class.

*/

class Laptop {
    void show() {
        print("Laptop show method");
    }
}

class MacBook extends Laptop {
    void show() {
        super.show(); // Calling the show method of the parent class
        print("MacBook show method");
    }
}

void main() {
  // Creating an object of the MacBook class
  MacBook macbook = MacBook();
  macbook.show();
}