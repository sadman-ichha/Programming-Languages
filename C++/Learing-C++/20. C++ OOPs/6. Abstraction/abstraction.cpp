#include <iostream>
#include <string>
using namespace std;

// Abstract class representing a generic smartphone
class Smartphone {
private:
    string brand;
    string model;
public:
    // Constructor
    Smartphone(string brand, string model) : brand(brand), model(model) {}

    // Abstract method to make a call
    virtual void makeCall(string number) = 0;

    // Abstract method to send a text message
    virtual void sendText(string number, string message) = 0;

    // Abstract method to access the internet
    virtual void browseInternet() = 0;

    // Getter methods
    string getBrand() const {
        return brand;
    }

    string getModel() const {
        return model;
    }

    // Virtual destructor
    // virtual ~Smartphone() {}


};

// Concrete class representing an iPhone, inheriting from Smartphone
class IPhone : public Smartphone {
public:
    // Constructor
    IPhone(string model) : Smartphone("Apple", model) {}

    // Implementation of abstract methods
    void makeCall(string number) override {
        cout << "Calling " << number << " from iPhone " << getModel() << endl;
    }

    void sendText(string number, string message) override {
        cout << "Sending message to " << number << " from iPhone " << getModel() << ": " << message << endl;
    }

    void browseInternet() override {
        cout << "Browsing the internet on iPhone " << getModel() << endl;
    }
};

// Main function for testing the abstraction
int main() {
    // Create an iPhone object
    IPhone iphone("15");

    // Use the smartphone without knowing the implementation details
    cout << "Brand: " << iphone.getBrand() << endl;
    cout << "Model: " << iphone.getModel() << endl;

    iphone.makeCall("1234567890");
    iphone.sendText("9876543210", "Hello, how are you?");
    iphone.browseInternet();

    return 0;
}
