#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter your Number : " << endl;
    cin >> n;
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    cout << "sum = " << sum << endl;

    return 0;
}