#include <iostream>
#include <stack>
#include <climits>
using namespace std;

class MinStack
{
public:
    stack<long long> st;
    long long min;
    MinStack()
    {
        min = INT_MAX;
    }

    void push(long long val)
    {
        if (st.empty())
        {
            st.push(val);
            min = val;
        }
        else if (val >= min)
        {
            st.push(val);
        }
        else
        {
            st.push(val + (val - min));
            min = val;
        }
    }

    void pop()
    {
        if (st.top() >= min)
        {
            st.pop();
        }
        else
        {
            // NOW A FAKE VALUE IS PRESENT
            // BEFORE {POP} make sure to retrive the old minimum
            // Update the current minimum into a new minimum
            // OLD_MIN = 2 * min - st.top()

            long long OLD_MIN = 2 * min - st.top();
            min = OLD_MIN;
            st.pop();
        }
    }

    long long top()
    {
        if (st.top() < min)
        {
            return min;
        }
        else
        {
            return st.top();
        }
    }

    long long getMin()
    {
        return min;
    }
};

int main()
{
    MinStack minStack;

    minStack.push(-2);
    minStack.push(0);
    minStack.push(-3);
    cout << "Current Min: " << minStack.getMin() << endl; // Returns -3.
    minStack.pop();
    cout << "Top element: " << minStack.top() << endl;    // Returns 0.
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
