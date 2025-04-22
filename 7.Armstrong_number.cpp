#include <iostream>
using namespace std;

int main()
{
    int a;

    // Prompt the user to enter a three-digit number
    cout << "Enter your 3 digit Number: " << endl;
    cin >> a;

    // Create a copy of the input number to work with
    int num = a;

    // Extract the first digit (units place)
    int dig1 = num % 10; // Get the last digit
    num /= 10;           // Remove the last digit from num

    // Extract the second digit (tens place)
    int dig2 = num % 10; // Get the new last digit
    num /= 10;           // Remove the last digit from num

    // Extract the third digit (hundreds place)
    int dig3 = num; // The remaining digit is the hundreds place

    // Calculate the sum of the cubes of the digits
    int cubeSum = dig1 * dig1 * dig1 + dig2 * dig2 * dig2 + dig3 * dig3 * dig3;

    // Check if the original number is equal to the sum of the cubes of its digits
    if (a == cubeSum)
    {
        cout << "It's an Armstrong Number" << endl;
    }
    else
    {
        cout << "It's not an Armstrong Number" << endl;
    }

    return 0;
}
