#include<iostream>
using namespace std;

void printProfit(int *stocks, int n){

    int bestBuy[100000];
    bestBuy[0]=INT_MAX;
    for(int i=1;i<n;i++){
        bestBuy[i]=min(bestBuy[i-1],stocks[i-1]);
    }

    int maxProfit=0;
    for(int j=0;j<n;j++){
        int currProfit=stocks[j]-bestBuy[j];
        maxProfit=max(maxProfit,currProfit);
    }


    cout<<"Max profit is "<<maxProfit<<endl;
   
}

int main()
{
    int stocks[]={7,1,5,3,6,4};
    int n= sizeof(stocks)/sizeof(int);

    printProfit(stocks,n);
 return 0;
}