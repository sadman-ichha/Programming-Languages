// 1. Class
class Dog {
  // 2. Class Variable
  static int numberOfDogs = 1;

  // 3. Instance Variables
  late String name;
  late int age;

  // 4. Instance Method
  void bark() {
    print('$name barks!');
  }

  // 5. Class Method
  static void displayTotalDogs() {
    print('Total number of dogs: $numberOfDogs');
  }
}

void main() {
  // 6. Creating Objects without Constructor
  var dog1 = Dog()
    ..name = 'Buddy'
    ..age = 3;

  Dog dog2 = Dog();
  dog2.name = 'Max';
  dog2.age = 2;

  // 7. Accessing Instance Variables and Methods
  print('Dog 1: ${dog1.name}, ${dog1.age} years old');
  dog1.bark();

  print('\nDog 2: ${dog2.name}, ${dog2.age} years old');
  dog2.bark();

  // 8. Accessing Class Variable and Method
  Dog.displayTotalDogs();
}


/*

  Note:
  This Dart file provides an example of class variables and instance variables without using a separate constructor.

  1. **Class Variables:**
     - Class variables are shared among all instances of a class.
     - They are declared using the `static` keyword.
     - Changes to class variables are reflected in all instances.

  2. **Instance Variables:**
     - Instance variables are specific to each instance of a class.
     - They are declared without the `static` keyword.
     - Each instance has its own set of instance variables.

*/
