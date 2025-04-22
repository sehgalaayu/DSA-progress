#include <iostream>
using namespace std;

void maxSubarrayProduct(int *nums, int n)
{
    int maxProd = INT_MIN;
    for (int start = 0; start < n; start++)
    {
        for (int end = start; end < n; end++)
        {
            int currProd = 1;
            for (int i = start; i < end; i++)
            {
                currProd *= nums[i];
                maxProd = max(maxProd, currProd);
            }
        }
    }
    cout << maxProd << endl;
}

int main()
{

    int nums[] = {2, 3, -2, 4};
    int n = sizeof(nums) / sizeof(n);
    maxSubarrayProduct(nums, n);
    return 0;
}