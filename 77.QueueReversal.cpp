#include <iostream>
#include <queue>
#include <stack>
using namespace std;

/**
 * Function to reverse the elements of a queue.
 * @param q Reference to the queue that needs to be reversed.
 */
void reverseQueue(queue<int> &q) {
    stack<int> st;  // Step 1: Create a stack

    // Step 2: Transfer all elements from the queue to the stack
    // This reverses the order because stacks are LIFO (Last In First Out)
    while (!q.empty()) {
        st.push(q.front());  // Push the front element of the queue into the stack
        q.pop();             // Remove it from the queue
    }

    // Step 3: Transfer elements back from the stack to the queue
    // This places the elements in reversed order since the stack reversed them
    while (!st.empty()) {
        q.push(st.top());    // Push the top element of the stack into the queue
        st.pop();            // Remove it from the stack
    }
}

int main() {
    queue<int> q;

    // Input: Insert elements into the queue
    for (int i = 1; i <= 5; i++) {
        q.push(i);  // Queue: 1 2 3 4 5
    }

    cout << "Original queue: ";
    queue<int> temp = q;  // Copy of the original queue to display
    while (!temp.empty()) {
        cout << temp.front() << " ";
        temp.pop();
    }
    cout << endl;

    reverseQueue(q);  // Call the function to reverse the queue

    cout << "Reversed queue: ";
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }

    return 0;
}
