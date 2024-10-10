#include <iostream>
using namespace std;

// Define a structure named 'Person'
struct person
{
    string name;
    int age;
    char gender;
};
typedef struct person Person;


// Define a union named 'Value'
union Value
{
    int intValue;
    double doubleValue;
    char charValue;
};

// Define an enumeration named 'Days'
enum Days
{
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY,
    SUNDAY
};

int main()
{
    // Example of using a structure
    Person person1;
    person1.name = "John";
    person1.age = 25;
    person1.gender = 'M';

    // Output person information
    cout << "Person Information:\n";
    cout << "Name: " << person1.name << "\n";
    cout << "Age: " << person1.age << "\n";
    cout << "Gender: " << person1.gender << "\n\n";

    // Example of using a union
    Value value;
    value.intValue = 42;

    // Output union example
    cout << "Union Example:\n";
    cout << "Int Value: " << value.intValue << "\n";

    value.doubleValue = 3.14;
    cout << "Double Value: " << value.doubleValue << "\n";

    value.charValue = 'A';
    cout << "Char Value: " << value.charValue << "\n\n";

    // Example of using an enumeration
    Days today = FRIDAY;

    // Output enumeration example
    cout << "Enumeration Example:\n";
    cout << "Today is ";

    switch (today)
    {
    case MONDAY:
    {
        cout << "Monday";
        break;
    }
    case TUESDAY:
    {
        cout << "Tuesday";
        break;
    }
    case WEDNESDAY:
    {
        cout << "Wednesday";
        break;
    }
    case THURSDAY:
    {
        cout << "Thursday";
        break;
    }
    case FRIDAY:
    {
        cout << "Friday";
        break;
    }
    case SATURDAY:
    {
        cout << "Saturday";
        break;
    }
    case SUNDAY:
    {
        cout << "Sunday";
        break;
    }
    default:
    {
        cout << "Don't Match" << endl;
        break;
    }
    }

    cout << "\n";

    return 0;
}
