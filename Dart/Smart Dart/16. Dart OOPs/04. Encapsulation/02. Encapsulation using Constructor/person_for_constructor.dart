// Class demonstrating encapsulation without explicit getter and setter methods
class Person {
  // Private instance variables
  String? _name;
  int? _age;

  // Constructor for initializing private variables
  Person(this._name, this._age);

  // Public method to display person's information
  void displayInfo() {
    print("Name: $_name, Age: $_age");
  }

  // Public method to update the person's age
  void increaseAge() {
    if (_age != null) {
      _age = _age! + 1;
    }
  }
}