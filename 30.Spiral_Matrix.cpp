#include <iostream>
using namespace std;

void spiralMatrix(int mat[][4], int n, int m)
{
    int srow = 0, scol = 0;
    int erow = n - 1, ecol = m - 1;

    while (srow <= erow && scol <= ecol)
    {
        // top
        for (int j = scol; j <= ecol; j++)
        {
            cout << mat[srow][j] << " ";
        }
        srow++;

        // right
        for (int i = srow; i <= erow; i++)
        {
            cout << mat[i][ecol] << " ";
        }
        ecol--;

        // bottom
        if (srow <= erow) // to ensure row is still valid
        {
            for (int j = ecol; j >= scol; j--)
            {
                cout << mat[erow][j] << " ";
            }
            erow--;
        }

        // left
        if (scol <= ecol) // to ensure column is still valid
        {
            for (int i = erow; i >= srow; i--)
            {
                cout << mat[i][scol] << " ";
            }
            scol++;
        }
    }
    cout << endl;
}

int main()
{
    int mat[4][4] = {{1, 2, 3, 4},
                     {5, 6, 7, 8},
                     {9, 10, 11, 12},
                     {13, 14, 15, 16}};
    spiralMatrix(mat, 4, 4);
    return 0;
}
