#include <iostream>
#include <string>
using namespace std;

// Defining a class named 'Car'
class Car {
    // Private data members
    string name;
    string color;

public:
    // Default constructor (no parameters/non- parameterized)
    Car() {
        cout << "constructor without params\n";
    }

    // Parameterized constructor to initialize 'name' and 'color'
    Car(string name, string color) {
        cout << "constructor with params\n";
        this->name = name;  // 'this' pointer refers to the current object 
        this->color = color;
    }

    // Method to simulate starting the car
    void start() {
        cout << "car has started..\n";
    }

    // Method to simulate stopping the car
    void stop() {
        cout << "car has stopped..\n";
    }

    // Getter method to access the private 'name' attribute
    string getName() {
        return name;
    }
};

int main() {
    // Creating a Car object using the default constructor
    Car c0;

    // Creating a Car object using the parameterized constructor
    Car c1("maruti 800", "white"); // Initializes the car name to 'maruti 800' and color to 'white'

    // Using the getter method to retrieve and display the car name
    cout << "car name : " << c1.getName() << endl;

    return 0;
}
