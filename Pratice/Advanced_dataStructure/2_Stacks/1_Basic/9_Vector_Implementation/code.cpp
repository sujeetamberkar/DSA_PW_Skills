#include<iostream>
#include<vector>
using namespace std;
class stacks {
public:
    vector<int> v;

    int top()
    {
        try {
            if (v.empty()) {
                throw underflow_error("Stack is empty");
            }
            return v.back();
        } catch (const underflow_error& e) {
            cerr << e.what() << endl;
            return -1; // Return an error code or handle it as needed
        }
    }

    void push(int val)
    {
        v.push_back(val);
    }

    void pop()
    {
        try {
            if (v.empty()) {
                throw underflow_error("Stack is empty");
            }
            v.pop_back();
        } catch (const underflow_error& e) {
            cerr << e.what() << endl;
            // Handle error as needed
        }
    }
};
int main ()
{
    stacks a;
    a.pop();
    a.top();
    a.push(4);
    cout<<a.top();
}