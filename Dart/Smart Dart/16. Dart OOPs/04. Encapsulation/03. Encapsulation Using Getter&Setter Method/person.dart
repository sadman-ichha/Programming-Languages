// Class demonstrating encapsulation in Dart
class Person {
  String? name; // Public field
  int? _age; // Private field

  // Public method to introduce the person
  void introduceYourself() {
    print("Hello, my name is $name, and I am $_age years old.");
  }

  // Constructor with optional named parameter 'name'
  Person({this.name});

  // Setter for private field '_age'
  void set setAge(int value) {
    if (value >= 0) {
      _age = value;
    }
  }

  // Getter for private field '_age'
  int get getAge => _age!;

  // int get getAge {
  //   return _age!;
  // }
}
