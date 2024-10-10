#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> numbers = {1, 2, 3, 4, 5};

    // Using a range-based for each loop to iterate over
    cout << "Using const auto&: ";
    for (const auto &number : numbers)
    {
        cout << number << " ";
    }

    cout << endl;

    cout << "Using variable type : ";
    for (int num : numbers)
    {
        cout << num << " ";
    }

    return 0;
}
