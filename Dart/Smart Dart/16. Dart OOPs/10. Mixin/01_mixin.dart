
/*
  
  ----Mixin In Dart----
  Mixins are a way of reusing the code in multiple classes. Mixins are declared using the keyword mixin followed by the mixin name. 
  Three keywords are used while working with mixins: mixin, with, and on. It is possible to use multiple mixins in a class
  
  Imp Note: The with keyword is used to apply the mixin to the class. 
  It promotes DRY(Don’t Repeat Yourself) principle.

  ----Rules For Mixin----
  Mixin can’t be instantiated. You can’t create object of mixin.
  Use the mixin to share the code between multiple classes.
  Mixin has no constructor and cannot be extended.
  It is possible to use multiple mixins in a class.

  ----What Is Allowed For Mixin----
  You can add properties and static variables.
  You can add regular, abstract, and static methods.
  You can use one or more mixins in a class.

  ----What Is Allowed For Mixin----
  You can add properties and static variables.
  You can add regular, abstract, and static methods.
  You can use one or more mixins in a class.


On Keyword
Sometimes, you want to use a mixin only with a specific class. In this case, you can use the on keyword.
  
  Note:
  This Dart file demonstrates the concept of mixins.
  It defines a mixin 'GreetMixin' with a method 'greet', and a class 'Person' using the mixin.
  The 'Person' class has its own method 'introduce', and by using the 'with' keyword, it incorporates
  the functionality of the 'GreetMixin' mixin.

*/

mixin GreetMixin {
  void greet() {
    print('Greetings from the mixin!');
  }
}

// Class 'Person' using the 'GreetMixin' mixin
class Person with GreetMixin {
  String name;

  Person(this.name);

  // Method specific to 'Person'
  void introduce() {
    print('Hello, my name is $name.');
  }
}

void main() {
  Person('Sadman')
    ..greet()
    ..introduce();
}
