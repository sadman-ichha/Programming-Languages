
// Class demonstrating encapsulation with user-defined getter and setter methods
class Person {
  // Private instance variables
  String? _name;
  int? _age;

  // User-defined getter for '_name'
  String? get getName {
    return _name;
  }

  // User-defined setter for '_name'
  void setName(String? name) {
    _name = name;
  }

  // User-defined getter for '_age'
  int? get getAge {
    return _age;
  }

  // User-defined setter for '_age'
  void setAge(int? age) {
    if (age != null && age >= 0) {
      _age = age;
    }
  }
}