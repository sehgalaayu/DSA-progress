#include <iostream>
using namespace std;

void print_arr(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ",";
    }
    cout << endl;
}

int main()
{
    int arr[] = {5, 4, 3, 9, 2};
    int n = sizeof(arr) / sizeof(int);

    int start = 0;
    int end = n - 1;
    while (start < end)
    {
        // swap:
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }
    print_arr(arr, n) ;
    return 0;
}