#include <iostream>
using namespace std;

// Function to count occurrences of a number in the range [lo, hi]
int countInRange(int nums[], int num, int lo, int hi) {
    int count = 0;
    for (int i = lo; i <= hi; i++) {
        if (nums[i] == num) {
            count++;
        }
    }
    return count;
}

// Recursive function to find the majority element in the range [lo, hi]
int majorityElementRec(int nums[], int lo, int hi) {
    // Base case: if there's only one element, return it as the majority
    if (lo == hi) {
        return nums[lo];
    }

    // Divide: Find the midpoint
    int mid = (hi - lo) / 2 + lo;

    // Recursively find the majority element in the left and right halves
    int left = majorityElementRec(nums, lo, mid);
    int right = majorityElementRec(nums, mid + 1, hi);

    // Combine: If both halves agree on the majority element, return it
    if (left == right) {
        return left;
    }

    // Otherwise, count each element in the entire range
    int leftCount = countInRange(nums, left, lo, hi);
    int rightCount = countInRange(nums, right, lo, hi);

    // Return the element with the higher count
    return leftCount > rightCount ? left : right;
}

// Main function to find the majority element in the array
int majorityElement(int nums[], int n) {
    return majorityElementRec(nums, 0, n - 1);
}

// Driver code
int main() {
    int nums[] = {2, 2, 1, 1, 1, 2, 2};
    int n = 7; // Size of the array
    cout << "Majority Element: " << majorityElement(nums, n) << endl;
    return 0;
}
