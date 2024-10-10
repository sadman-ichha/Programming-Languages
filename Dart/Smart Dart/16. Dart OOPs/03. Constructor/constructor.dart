// 1. Class with Default Constructor
class Dog {
  String? name;
  int? age;

  // Default Constructor
  Dog(this.name, this.age);

  // Method
  void bark() {
    print('$name barks!');
  }
}

// 2. Class with Parameterized Constructor
class Cat {
  String? name;
  int? age;

  // Parameterized Constructor
  Cat(this.name, this.age) {
    this.name = name;
    this.age = age;
  }

  // Method
  void meow() {
    print('$name meows!');
  }
}

// 3. Class with Named Constructor
class Bird {
  String? name;
  int? age;

  // Default Constructor
  Bird(this.name, this.age);

  // Named Constructor
  Bird.fromBirthYear(String name, int birthYear) {
    this.name = name;
    this.age = DateTime.now().year - birthYear;
  }

  // Method
  void sing() {
    print('$name sings!');
  }
}

// 4. Class with Constant Constructor
class Fish {
  final String? name;
  final int? age;

  // Constant Constructor
  const Fish(this.name, this.age);

  // Method
  void swim() {
    print('$name swims!');
  }
}

void main() {
  // Creating objects using different constructors
  var dog = Dog("Tom", 3); // Default Constructors
  var cat = Cat("Leo", 2); // Parameterized Constructors
  var bird = Bird.fromBirthYear("Egale", 2018); // Named Contructors
  const fish = Fish("Catfish", 1); // Constant Contructors

  // Accessing methods
  print("\n--Default Constructors--");
  dog.bark();
  print("\n--Parameterized Constructors--");
  cat.meow();
  print("\n--Named Constructors--");
  bird.sing();
  print("\n--Constant Constructors--");
  fish.swim();
}


/*

  Note:
  This Dart file provides examples of different types of constructors in Dart.

  1. **Default Constructor:**
     - The default constructor is automatically created if no other constructor is defined.
     - It initializes instance variables.

  2. **Parameterized Constructor:**
     - A constructor with parameters allows you to provide values at the time of object creation.
     - It helps customize the initialization of an object.

  3. **Named Constructor:**
     - Named constructors provide alternative ways to create objects.
     - They have a specific name and can have different parameter lists.
  
  4. **Constant Constructor:**
     - A constant constructor is used to create compile-time constants.
     - It ensures that objects created using this constructor are constants.

*/