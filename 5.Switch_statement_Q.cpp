#include <iostream>
using namespace std;

int main()
{
    // Build a calculator using Switch for the 4 basic arithmetic operations (+, -, *,/)
    int a, b;
    char op;
    cout << "enter a: ";
    cin >> a;

    cout << "enter b: ";
    cin >> b;

    cout << "enter your operator :  ";
    cin >> op;

    switch (op)
    {
    case '+':
        cout << "a + b = " << a + b << endl;
        break;
    case '-':
        cout << "a - b = " << a - b << endl;
        break;
    case '*':
        cout << "a * b = " << a * b << endl;
        break;
    case '/':
        cout << "a / b = " << a / b << endl;
        break;

    default:
        cout << "Invalid ";
    }

    return 0;
}