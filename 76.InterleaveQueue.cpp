#include <iostream>
#include <queue>
using namespace std;

void interleave(queue<int> &org) {
    int n = org.size();            // Get the size of the original queue
    queue<int> first;              // Create a queue to hold the first half

    // Step 1: Push the first half into 'first'
    for (int i = 0; i < n / 2; i++) {
        first.push(org.front());
        org.pop();
    }

    // Step 2: Interleave the two halves
    while (!first.empty()) {
        org.push(first.front());   // Push element from first half
        first.pop();

        org.push(org.front());     // Push element from second half
        org.pop();
    }
}

int main() {
    queue<int> org;

    // Example input: 1 2 3 4 5 6 7 8 9 10
    for (int i = 1; i <= 10; i++) {
        org.push(i);
    }

    interleave(org);  // Interleave the queue halves

    // Output the interleaved queue
    cout << "Interleaved queue: ";
    while (!org.empty()) {
        cout << org.front() << " ";
        org.pop();
    }

    return 0;
}
