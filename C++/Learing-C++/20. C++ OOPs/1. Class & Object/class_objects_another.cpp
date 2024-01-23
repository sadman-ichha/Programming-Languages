#include <iostream>
#include <string>
#include <list>
using namespace std;

class Person
{
public:
    string name;
    int age;
    list<string> book;

    void displayInfo()
    {  
        cout << "Person Name And Book List is required.." << endl;

        // Check if either name or book list is empty
        if (name.empty() || book.empty())
        {
            cout << "Person information is incomplete.\n";
        }
        else
        {
            cout << "Name: " << name << "\n";
            cout << "Age: " << age << "\n";
            cout << "Book List:\n";

            // Iterate over each bookItem in the list using a constant reference
            for (const string &bookItem : book)
            {
                cout << " - " << bookItem << "\n";
            }
        }
    }
};

int main()
{
    // Create an instance of the Person class (Default constructor is called)
    Person person1;
    person1.name = "Alice";
    person1.book = {"Book1", "Book2", "Book3"};

    // Display information for person1
    cout << "Person 1 Information:\n";
    person1.displayInfo();

    // Create another instance of the Person class (Default constructor is called)
    Person person2;
    person2.name = "Tom";
    person2.age = 30;

    // Display information for person2
    cout << "\nPerson 2 Information:\n";
    person2.displayInfo();

    return 0;
}
