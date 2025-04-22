#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    void eat() {
        cout << "Animal eats\n";
    }

protected:
    void breathe() {
        cout << "Animal breathes\n";
    }

private:
    void sleep() {
        cout << "Animal sleeps\n";
    }
};

// ================== PUBLIC INHERITANCE ==================
/*
 * Public members of the base class remain public in the derived class.
 * Protected members of the base class remain protected in the derived class.
 * Private members are never inherited.
 */
class Dog : public Animal {
public:
    void bark() {
        cout << "Dog barks\n";
        eat();   // ✅ Allowed (public in base remains public)
        breathe(); // ✅ Allowed (protected in base remains protected)
        // sleep(); // ❌ Not allowed (private members are NOT inherited)
    }
};

// ================== PROTECTED INHERITANCE ==================
/*
 * Public members of the base class become protected in the derived class.
 * Protected members remain protected in the derived class.
 * Private members are never inherited.
 */
class Bird : protected Animal {
public:
    void fly() {
        cout << "Bird flies\n";
        eat();    // ✅ Allowed (public becomes protected)
        breathe(); // ✅ Allowed (protected remains protected)
        // sleep(); // ❌ Not allowed (private members are NOT inherited)
    }
};

// ================== PRIVATE INHERITANCE ==================
/*
 * Public and protected members of the base class become private in the derived class.
 * Private members are never inherited.
 */
class Fish : private Animal {
public:
    void swim() {
        cout << "Fish swims\n";
        eat();    // ✅ Allowed (public becomes private)
        breathe(); // ✅ Allowed (protected becomes private)
        // sleep(); // ❌ Not allowed (private members are NOT inherited)
    }
};

// Main function to demonstrate the inheritance modes
int main() {
    cout << "Public Inheritance:\n";
    Dog d;
    d.bark();
    d.eat(); // ✅ Allowed (public remains public)
    // d.breathe(); // ❌ Not allowed (protected remains protected, can't access directly)
    cout << endl;

    cout << "Protected Inheritance:\n";
    Bird b;
    // b.fly(); // ❌ Not allowed (fly is public in Bird, but Bird itself is protected)
    // b.eat(); // ❌ Not allowed (eat is protected in Bird)
    cout << endl;

    cout << "Private Inheritance:\n";
    Fish f;
    // f.swim(); // ❌ Not allowed (swim is public in Fish, but Fish inherits privately)
    // f.eat(); // ❌ Not allowed (eat is private in Fish)
    
    return 0;
}
