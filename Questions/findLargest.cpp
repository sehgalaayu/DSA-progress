#include<iostream>
using namespace std;

void printLargest(int *arr,int n){
    
    for(int i=1;i<n;i++){
        int max= arr[0];
        if(arr[i]>max){
            max = arr[i];
            cout<<max<<endl;
        }
    }
}

int main()
{

    int arr[]={5,4,2,9,1,0};
    int n= sizeof(arr)/sizeof(int);
    printLargest(arr,n);
 return 0;
}