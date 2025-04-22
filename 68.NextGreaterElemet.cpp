#include <iostream>
#include <vector>
#include <stack>
using namespace std;

void nextGreater(vector<int> arr, vector<int>& ans) {
    stack<int> s;
    int idx = arr.size() - 1;
    s.push(arr[idx]);
    ans[idx] = -1;  // Last element always has -1 as next greater

    for (idx = idx - 1; idx >= 0; idx--) {
        int curr = arr[idx];
        while (!s.empty() && curr >= s.top()) {
            s.pop();
        }
        ans[idx] = s.empty() ? -1 : s.top();
        s.push(curr);
    }

    for (int i = 0; i < arr.size(); i++) {
        cout << ans[i] << " ";
    }
    cout << endl;
}

int main() {
    vector<int> arr = {6, 8, 0, 1, 3};
    vector<int> ans(arr.size());
    nextGreater(arr, ans);
    return 0;
}
