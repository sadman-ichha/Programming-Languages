/* 
# Multiple Inheritance in Dart Using Mixins

Dart does not support traditional multiple inheritance, where a class directly extends more than one class. 
However, Dart provides mixins, a powerful mechanism that allows a class to inherit functionality from multiple sources.

## Mixins

Mixins are a way to reuse a class's code in multiple class hierarchies. They are applied using the `with` keyword, 
allowing a class to inherit features from one or more mixins.

## Example: Applying Mixins

Consider an example where we have two mixins, `A` and `B`, each providing different functionalities:

*/


// Mixin A
mixin A {
  void methodA() {
    print("Method A");
  }
}

// Mixin B
mixin B {
  void methodB() {
    print("Method B");
  }
}

// Class C using mixins A and B
class C with A, B {
  void methodC() {
    print("Method C");
  }
}

void main() {
  // Creating an instance of class C
  C myObject = C();

  // Accessing methods from mixins
  myObject.methodA(); // Output: Method A
  myObject.methodB(); // Output: Method B

  // Accessing method from the class
  myObject.methodC(); // Output: Method C
}



/* 

Advantages of Mixins:
Code Reusability: Mixins promote code reuse, allowing you to modularize and share functionality across different classes.

Flexibility: Unlike traditional multiple inheritance, mixins provide more flexibility, 
preventing the diamond problem and making the codebase more maintainable.

*/
