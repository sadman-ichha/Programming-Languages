#include <iostream>
using namespace std;

// Forward declaration is not needed in this case since FriendClass is defined later in the code.

class MyClass {
private:
    string name = "Sadman";
    int age = 54;

    // Declare FriendClass as a friend, granting access to private members
    friend class FriendClass;
};

class FriendClass {
public:
    // Function to display private members of MyClass
    void display(MyClass mc) {
        // FriendClass can access private members of MyClass
        cout << "Name: " << mc.name << endl;
        cout << "Age: " << mc.age << endl;
    }
};

int main() {
    // Create objects of MyClass and FriendClass
    MyClass myclass;
    FriendClass friendclass;

    // Call the display function of FriendClass to access and display private members of MyClass
    friendclass.display(myclass);

    return 0;
}
