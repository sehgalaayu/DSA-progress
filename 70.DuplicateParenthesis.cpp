#include <iostream>
#include <stack>
#include <string>
using namespace std;

// Function to check for duplicate parentheses
bool hasDuplicateParentheses(string str) {
    stack<char> s;

    for (char ch : str) {
        // If character is NOT ')', push into the stack
        if (ch != ')') {
            s.push(ch);
        } else {
            // Found a closing parenthesis ')'
            int count = 0;

            // Pop elements until '(' is found
            while (!s.empty() && s.top() != '(') {
                s.pop();
                count++; // Count characters inside parentheses
            }

            // Pop the '('
            if (!s.empty()) s.pop();

            // If no character was inside '()', it's a duplicate
            if (count == 0) return true;
        }
    }

    // If no duplicates found
    return false;
}

int main() {
    string expression;

    cout << "Enter the expression: ";
    cin >> expression;

    if (hasDuplicateParentheses(expression)) {
        cout << "🚨 Duplicate parentheses found!" << endl;
    } else {
        cout << "✅ No duplicate parentheses." << endl;
    }

    return 0;
}
