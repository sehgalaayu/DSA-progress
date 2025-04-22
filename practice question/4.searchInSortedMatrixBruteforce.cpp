#include<iostream>
using namespace std;

void searchSortedMatrix(int mat[][4],int n,int m,int key){
    for(int i = 0 ;i<n;i++){
        for(int j=0;j<m;j++){
            if(mat[i][j]==key){
                cout<<i<<" , "<<j<<endl;
            }
            
        }
    }

}
int main()
{
    int mat[4][4]={{10,20,30,40},
                    {15,25,35,45},
                    {27,29,37,48},
                    {32,33,39,50}};
    int n=4;
    int m=4;

    searchSortedMatrix(mat,n,m,33);


    
 return 0;
}