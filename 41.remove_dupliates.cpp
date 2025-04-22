#include <iostream>
#include <string>
using namespace std;

void removeDuplicates(string str, string &ans, int index, bool map[]) {
    // Base Case
    if (index == str.length()) {
        return;
    }

    // Current character
    char currChar = str[index];

    // Check if the character is already in the map
    if (!map[currChar - 'a']) {
        ans += currChar;       // Add to the result string
        map[currChar - 'a'] = true; // Mark the character as visited
    }

    // Recursive call
    removeDuplicates(str, ans, index + 1, map);
}

int main() {
    string str = "appnacollege";
    string ans = "";

    // Map to keep track of visited characters
    bool map[26] = {false};

    // Call the recursive function
    removeDuplicates(str, ans, 0, map);

    // Output the result
    cout << "String after removing duplicates: " << ans << endl;

    return 0;
}
