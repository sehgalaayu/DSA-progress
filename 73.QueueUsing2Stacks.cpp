#include <iostream>
#include <stack>
using namespace std;

class Queue {
public:
    stack<int> s1, s2;  // Two stacks to simulate a queue

    // ✅ Push operation: O(n) complexity
    void push(int data) {
        // Step 1: Move all elements from s1 to s2
        while (!s1.empty()) {
            s2.push(s1.top());
            s1.pop();
        }

        // Step 2: Push the new element into s1
        s1.push(data);

        // Step 3: Move elements back from s2 to s1
        while (!s2.empty()) {
            s1.push(s2.top());
            s2.pop();
        }
    }

    // ✅ Pop operation: O(1) complexity
    void pop() {
        if (s1.empty()) {
            cout << "Queue is empty!\n";
            return;
        }
        s1.pop();  // Front element is always on top of s1
    }

    // ✅ Front operation: O(1) complexity
    int front() {
        if (s1.empty()) {
            cout << "Queue is empty!\n";
            return -1;  // Return -1 or handle empty case
        }
        return s1.top();  // Top of s1 is the front of the queue
    }

    // ✅ Check if queue is empty
    bool empty() {
        return s1.empty();
    }
};

int main() {
    Queue q;

    // 🚀 Pushing elements into the queue
    q.push(1);
    q.push(2);
    q.push(3);

    // 📝 Printing and popping elements to show FIFO behavior
    while (!q.empty()) {
        cout << q.front() << " ";  // Prints front element
        q.pop();                   // Removes front element
    }

    cout << endl;  // Output: 1 2 3 (FIFO order)
    return 0;
}
