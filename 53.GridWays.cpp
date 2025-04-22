#include <iostream>
using namespace std;

int gridWays(int r, int c, int n, int m) {
    // Base case: If we reach the bottom-right corner, count it as 1 valid path
    if (r == n - 1 && c == m - 1) {
        return 1;
    }

    // If we go out of bounds, return 0 (invalid path)
    if (r >= n || c >= m) {
        return 0;
    }

    // Move right and move down
    int right = gridWays(r, c + 1, n, m);
    int down = gridWays(r + 1, c, n, m);

    return right + down;
}

int main() {
    int n = 3;
    int m = 3;
    cout << "Number of ways: " << gridWays(0, 0, n, m) << endl;
    return 0;
}
