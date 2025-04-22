#include <iostream>
using namespace std;

bool search(int mat[][4], int n, int m, int key) {
    int i = 0;
    int j = m - 1;  // Start from the top-right corner

    while (i < n && j >= 0) {
        if (mat[i][j] == key) {
            cout << "Found at cell (" << i << ", " << j << ")\n";
            return true;
        } else if (mat[i][j] > key) {
            j--;  // Move left
        } else {
            i++;  // Move down
        }
    }

    cout << "Key not found\n";
    return false;
}

int main() {
    int matrix[4][4] = {
        {10, 20, 30, 40},
        {15, 25, 35, 45},
        {27, 29, 37, 48},
        {32, 33, 39, 50}
    };

    int key = 33;
    search(matrix, 4, 4, key);

    return 0;
}
