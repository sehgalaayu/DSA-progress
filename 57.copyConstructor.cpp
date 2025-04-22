#include <iostream>
#include <string>
using namespace std;

// Defining a class named 'Car'
class Car {
    // Private data members - can't be accessed directly outside the class
    string name;
    string color;

public:
    // Parameterized constructor to initialize 'name' and 'color'
    Car(string name, string color) {
        cout << "constructor with params\n";
        this->name = name;  // 'this' pointer refers to the current object to differentiate between class variables and parameters
        this->color = color;
    }

    // Copy constructor: Used to create a new object as a copy of an existing object
    // It takes a reference to another object of the same class to avoid infinite recursion
    Car(Car &original) {
        cout << "copying original to new..\n";
        name = original.name;
        color = original.color;
    }

    // Method to display car details
    void display() {
        cout << "Car Name: " << name << ", Color: " << color << endl;
    }
};

int main() {
    // Creating an object using the parameterized constructor
    Car c1("maruti 800", "blue"); // Outputs "constructor with params"
    c1.display(); // Outputs "Car Name: maruti 800, Color: blue"

    // Creating a new object by copying c1 using the copy constructor
    Car c2(c1); // Outputs "copying original to new.."
    c2.display(); // Outputs "Car Name: maruti 800, Color: blue"

    return 0;
}
