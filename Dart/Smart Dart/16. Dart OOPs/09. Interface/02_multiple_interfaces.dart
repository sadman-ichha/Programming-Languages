

abstract class Walk {
  void walk();
}

abstract class Swim {
  void swim();
}

class Duck implements Walk, Swim {
  @override
  void walk() {
    print('Duck is walking');
  }

  @override
  void swim() {
    print('Duck is swimming');
  }

  // Additional method specific to 'Duck'
  void quack() {
    print('Duck says: Quack! Quack!');
  }
}

void main() {
  // Creating an instance of 'Duck'
  Duck myDuck = Duck();

  // Calling the 'walk' and 'swim' methods from the implemented interfaces
  myDuck.walk();
  myDuck.swim();

  // Calling an additional method specific to 'Duck'
  myDuck.quack();
}
