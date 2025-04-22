#include <iostream>
using namespace std;

// Class to represent a complex number
class Complex {
public:
    int real, img; // Variables to store the real and imaginary parts

    // Constructor to initialize complex number
    Complex(int r, int i) {
        real = r;
        img = i;
    }

    l

    // Function to display the complex number
    void display() {
        cout << real << " + " << img << "i\n";
    }

    // Operator Overloading: Overloading the '+' operator for complex number addition
    Complex operator + (Complex &c2) {
        /*
         * 'this->real' refers to the real part of the current object.
         * 'c2.real' refers to the real part of the second complex number.
         * We add them to get the result's real part.
         */
        int resReal = this->real + c2.real;

        /*
         * 'this->img' refers to the imaginary part of the current object.
         * 'c2.img' refers to the imaginary part of the second complex number.
         * We add them to get the result's imaginary part.
         */
        int resImg = this->img + c2.img;

        // Creating a new complex number object with the result
        Complex c3(resReal, resImg);

        // Returning the new complex number
        return c3;
    }
};

// Main function to demonstrate operator overloading
int main() {
    // Creating two complex number objects
    Complex c1(1, 2); // c1 = 1 + 2i
    Complex c2(3, 4); // c2 = 3 + 4i

    // Display the two complex numbers
    cout << "First Complex Number: ";
    c1.display();

    cout << "Second Complex Number: ";
    c2.display();

    // Using the overloaded '+' operator to add two complex numbers
    Complex c3 = c1 + c2; // This calls the overloaded '+' function

    // Display the result of the addition
    cout << "Sum of Complex Numbers: ";
    c3.display();

    return 0;
}
