#include <iostream>
#include <queue>
using namespace std;

class Stack {
public:
    queue<int> q1, q2;  // Two queues to simulate a stack

    // ✅ Push operation: O(n) complexity
    void push(int data) {
        // Step 1: Push the new element into q2
        q2.push(data);

        // Step 2: Move all elements from q1 to q2
        while (!q1.empty()) {
            q2.push(q1.front());
            q1.pop();
        }

        // Step 3: Swap q1 and q2
        swap(q1, q2);
    }

    // ✅ Pop operation: O(1) complexity
    void pop() {
        if (q1.empty()) {
            cout << "Stack is empty!\n";
            return;
        }
        q1.pop();  // Removes the top element (front of q1)
    }

    // ✅ Top operation: O(1) complexity
    int top() {
        if (q1.empty()) {
            cout << "Stack is empty!\n";
            return -1;  // Handle empty stack case
        }
        return q1.front();  // Front of q1 is the top of the stack
    }

    // ✅ Check if stack is empty
    bool empty() {
        return q1.empty();
    }
};

int main() {
    Stack st;

    // 🚀 Pushing elements into the stack
    st.push(10);
    st.push(20);
    st.push(30);

    // 📝 Printing and popping elements to show LIFO behavior
    while (!st.empty()) {
        cout << st.top() << " ";  // Prints top element
        st.pop();                 // Removes top element
    }

    cout << endl;  // Output: 30 20 10 (LIFO order)
    return 0;
}
