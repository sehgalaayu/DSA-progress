#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a Number : "<<endl;
    cin>>n;
    int table = 0;

    for(int i = 1 ; i<=10;i++){
        table = i*n;
        cout<<"Table of "<< n <<" is "<<table<<endl;
    }

    
 return 0;
}