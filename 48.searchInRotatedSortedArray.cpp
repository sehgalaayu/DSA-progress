#include <iostream>
using namespace std;

int search(int arr[], int si, int ei, int tar) {
    // Base case: if the start index exceeds the end index, the element is not found
    if (si > ei) {
        return -1;
    }

    int mid = si + (ei - si) / 2;

    // Check if the mid element is the target
    if (arr[mid] == tar) {
        return mid;
    }

    // Check if the left half is sorted
    if (arr[si] <= arr[mid]) {
        // Check if the target lies in the sorted left half
        if (arr[si] <= tar && tar <= arr[mid]) {
            return search(arr, si, mid - 1, tar); // Recur in the left half
        } else {
            return search(arr, mid + 1, ei, tar); // Recur in the right half
        }
    }
    // Otherwise, the right half must be sorted
    else {
        // Check if the target lies in the sorted right half
        if (arr[mid] <= tar && tar <= arr[ei]) {
            return search(arr, mid + 1, ei, tar); // Recur in the right half
        } else {
            return search(arr, si, mid - 1, tar); // Recur in the left half
        }
    }
}

int main() {
    int arr[7] = {4, 5, 6, 7, 0, 1, 2};
    int n = 7;
    int target = 0;
    int index = search(arr, 0, n - 1, target);

    if (index != -1) {
        cout << "Target found at index: " << index << endl;
    } else {
        cout << "Target not found" << endl;
    }

    return 0;
}
