#include <iostream>
using namespace std;
int main()
{
    int science;
    int maths;
    int eng;

    cout << "Enter Sci Marks ";
    cin >> science;

    cout << "Enter Maths Marks ";
    cin >> maths;

    cout << "Enter English Marks ";
    cin >> eng;

    int avg_marks = science + maths + eng / 3;

    cout << "Your Avg Marks are: " << avg_marks << " Enjoy!" << endl;

    return 0;
}