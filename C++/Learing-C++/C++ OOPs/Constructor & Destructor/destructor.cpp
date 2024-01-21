#include <iostream>
using namespace std;

class Book {
public:
    // Member variables
    string Title;
    string Author;

    // Constructor: Invoked when a new 'Book' object is created
    Book(string title, string author) : Title(title), Author(author) {
        cout << "Constructor is invoked" << endl;
    }

    // Destructor: Invoked when a 'Book' object goes out of scope or is explicitly deleted
    ~Book() {
        cout << "Destructor is invoked." << endl;
    }

    // Member function to display book information
    void display() {
        cout << "Title: " << Title << endl;
        cout << "Author: " << Author << endl;
    }
};

int main() {
    // Create a 'Book' object using the constructor
    Book book = Book("Data Structure", "Sadman");
    book.display();
    cout << "\n";
    Book book2 = Book("C++ Lambda Story", "Bartek Filipek");
    book2.display();
    cout << "\n";
    return 0;
}
