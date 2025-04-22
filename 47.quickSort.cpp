#include <iostream>
using namespace std;

// Function to partition the array
int partition(int arr[], int si, int ei) {
    int pivot = arr[ei]; // Choosing the last element as the pivot
    int i = si - 1;      // Index for the smaller element

    for (int j = si; j < ei; j++) {
        if (arr[j] <= pivot) {
            i++; // Increment the boundary for smaller elements
            swap(arr[i], arr[j]); // Swap the elements
        }
    }
    // Place the pivot element in its correct position
    swap(arr[i + 1], arr[ei]);
    return i + 1; // Return the pivot index
}

// Quick Sort function
void quickSort(int arr[], int si, int ei) {
    if (si >= ei) {
        return; // Base case: Stop when there is one or no element
    }

    // Partition the array and get the pivot index
    int pivotIndex = partition(arr, si, ei);

    // Recursively sort the two halves
    quickSort(arr, si, pivotIndex - 1); // Left half
    quickSort(arr, pivotIndex + 1, ei); // Right half
}

int main() {
    int arr[] = {6, 3, 7, 5, 2, 4}; // Input array
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array

    // Print the array before sorting
    cout << "Original array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Call Quick Sort
    quickSort(arr, 0, n - 1);

    // Print the sorted array
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
