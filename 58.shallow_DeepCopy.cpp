#include <iostream>
#include <string>
using namespace std;

class Car {
public:
    string name;
    string color;
    int* mileage;  // Pointer to demonstrate shallow vs deep copy

    // Parameterized constructor
    Car(string name, string color) {
        cout << "constructor with params\n";
        this->name = name;
        this->color = color;
        mileage = new int;  // Dynamically allocating memory for mileage and initializing to 0
    }

    // Copy constructor (Shallow Copy)
    Car(const Car &original) {
        cout << "copying original to new..\n";
        name = original.name;
        color = original.color;
        mileage = original.mileage;  // Shallow copy: copying the pointer, not the value
    }

    // Deep Copy Constructor
// Car(const Car &original) {
//     cout << "copying original to new..\n";
//     name = original.name;
//     color = original.color;
//     mileage = new int(*original.mileage);  // Deep Copy: Allocating new memory and copying the value
// }


    // Display method
    void display() {
        cout << "Car Name: " << name << ", Color: " << color << ", Mileage: " << *mileage << endl;
    }
};

int main() {
    Car c1("maruti 800", "white");  // Creates original object
    c1.display();  // Outputs: Car Name: maruti 800, Color: white, Mileage: 0

    Car c2(c1);  // Copying c1 into c2 using shallow copy constructor
    c2.display();  // Outputs: Car Name: maruti 800, Color: white, Mileage: 0

    *c2.mileage = 10;  // Changing mileage in c2

    // Since it's a shallow copy, mileage in c1 also changes
    cout << "Mileage of c1 after modifying c2: " << *c1.mileage << endl;  // Outputs: 10
    cout << "Mileage of c2: " << *c2.mileage << endl;  // Outputs: 10

    return 0;
}
