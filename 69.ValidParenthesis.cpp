#include <iostream>
#include <string>
#include <stack>
using namespace std;

bool isValid(string str) {
    stack<char> s;

    for (char ch : str) {
        // If opening bracket, push to stack
        if (ch == '(' || ch == '{' || ch == '[') {
            s.push(ch);
        } 
        // If closing bracket, check for matching opening
        else {
            if (s.empty()) return false; // No opening bracket to match
            char top = s.top();

            // Check if top matches the closing bracket
            if ((top == '(' && ch == ')') || (top == '{' && ch == '}') || (top == '[' && ch == ']')) {
                s.pop(); // Valid match, remove opening bracket
            } else {
                return false; // Mismatch
            }
        }
    }

    // If stack is empty, all brackets matched
    return s.empty();
}

int main() {
    string str1 = "{[()]}";
    string str2 = "({[(]}";

    cout << isValid(str1) << endl; // Output: 1 (true)
    cout << isValid(str2) << endl; // Output: 0 (false)
    return 0;
}
