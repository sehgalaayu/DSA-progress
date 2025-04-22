#include <iostream>
using namespace std;

void maxSubarrayProduct(int *nums, int n)
{
    int maxProd=INT_MIN;
    for(int i=0;i<n;i++){
        int currProd=1;
        currProd*=nums[i];
        maxProd=max(maxProd,currProd);
        if(currProd<0){
            currProd=1;
        }
    }
    cout<<"MAX SUBARRAY PROD BY KADANES = "<<maxProd<<endl;
}

int main()
{

    int nums[] = {2, 3, -2, 4};
    int n = sizeof(nums) / sizeof(n);
    maxSubarrayProduct(nums, n);
    return 0;
}