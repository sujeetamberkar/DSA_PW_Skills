#include<iostream>
#include<stdexcept>
using namespace std;

// template<typename T>
class Stack
{
private:
    int arr[5];
    int index;

public:
    Stack(): index(-1) {}

    void pop()
    {
        if (index > -1)
        {
            index--;
        }
        else
        {
            throw underflow_error("Stack underflow: Cannot pop from an empty stack.");
        }
    }

    void push(int val)
    {
        if (index >= 4)
        {
            throw overflow_error("Stack overflow: Cannot push to a full stack.");
        }
        else
        {
            arr[++index] = val;
        }
    }

    int top()
    {
        if (index == -1)
        {
            throw underflow_error("Stack underflow: Cannot top an empty stack.");
        }
        return arr[index];
    }

    int size()
    {
        return index + 1;
    }
};

int main()
{
    Stack  a;
    try {
        cout << a.top() << endl; 
    } catch (const exception& e) {
        cout << e.what() << endl;
    }


    return 0;
}
