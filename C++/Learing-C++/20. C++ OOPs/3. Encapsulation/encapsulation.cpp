#include <iostream>
#include <string>

using namespace std;

class Student {
private:
    // Private member variables
    string name;
    int age;

public:
    // Setter for name
    void setName(string newName) {
        name = newName;
    }
    // Getter for name
    string getName() const {
        return name;
    }

    // Setter for age with validation
    void setAge(int newAge) {
        // Validate and set age
        if (newAge >= 0) {
            age = newAge;
        } else {
            cout << "Invalid age!\n";
        }
    }

    // Getter for age
    int getAge() const {
        return age;
    }

    // Display information
    void displayInfo() const {
        cout << "Name: " << name << "\n";
        cout << "Age: " << age << "\n";
    }
};

int main() {
    // Create an instance of the Student class
    Student student1;

    student1.setName("John");
    student1.setAge(20);

    cout << "Student Information:\n";
    student1.displayInfo();

    return 0;
}
