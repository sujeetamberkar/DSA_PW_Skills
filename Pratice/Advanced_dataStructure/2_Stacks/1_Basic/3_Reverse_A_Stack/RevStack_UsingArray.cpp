#include <iostream>
#include <stack>
#include <vector>
using namespace std;
int main()
{

    stack<int> st;

    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.push(6);

    while (st.size())
    {
        cout << st.top() << "\t";
        st.pop();
    } // BUT THE PROBLEM IS THAT NOW THE STACK IS EMPTY
    cout << endl;

    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.push(6);
    vector<int> temp;
    while (st.size())
    {
        temp.push_back(st.top());
        st.pop();
    }

    for (int element : temp)
        st.push(element);
        
    while (st.size())
    {
        cout << st.top() << "\t";
        st.pop();
    }

    return 0;
}