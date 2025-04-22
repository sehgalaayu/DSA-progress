#include <iostream>
#include <algorithm> // for std::sort
using namespace std;

bool containsDuplicate(int *nums, int n)
{
    // Sort the array first
    sort(nums, nums + n);

    // Check for duplicates in the sorted array
    for (int i = 0; i < n ; i++)
    {
        if (nums[i] == nums[i - 1])
        {
            return true;
        }
    }
    return false;
}

int main()
{
    int nums[] = {1, 2, 3, 1};
    int n = sizeof(nums) / sizeof(int);

    cout << containsDuplicate(nums, n) << endl; // This should print 1 (true)

    return 0;
}
