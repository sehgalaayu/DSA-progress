#include <iostream>
using namespace std;

// Recursive function to solve Tower of Hanoi
void towerOfHanoi(int n, char source, char destination, char auxiliary) {
    // Base case: Only one disk to move
    if (n == 1) {
        cout << "Move disk 1 from " << source << " to " << destination << endl;
        return;
    }

    // Recursive steps
    // Step 1: Move n-1 disks from Source to Auxiliary
    towerOfHanoi(n - 1, source, auxiliary, destination);

    // Step 2: Move the nth disk from Source to Destination
    cout << "Move disk " << n << " from " << source << " to " << destination << endl;

    // Step 3: Move n-1 disks from Auxiliary to Destination
    towerOfHanoi(n - 1, auxiliary, destination, source);
}

// Main function
int main() {
    int n; // Number of disks
    cout << "Enter the number of disks: ";
    cin >> n;

    // Solve Tower of Hanoi
    towerOfHanoi(n, 'A', 'C', 'B');

    return 0;
}
