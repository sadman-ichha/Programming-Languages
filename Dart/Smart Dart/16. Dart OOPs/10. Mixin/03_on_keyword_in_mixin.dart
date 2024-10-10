// Base class 'Animal'
class Animal {
  String name;

  // Constructor for 'Animal'
  Animal(this.name);
}

// Mixin 'LoggerMixin' with a method 'log'
mixin LoggerMixin on Animal {
  void log() {
    print('Logging for ${this.runtimeType}: $name');
  }
}

// Class 'Dog' extending 'Animal' and using 'LoggerMixin'
class Dog extends Animal with LoggerMixin {
  Dog(String name) : super(name);
}

// Class 'Cat' extending 'Animal' and using 'LoggerMixin'
class Cat extends Animal with LoggerMixin {
  Cat(String name) : super(name);
}

void main() {
  Dog myDog = Dog('Buddy');
  Cat myCat = Cat('Whiskers');

  // Calling the 'log' method from 'LoggerMixin'
  myDog.log(); // Outputs: Logging for Dog: Buddy
  myCat.log(); // Outputs: Logging for Cat: Whiskers
}
