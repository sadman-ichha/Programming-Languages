// Base class defining a computer
class Computer {
  void boot() {
    print("Booting the computer");
  }
}

// Subclass extending the Computer class
class Laptop extends Computer {
  // Overriding the boot method of the base class
  @override
  void boot() {
    print("Booting the laptop");
  }
}

// Subclass extending the Computer class
class Desktop extends Computer {
  // Overriding the boot method of the base class
  @override
  void boot() {
    print("Booting the desktop computer");
  }
}

void main() {
  Computer desktop = Desktop();
  desktop.boot(); // Calls the boot method of Desktop
}


/*
  Polymorphism in Dart :

  This Dart file demonstrates polymorphism using classes and method overriding.
  Advantage Of Polymorphism In Dart
  Subclasses can override the behavior of the parent class.
  It allows us to write code that is more flexible and reusable.
  
  Note: In the real world, polymorphism is updating or modifying the feature, function, 
  or implementation that already exists in the parent class.
*/