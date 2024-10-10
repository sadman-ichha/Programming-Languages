import 'person_for_constructor.dart';

void main() {
  // Creating an instance of the Person class
  Person person = Person("John Doe", 30);

  // Displaying initial information
  print("Initial Information:");
  person.displayInfo();

  // Updating age using the public method
  person.increaseAge();

  // Displaying updated information
  print("\nUpdated Information:");
  person.displayInfo();
}
