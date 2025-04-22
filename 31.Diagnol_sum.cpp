#include <iostream>
using namespace std;

int diagonalSum(int mat[][3], int n) {
    int sum = 0;

    // Loop through the matrix to sum up the diagonals
    for (int i = 0; i < n; i++) {
        // Add the primary diagonal element (top-left to bottom-right)
        sum += mat[i][i];

        // Add the secondary diagonal element (top-right to bottom-left)
        // Ensure we don't double count the center element if the matrix has an odd size
        if (i != n - i - 1) {
            sum += mat[i][n - i - 1];
        }
    }

    // Return and print the final sum
    cout << "Sum of diagonals: " << sum << endl;
    return sum;
}

int main() {
    // A sample 3x3 matrix
    int mat[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int n = 3; // Matrix size (n x n)
    diagonalSum(mat, n);

    return 0;
}
