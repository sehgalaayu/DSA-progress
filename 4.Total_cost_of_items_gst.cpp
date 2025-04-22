#include <iostream>
using namespace std;
int main()
{
    float pencil_cost;
    float pen_cost;
    float eraser_cost;

    cout << "Enter the cost of your pencil:  ";
    cin >> pencil_cost;

    cout << "Enter the cost of your pen:  ";
    cin >> pen_cost;

    cout << "Enter the cost of your eraser:  ";
    cin >> eraser_cost;

    float total_cost = pencil_cost * 0.18 + pen_cost * 0.18 + eraser_cost * 0.18 + (pen_cost + pencil_cost + eraser_cost);

    cout << "Your total cost of items (Incl GST): " << total_cost << endl;
    return 0;
}