#include <iostream>
using namespace std;

int clearBitRange(int num, int i, int j)
{

    int mask1 = ~0 << (j + 1);
    int mask2 = (1 << i) - 1;
    int mask = mask1 | mask2;

    num = num & mask;

    return num;
}

int main()
{
    cout << clearBitRange(15, 1, 3) << endl;
    return 0;
}