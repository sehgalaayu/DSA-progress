#include<iostream>
using namespace std;
int main()
{

    int n=5 ;

    for(int i=0;i<=n;i++){
        for(int j=0;j<=n-i-1;j++){
            // spaces
            cout<<" ";
        }
        for(int j=0;j<=n;j++){
            // stars
            cout<<"*";
        }
        cout<<endl;
    }
 return 0;
}