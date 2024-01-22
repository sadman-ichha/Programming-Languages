#include <iostream>
#include <string>
using namespace std;

// Base class
class Animal {
public:
    string name;

    void displayInfo() {
        cout << "Animal Name: " << name << endl;
    }
};

// Derived class
class Cat : public Animal {
public:
    // Derived class function to set the name
    void setName(string n) {
        name = n;
    }

    void meow() {
        cout << "Meow!" << endl;
    }
};

int main() {
    // Create a Cat object
    Cat myCat;

    // Set the name using the derived class function
    myCat.setName("Fluffy");

    // Access members from the base class
    myCat.displayInfo();

    // Access members from the derived class
    myCat.meow();

    return 0;
}
