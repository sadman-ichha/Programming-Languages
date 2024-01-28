#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream file;
    string name;
    
    // Open the file with ios::out | ios::app flags
    file.open("new_file.txt", ios::out | ios::app);

    // Check if the file is opened successfully
    if (!file.is_open()) {
        cerr << "Error opening the file!" << endl;
        return 1;
    }

    cout << "Enter Your Name: ";
    getline(cin, name);

    // Write data to the file
    file << "Welcome " << name << endl;

    // Close the file
    file.close();

    cout << "File updated successfully." << endl;
    add

    return 0;
}