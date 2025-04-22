#include <iostream>
using namespace std;

void printmaxSubArray(int *arr, int n){
for(int start=0;start<n;start++){
    for(int end=start;end<n;end++){
        int currSum=0;
        for(int i=start;i<=end;i++){
            currSum+=arr[i];
        }
        cout<<max(INT_MIN,currSum);

        // cout<<max(INT_MIN,arr[])
}cout<<endl;

}
int main()
{
    int arr[] = { 2, -3, 6, -5, 4, 2 };
    int n = sizeof(arr) / sizeof(int);

    printSubArray(arr,n);
    return 0;
}