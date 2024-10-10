#include <iostream>
#include <string>

using namespace std;

int main() {
    // Declare and initialize strings
    string greeting = "Hello, ";
    string name = "John";

    // Concatenate strings
    string message = greeting + name + "! Welcome to the world of C++.";

    // Output the concatenated string
    cout << "Concatenated Message: " << message << endl;

    // Get the length of a string
    cout << "Length of Name: " << name.length() << " characters\n";

    // Access characters in a string
    cout << "First character of Name: " << name[0] << endl;
    cout << "Last character of Name: " << name[name.length() - 1] << endl;

    // Compare strings
    string anotherName = "John";
    if (name == anotherName) {
        cout << "The names are equal.\n";
    } else {
        cout << "The names are not equal.\n";
    }

    // Substring of a string
    string sub = name.substr(1, 2);  // Starting from index 1, take 2 characters
    cout << "Substring of Name: " << sub << endl;

    // Find a character in a string
    char findChar = 'n';
    size_t found = name.find(findChar);
    if (found != string::npos) {
        cout << "Character '" << findChar << "' found at position " << found << endl;
    } else {
        cout << "Character '" << findChar << "' not found.\n";
    }

    return 0;
}


// why string::npos ??

// In this example, string::npos specifies that the substring was not found.
// এই উদাহরণে, string::npos এটি স্পষ্ট করে দেয় যে সাবস্ট্রিংটি পাওয়া যায়নি।

// why size_t ????

// অনেক সময়, যখন আমরা একটি কন্টেনার বা স্ট্রিংয়ে কোনও উপাদানের পোজিশন বা সাইজ প্রকাশ করতে চাইব, তখন
// size_t ব্যবহৃত হয় কারণ এটি স্ট্যান্ডার্ড এবং এটি উপাদানের সঠিক পোজিশন বা সাইজ প্রকাশ করার জন্য সমৃদ্ধ।

// উদাহরণস্বরূপ, একটি স্ট্রিংয়ে find ফাংশন ব্যবহার করতে গেলে, রিটার্ন মান string::npos হতে পারে, যা হলো একটি 
// size_t মান যা স্ট্রিং বা কন্টেনারের একটি উপাদান পাওয়ার জন্য অসম্ভাবনায়। এই কারণে আমরা size_t ব্যবহার করতে
// পারি যেটি সাধারিত প্রথাগত এবং ভাষা প্রকৌশল বুঝতে সাহায্য করে।