#include <iostream>
#include <string>
using namespace std;

// Recursive function to count substrings with the same first and last characters
int countSubstrings(string &s, int start, int end) {
    // Base cases
    if (start > end) return 0;           // No substring is possible
    if (start == end) return 1;          // Single character is always valid

    // Count substrings for the current window
    int count = 0;
    if (s[start] == s[end]) {
        count = 1; // Current substring is valid
    }

    // Recursive calls
    count += countSubstrings(s, start, end - 1);   // Exclude the last character
    count += countSubstrings(s, start + 1, end);   // Exclude the first character
    count -= countSubstrings(s, start + 1, end - 1); // Avoid double-counting overlapping substrings

    return count;
}

// Main function
int main() {
    string s = "abcab";
    int result = countSubstrings(s, 0, s.length() - 1);
    cout << "Count of substrings: " << result << endl; // Output: 7
    return 0;
}
