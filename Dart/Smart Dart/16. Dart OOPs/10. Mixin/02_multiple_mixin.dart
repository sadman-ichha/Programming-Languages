/*
  Dart File: multiple_mixins_example.dart

  Note:
  This Dart file demonstrates the usage of multiple mixins in a class.
  It defines two mixins, 'GreetMixin' and 'WalkMixin', each with their own methods.
  The 'Person' class incorporates both mixins using the 'with' keyword.

*/

// First Mixin 'GreetMixin' with a method 'greet'
mixin GreetMixin {
  void greet() {
    print('Greetings from the GreetMixin!');
  }
}

// Second Mixin 'WalkMixin' with a method 'walk'
mixin WalkMixin {
  void walk() {
    print('Walking from the WalkMixin!');
  }
}

// Class 'Person' using both 'GreetMixin' and 'WalkMixin'
class Person with GreetMixin, WalkMixin {
  String name;

  Person(this.name);

  // Method specific to 'Person'
  void introduce() {
    print('Hello, my name is $name.');
  }
}

void main() {
  Person sadman = Person('Sadman');

  // Calling methods from the class and mixins
  sadman.introduce(); // Calls the 'introduce' method from 'Person' class
  sadman.greet(); // Calls the 'greet' method from 'GreetMixin'
  sadman.walk(); // Calls the 'walk' method from 'WalkMixin'
}
