#include<iostream>
using namespace std;

int searchTarget(int *nums,int n, int target){
    for(int i=0; i<n;i++){
        if (nums[i]==target){
            return i;
        }
        
    }
    return -1;
}

int main()
{
    
    
   int nums[]= {4,5,6,7,0,1,2};
   int n = sizeof(nums)/sizeof(int);
   cout<<searchTarget(nums, n, 2)<<endl;
 return 0;
}