#include <iostream>
#include <vector>
#include <stack>
using namespace std;

void maxAreaHistogram(vector<int> &height) {
    int n = height.size();
    vector<int> nsl(n), nsr(n);
    stack<int> s;

    // NSL (Nearest Smaller to Left)
    s.push(0);
    nsl[0] = -1;
    for (int i = 1; i < n; i++) {
        while (!s.empty() && height[s.top()] >= height[i]) {
            s.pop();
        }
        if (s.empty()) {
            nsl[i] = -1;  // If stack is empty, no smaller element to the left
        } else {
            nsl[i] = s.top();  // Otherwise, top of the stack is the nearest smaller element
        }
        s.push(i);  // Push the current index onto the stack
        
    }

    // Clear stack for NSR
    while (!s.empty()){
        s.pop();
    } 

    // NSR (Nearest Smaller to Right)
    nsr[n - 1] = n;  
    s.push(n - 1);
    for (int i = n - 2; i >= 0; i--) {
        while (!s.empty() && height[s.top()] >= height[i]) {
            s.pop();
        }
        if (s.empty()) {
            nsr[i] = n;  // If stack is empty, no smaller element to the right, so assign n (array length)
        } else {
            nsr[i] = s.top();  // Otherwise, top of the stack is the nearest smaller element to the right
        }
        s.push(i);  // Push the current index onto the stack
        
    }

    // Calculate max area
    int maxArea = 0;
    for (int i = 0; i < n; i++) {
        int width = nsr[i] - nsl[i] - 1;
        int area = height[i] * width;
        maxArea = max(maxArea, area);
    }

    cout << "Maximum Area in Histogram: " << maxArea << endl;
}

int main() {
    vector<int> heights = {2, 1, 5, 6, 2, 3};
    maxAreaHistogram(heights);
    return 0;
}