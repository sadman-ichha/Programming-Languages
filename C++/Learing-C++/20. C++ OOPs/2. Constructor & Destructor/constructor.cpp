// Constructors
// A constructor in C++ is a special method that is automatically called when an object of a class is created.
// To create a constructor, use the same name as the class, followed by parentheses ():

#include <iostream>
#include <string>
using namespace std;

class Person
{
public:
    // Member variables
    string name;
    int age;

    // Default constructor
    Person()
    {
        cout << "Default Constructor Called\n";
        name = "Unknown";
        age = 0;
    }

    // Parameterized constructor
    Person(string n, int a)
    {
        cout << "Parameterized Constructor Called\n";
        name = n;
        age = a;
    }

    // Member function to display information
    void displayInfo()
    {
        cout << "Name: " << name << "\n";
        cout << "Age: " << age << "\n";
    }
};

int main()
{
    // Creating objects using different constructors
    Person person1; // Default constructor
    Person *p = &person1;
    cout << "Person 1 Information: \n";
    p->displayInfo(); // Using selecetion Oparator Accessing
    cout << "\n";

    Person person2("Alice", 25); // Parameterized constructor
    cout << "Person 2 Information:\n";
    person2.displayInfo();

    return 0;
}
