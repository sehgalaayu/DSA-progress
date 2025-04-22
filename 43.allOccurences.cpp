#include <iostream>
using namespace std;

void allOccurence(int arr[], int i, int key, int n) {
    if (i == n) {
        // Base case: Reached the end of the array.
        return;
    }

    if (arr[i] == key) {
        // Print the index if the current element matches the key.
        cout << i << " ";
    }

    // Recursive call for the next element.
    allOccurence(arr, i + 1, key, n);
}

int main() {
    int arr[] = {3, 2, 4, 5, 6, 2, 7, 2, 2};
    int n = sizeof(arr) / sizeof(int);

    // Call the function to find all occurrences of the key.
    allOccurence(arr, 0, 2, n);

    return 0;
}
