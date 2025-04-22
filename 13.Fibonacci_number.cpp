#include<iostream>
using namespace std;
int main()
{
    int first = 0;
    int sec =1;
    int n = 12;
    cout<<first<<" "<<sec<<" ";
    
    for(int i=2;i<=n;i++){
        int third = first+sec;
        cout<<third<<" ";
        first = sec;
        sec = third;


    }

    cout<<"\n";
 return 0;
}