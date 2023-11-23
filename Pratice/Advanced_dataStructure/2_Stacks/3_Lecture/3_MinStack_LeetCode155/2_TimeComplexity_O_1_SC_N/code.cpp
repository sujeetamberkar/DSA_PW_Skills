#include <iostream>
#include <stack>
#include <climits>
using namespace std;

class MinStack {
public:
    stack <int> st;
    stack <int> helper;
    MinStack() {
        
    }
    
    void push(int val) {
        st.push(val);
        if(helper.size()==0 || val <helper.top())
         {
            helper.push(val);
         }
        else 
        {
            helper.push(helper.top());
        }
    }
    
    void pop() {
        st.pop();
        helper.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return helper.top();
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
