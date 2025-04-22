#include <iostream>
#include <vector>

using namespace std;

void merge(int arr[], int si, int mid, int ei) // O(n)
{
    vector<int> temp;
    int i = si;
    int j = mid + 1;

    // Merge two sorted halves into temp
    while (i <= mid && j <= ei)
    {
        if (arr[i] <= arr[j])
        {
            temp.push_back(arr[i++]);
        }
        else
        {
            temp.push_back(arr[j++]);
        }
    }

    // Copy remaining elements from the left half
    while (i <= mid)
    {
        temp.push_back(arr[i++]);
    }

    // Copy remaining elements from the right half
    while (j <= ei)
    {
        temp.push_back(arr[j++]);
    }

    // Copy the sorted elements back into the original array
    for (int idx = si, x = 0; idx <= ei; idx++, x++) 
    {
        arr[idx] = temp[x];
    }
}

void mergeSort(int arr[], int si, int ei) // O(logn)
{
    if (si >= ei)
    { // Base case
        return;
    }

    int mid = si + (ei - si) / 2; // Divide
    mergeSort(arr, si, mid);      // Left half
    mergeSort(arr, mid + 1, ei);  // Right half
    merge(arr, si, mid, ei);      // Conquer
}

void printArr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[6] = {6, 3, 7, 5, 2, 4};
    int n = 6;

    mergeSort(arr, 0, n - 1); // Perform merge sort

    printArr(arr, n); // Print the sorted array
    return 0;
}
