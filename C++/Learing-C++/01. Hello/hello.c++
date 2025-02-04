#include <iostream>
#include <conio.h> // Including the conio.h header for getch function.
using namespace std;

int main()
{
    // std::cout << "Hello World! ";
    // Using the cout object from the std namespace to print "Hello World!" to the console.
    cout << "Hello World!" << endl;

    // Using the cout object to print "Hello " and "World!" separately and adding a new line.
    cout << "Hello"
         << "World!" << endl;

    // Using getch function from conio.h to wait for a key press before exiting.
    getch();
}

