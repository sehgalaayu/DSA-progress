#include <iostream>
using namespace std;

class Queue {
private:
    int *arr;       // Pointer to the array that will hold queue elements
    int capacity;   // Maximum capacity of the queue
    int currSize;   // Current size of the queue
    int f, r;       // Front and rear pointers

public:
    // Constructor to initialize the queue
    Queue(int capacity) {
        this->capacity = capacity;
        arr = new int[capacity];
        currSize = 0;
        f = r = -1;
    }

    // Destructor to clean up memory
    ~Queue() {
        delete[] arr;
    }

    // Push function to add elements to the queue (O(1))
    void push(int data) {
        if (currSize == capacity) {
            cout << "Queue is FULL\n";
            return;
        }
        r = (r + 1) % capacity; // Circular increment
        arr[r] = data;
        if (f == -1) f = 0;     // Set front if first element is added
        currSize++;
    }

    // Pop function to remove elements from the queue (O(1))
    void pop() {
        if (currSize == 0) {
            cout << "Queue is EMPTY\n";
            return;
        }
        f = (f + 1) % capacity; // Circular increment
        currSize--;
        if (currSize == 0) f = r = -1; // Reset if queue becomes empty
    }

    // Front function to get the front element of the queue
    int front() {
        if (currSize == 0) {
            cout << "Queue is EMPTY\n";
            return -1;
        }
        return arr[f];
    }

    // Rear function to get the rear element of the queue
    int rear() {
        if (currSize == 0) {
            cout << "Queue is EMPTY\n";
            return -1;
        }
        return arr[r];
    }
};

int main() {
    Queue q(4); // Create a queue of capacity 4

    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5); // Should display "Queue is FULL"

    cout << "Front: " << q.front() << endl; // Should print 1
    q.pop();

    cout << "Front: " << q.front() << endl; // Should print 2
    q.push(5);                              // Should add 5 to the queue

    cout << "Front: " << q.front() << endl; // Should print 2
    cout << "Rear: " << q.rear() << endl;   // Should print 5

    return 0;
}
