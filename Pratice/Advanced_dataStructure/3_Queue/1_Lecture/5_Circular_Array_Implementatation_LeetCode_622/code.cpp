#include <iostream>
#include <vector>
using namespace std;

class MyCircularQueue {
public:
    int front;
    int back;
    int size;
    int capacity;
    vector<int> arr;

    MyCircularQueue(int k) : front(0), back(0), size(0), capacity(k), arr(vector<int>(k)) {}

    bool enQueue(int value) {
        if (isFull()) {
            return false;
        } else {
            arr[back] = value;
            back = (back + 1) % capacity;
            size++;
            return true;
        }
    }

    bool deQueue() {
        if (isEmpty()) {
            return false;
        } else {
            front = (front + 1) % capacity;
            size--;
            return true;
        }
    }

    int Front() {
        if (isEmpty()) {
            return -1;
        } else {
            return arr[front];
        }
    }

    int Rear() {
        if (isEmpty()) {
            return -1;
        } else {
            return arr[(back - 1 + capacity) % capacity];
        }
    }

    bool isEmpty() {
        return size == 0;
    }

    bool isFull() {
        return size == capacity;
    }
};
int main() {
    // Create a circular queue of capacity 3
    MyCircularQueue circularQueue(3);
    
    // Test enQueue operation
    cout << "Enqueue 1: " << circularQueue.enQueue(1) << endl;  // returns true
    cout << "Enqueue 2: " << circularQueue.enQueue(2) << endl;  // returns true
    cout << "Enqueue 3: " << circularQueue.enQueue(3) << endl;  // returns true
    cout << "Enqueue 4: " << circularQueue.enQueue(4) << endl;  // returns false, queue is full
    
    // Test Front and Rear operations
    cout << "Front item: " << circularQueue.Front() << endl;  // returns 1
    cout << "Rear item: " << circularQueue.Rear() << endl;    // returns 3
    
    // Test deQueue operation
    cout << "Dequeue: " << circularQueue.deQueue() << endl;  // returns true
    cout << "Dequeue: " << circularQueue.deQueue() << endl;  // returns true
    
    // Test isEmpty operation after deQueue
    cout << "Is queue empty: " << circularQueue.isEmpty() << endl;  // returns false
    
    // Test enQueue and isFull after deQueue
    cout << "Enqueue 4: " << circularQueue.enQueue(4) << endl;  // returns true
    cout << "Is queue full: " << circularQueue.isFull() << endl;  // returns true
    
    // Final state of Front and Rear
    cout << "Front item: " << circularQueue.Front() << endl;  // returns 3
    cout << "Rear item: " << circularQueue.Rear() << endl;    // returns 4
    
    return 0;
}
