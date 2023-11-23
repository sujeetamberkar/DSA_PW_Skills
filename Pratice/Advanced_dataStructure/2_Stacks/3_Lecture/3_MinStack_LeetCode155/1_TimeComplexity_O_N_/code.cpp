#include <iostream>
#include <stack>
#include <climits>
using namespace std;

class MinStack {
public:
    stack<int> st;
    MinStack() {}

    void push(int val) {
        st.push(val);
    }

    void pop() {
        st.pop();
    }

    int top() {
        return st.top();
    }

    int getMin() {
        stack<int> temp;
        int minValue = INT_MAX;
        while (!st.empty()) {
            minValue = min(minValue, st.top());
            temp.push(st.top());
            st.pop();
        }
        while (!temp.empty()) {
            st.push(temp.top());
            temp.pop();
        }
        return minValue;
    }
};

int main() {
    MinStack minStack;

    minStack.push(-2);
    minStack.push(0);
    minStack.push(-3);
    cout << "Current Min: " << minStack.getMin() << endl; // Returns -3.
    minStack.pop();
    cout << "Top element: " << minStack.top() << endl; // Returns 0.
    cout << "Current Min: " << minStack.getMin() << endl; // Returns -2.

    // Additional test cases
    minStack.push(-5);
    cout << "Current Min: " << minStack.getMin() << endl; // Returns -5.
    minStack.push(4);
    cout << "Top element: " << minStack.top() << endl; // Returns 4.
    minStack.pop();
    minStack.pop();
    cout << "Current Min: " << minStack.getMin() << endl; // Returns -2.

    return 0;
}
