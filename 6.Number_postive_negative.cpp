#include <iostream>
using namespace std;

int main()
{
    int a;
    cout << "Enter a number : ";
    cin >> a;

    if (a > 0)
    {
        cout << "Number is positive (+ve) " << endl;
    }
    else if (a < 0)
    {
        cout << "Number is negative (-ve) " << endl;
    }
    else
    {
        cout << "Its a Zero" << endl;
    }

    return 0;
}