#include <iostream>
#include <string>

using namespace std;

// Define a class named 'Person'
class Person {
public:
    // Data members (attributes)
    string name;
    int age;

    // Member function (method)
    void displayInfo() {
        cout << "Name: " << name << "\n";
        cout << "Age: " << age << "\n";
    }
};

int main() {
    // Create an object of the 'Person' class
    Person person1;

    // Set values for the object's attributes
    person1.name = "John";
    person1.age = 25;

    // Call the member function to display information
    cout << "Person 1 Information:\n";
    person1.displayInfo();

    // Create another object and set values using constructor
    Person person2{"Alice", 30};

    // Display information for the second person
    cout << "\nPerson 2 Information:\n";
    person2.displayInfo();

    return 0;
}
