#include<iostream>
using namespace std;

int roatateArray(int *nums,int n){
    int target =0;
    for(int i= 0;i<n;i++){
        if(nums[i]==target){
            return i;
        }
    }return -1;
}

int main()
{
    int nums[] = {4,5,6,7,0,1,2};
    int n=sizeof(nums)/sizeof(int);
    roatateArray(nums,n);
 return 0;
}